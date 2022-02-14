
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct em28xx {int (* em28xx_write_regs_req ) (struct em28xx*,int,int,int *,int) ;int (* em28xx_read_reg ) (struct em28xx*,int) ;TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int,char*,int,...) ;
 unsigned long FUNC_2 (struct em28xx*) ;
 unsigned long VAR_4 ;
 int FUNC_3 (struct em28xx*,int,int,int *,int) ;
 int FUNC_4 (struct em28xx*,int) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct em28xx *VAR_5, u16 VAR_6, u8 *VAR_7,
     u16 VAR_8, int VAR_9)
{
 unsigned long VAR_10 = VAR_4 + FUNC_2(VAR_5);
 int VAR_11;

 if (VAR_8 < 1 || VAR_8 > 64)
  return -VAR_2;






 VAR_11 = VAR_5->em28xx_write_regs_req(VAR_5, VAR_9 ? 2 : 3, VAR_6, VAR_7, VAR_8);
 if (VAR_11 != VAR_8) {
  if (VAR_11 < 0) {
   FUNC_0(&VAR_5->intf->dev,
     "writing to i2c device at 0x%x failed (error=%i)\n",
     VAR_6, VAR_11);
   return VAR_11;
  }
  FUNC_0(&VAR_5->intf->dev,
    "%i bytes write to i2c device at 0x%x requested, but %i bytes written\n",
    VAR_8, VAR_6, VAR_11);
  return -VAR_0;
 }


 while (FUNC_5(VAR_10)) {
  VAR_11 = VAR_5->em28xx_read_reg(VAR_5, 0x05);
  if (VAR_11 == 0)
   return VAR_8;
  if (VAR_11 == 0x10) {
   FUNC_1(1, "I2C ACK error on writing to addr 0x%02x\n",
    VAR_6);
   return -VAR_1;
  }
  if (VAR_11 < 0) {
   FUNC_0(&VAR_5->intf->dev,
     "failed to get i2c transfer status from bridge register (error=%i)\n",
     VAR_11);
   return VAR_11;
  }
  FUNC_6(5000, 6000);





 }

 if (VAR_11 == 0x02 || VAR_11 == 0x04) {

  FUNC_1(0,
   "write to i2c device at 0x%x timed out (status=%i)\n",
   VAR_6, VAR_11);
  return -VAR_3;
 }

 FUNC_0(&VAR_5->intf->dev,
   "write to i2c device at 0x%x failed with unknown error (status=%i)\n",
   VAR_6, VAR_11);
 return -VAR_0;
}
