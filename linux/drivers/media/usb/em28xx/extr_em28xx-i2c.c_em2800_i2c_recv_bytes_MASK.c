
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct em28xx {int (* em28xx_write_regs ) (struct em28xx*,int,int*,int) ;int (* em28xx_read_reg ) (struct em28xx*,int) ;int (* em28xx_read_reg_req_len ) (struct em28xx*,int,int,int*,int) ;TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int,char*,int) ;
 unsigned long FUNC_2 (struct em28xx*) ;
 unsigned long VAR_3 ;
 int FUNC_3 (struct em28xx*,int,int*,int) ;
 int FUNC_4 (struct em28xx*,int) ;
 int FUNC_5 (struct em28xx*,int,int,int*,int) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct em28xx *VAR_4, u8 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 unsigned long VAR_8 = VAR_3 + FUNC_2(VAR_4);
 u8 VAR_9[4];
 int VAR_10;
 int VAR_11;

 if (VAR_7 < 1 || VAR_7 > 4)
  return -VAR_2;


 VAR_9[1] = 0x84 + VAR_7 - 1;
 VAR_9[0] = VAR_5;
 VAR_10 = VAR_4->em28xx_write_regs(VAR_4, 0x04, VAR_9, 2);
 if (VAR_10 != 2) {
  FUNC_0(&VAR_4->intf->dev,
    "failed to trigger read from i2c address 0x%x (error=%i)\n",
    VAR_5, VAR_10);
  return (VAR_10 < 0) ? VAR_10 : -VAR_0;
 }


 while (FUNC_6(VAR_8)) {
  VAR_10 = VAR_4->em28xx_read_reg(VAR_4, 0x05);
  if (VAR_10 == 0x84 + VAR_7 - 1)
   break;
  if (VAR_10 == 0x94 + VAR_7 - 1) {
   FUNC_1(1, "R05 returned 0x%02x: I2C ACK error\n",
    VAR_10);
   return -VAR_1;
  }
  if (VAR_10 < 0) {
   FUNC_0(&VAR_4->intf->dev,
     "failed to get i2c transfer status from bridge register (error=%i)\n",
     VAR_10);
   return VAR_10;
  }
  FUNC_7(5000, 6000);
 }
 if (VAR_10 != 0x84 + VAR_7 - 1)
  FUNC_1(0, "read from i2c device at 0x%x timed out\n", VAR_5);


 VAR_10 = VAR_4->em28xx_read_reg_req_len(VAR_4, 0x00, 4 - VAR_7, VAR_9, VAR_7);
 if (VAR_10 != VAR_7) {
  FUNC_0(&VAR_4->intf->dev,
    "reading from i2c device at 0x%x failed: couldn't get the received message from the bridge (error=%i)\n",
    VAR_5, VAR_10);
  return (VAR_10 < 0) ? VAR_10 : -VAR_0;
 }
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_6[VAR_11] = VAR_9[VAR_7 - 1 - VAR_11];

 return VAR_10;
}
