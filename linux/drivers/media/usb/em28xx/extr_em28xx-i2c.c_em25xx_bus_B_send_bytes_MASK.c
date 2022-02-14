
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct em28xx {int (* em28xx_write_regs_req ) (struct em28xx*,int,int,int *,int) ;int (* em28xx_read_reg_req ) (struct em28xx*,int,int) ;TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int,...) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct em28xx*,int,int,int *,int) ;
 int FUNC_3 (struct em28xx*,int,int) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_3, u16 VAR_4, u8 *VAR_5,
       u16 VAR_6)
{
 int VAR_7;

 if (VAR_6 < 1 || VAR_6 > 64)
  return -VAR_2;






 VAR_7 = VAR_3->em28xx_write_regs_req(VAR_3, 0x06, VAR_4, VAR_5, VAR_6);
 if (VAR_7 != VAR_6) {
  if (VAR_7 < 0) {
   FUNC_0(&VAR_3->intf->dev,
     "writing to i2c device at 0x%x failed (error=%i)\n",
     VAR_4, VAR_7);
   return VAR_7;
  }

  FUNC_0(&VAR_3->intf->dev,
    "%i bytes write to i2c device at 0x%x requested, but %i bytes written\n",
    VAR_6, VAR_4, VAR_7);
  return -VAR_0;
 }

 VAR_7 = VAR_3->em28xx_read_reg_req(VAR_3, 0x08, 0x0000);




 if (!VAR_7)
  return VAR_6;

 if (VAR_7 > 0) {
  FUNC_1(1, "Bus B R08 returned 0x%02x: I2C ACK error\n", VAR_7);
  return -VAR_1;
 }

 return VAR_7;





}
