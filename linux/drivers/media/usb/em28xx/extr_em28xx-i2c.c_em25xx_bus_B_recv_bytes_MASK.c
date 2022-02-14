
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int,int,int *,int) ;int (* em28xx_read_reg_req ) (struct em28xx*,int,int) ;TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct em28xx*,int,int,int *,int) ;
 int FUNC_3 (struct em28xx*,int,int) ;

__attribute__((used)) static int FUNC_4(struct em28xx *VAR_2, u16 VAR_3, u8 *VAR_4,
       u16 VAR_5)
{
 int VAR_6;

 if (VAR_5 < 1 || VAR_5 > 64)
  return -VAR_1;






 VAR_6 = VAR_2->em28xx_read_reg_req_len(VAR_2, 0x06, VAR_3, VAR_4, VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_2->intf->dev,
    "reading from i2c device at 0x%x failed (error=%i)\n",
    VAR_3, VAR_6);
  return VAR_6;
 }
 VAR_6 = VAR_2->em28xx_read_reg_req(VAR_2, 0x08, 0x0000);




 if (!VAR_6)
  return VAR_5;

 if (VAR_6 > 0) {
  FUNC_1(1, "Bus B R08 returned 0x%02x: I2C ACK error\n", VAR_6);
  return -VAR_0;
 }

 return VAR_6;





}
