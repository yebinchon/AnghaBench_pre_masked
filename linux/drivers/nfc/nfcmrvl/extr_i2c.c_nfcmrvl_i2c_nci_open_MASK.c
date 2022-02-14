
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfcmrvl_private {struct nfcmrvl_i2c_drv_data* drv_data; } ;
struct nfcmrvl_i2c_drv_data {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct nfcmrvl_private *VAR_1)
{
 struct nfcmrvl_i2c_drv_data *VAR_2 = VAR_1->drv_data;

 if (!VAR_2)
  return -VAR_0;

 return 0;
}
