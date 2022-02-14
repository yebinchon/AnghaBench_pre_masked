
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uss720_async_request {int ref_count; } ;
struct parport_uss720_private {TYPE_1__* usbdev; } ;
struct parport {struct parport_uss720_private* private_data; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 struct uss720_async_request* FUNC_2 (struct parport_uss720_private*,int,int,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct parport *VAR_2, unsigned char VAR_3, unsigned char VAR_4, gfp_t VAR_5)
{
 struct parport_uss720_private *VAR_6;
 struct uss720_async_request *VAR_7;

 if (!VAR_2)
  return -VAR_0;
 VAR_6 = VAR_2->private_data;
 VAR_7 = FUNC_2(VAR_6, 4, 0x40, (((unsigned int)VAR_3) << 8) | VAR_4, 0, VAR_5);
 if (!VAR_7) {
  FUNC_0(&VAR_6->usbdev->dev, "set_1284_register(%u,%u) failed",
   (unsigned int)VAR_3, (unsigned int)VAR_4);
  return -VAR_0;
 }
 FUNC_1(&VAR_7->ref_count, VAR_1);
 return 0;
}
