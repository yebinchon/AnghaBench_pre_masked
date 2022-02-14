
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct em28xx {int (* em28xx_write_regs ) (struct em28xx*,int,int*,int) ;int (* em28xx_read_reg ) (struct em28xx*,int) ;TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int,char*,int) ;
 unsigned long FUNC_2 (struct em28xx*) ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct em28xx*,int,int*,int) ;
 int FUNC_4 (struct em28xx*,int) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct em28xx *VAR_5, u8 VAR_6, u8 *VAR_7, u16 VAR_8)
{
 unsigned long VAR_9 = VAR_4 + FUNC_2(VAR_5);
 int VAR_10;
 u8 VAR_11[6];

 if (VAR_8 < 1 || VAR_8 > 4)
  return -VAR_2;

 VAR_11[5] = 0x80 + VAR_8 - 1;
 VAR_11[4] = VAR_6;
 VAR_11[3] = VAR_7[0];
 if (VAR_8 > 1)
  VAR_11[2] = VAR_7[1];
 if (VAR_8 > 2)
  VAR_11[1] = VAR_7[2];
 if (VAR_8 > 3)
  VAR_11[0] = VAR_7[3];


 VAR_10 = VAR_5->em28xx_write_regs(VAR_5, 4 - VAR_8, &VAR_11[4 - VAR_8], 2 + VAR_8);
 if (VAR_10 != 2 + VAR_8) {
  FUNC_0(&VAR_5->intf->dev,
    "failed to trigger write to i2c address 0x%x (error=%i)\n",
       VAR_6, VAR_10);
  return (VAR_10 < 0) ? VAR_10 : -VAR_0;
 }

 while (FUNC_5(VAR_9)) {
  VAR_10 = VAR_5->em28xx_read_reg(VAR_5, 0x05);
  if (VAR_10 == 0x80 + VAR_8 - 1)
   return VAR_8;
  if (VAR_10 == 0x94 + VAR_8 - 1) {
   FUNC_1(1, "R05 returned 0x%02x: I2C ACK error\n", VAR_10);
   return -VAR_1;
  }
  if (VAR_10 < 0) {
   FUNC_0(&VAR_5->intf->dev,
     "failed to get i2c transfer status from bridge register (error=%i)\n",
    VAR_10);
   return VAR_10;
  }
  FUNC_6(5000, 6000);
 }
 FUNC_1(0, "write to i2c device at 0x%x timed out\n", VAR_6);
 return -VAR_3;
}
