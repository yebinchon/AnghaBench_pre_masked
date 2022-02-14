
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int,int,int *,int) ;int (* em28xx_read_reg ) (struct em28xx*,int) ;TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int,char*,int,...) ;
 int FUNC_2 (struct em28xx*,int,int,int *,int) ;
 int FUNC_3 (struct em28xx*,int) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_4, u16 VAR_5, u8 *VAR_6, u16 VAR_7)
{
 int VAR_8;

 if (VAR_7 < 1 || VAR_7 > 64)
  return -VAR_2;






 VAR_8 = VAR_4->em28xx_read_reg_req_len(VAR_4, 2, VAR_5, VAR_6, VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->intf->dev,
    "reading from i2c device at 0x%x failed (error=%i)\n",
    VAR_5, VAR_8);
  return VAR_8;
 }
 VAR_8 = VAR_4->em28xx_read_reg(VAR_4, 0x05);
 if (VAR_8 == 0)
  return VAR_7;
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->intf->dev,
    "failed to get i2c transfer status from bridge register (error=%i)\n",
    VAR_8);
  return VAR_8;
 }
 if (VAR_8 == 0x10) {
  FUNC_1(1, "I2C ACK error on writing to addr 0x%02x\n",
   VAR_5);
  return -VAR_1;
 }

 if (VAR_8 == 0x02 || VAR_8 == 0x04) {

  FUNC_1(0,
   "write to i2c device at 0x%x timed out (status=%i)\n",
   VAR_5, VAR_8);
  return -VAR_3;
 }

 FUNC_0(&VAR_4->intf->dev,
   "write to i2c device at 0x%x failed with unknown error (status=%i)\n",
   VAR_5, VAR_8);
 return -VAR_0;
}
