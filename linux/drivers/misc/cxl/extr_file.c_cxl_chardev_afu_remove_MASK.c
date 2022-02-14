
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int * chardev_s; int afu_cdev_s; int * chardev_m; int afu_cdev_m; int * chardev_d; int afu_cdev_d; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cxl_afu *VAR_0)
{
 if (VAR_0->chardev_d) {
  FUNC_0(&VAR_0->afu_cdev_d);
  FUNC_1(VAR_0->chardev_d);
  VAR_0->chardev_d = ((void*)0);
 }
 if (VAR_0->chardev_m) {
  FUNC_0(&VAR_0->afu_cdev_m);
  FUNC_1(VAR_0->chardev_m);
  VAR_0->chardev_m = ((void*)0);
 }
 if (VAR_0->chardev_s) {
  FUNC_0(&VAR_0->afu_cdev_s);
  FUNC_1(VAR_0->chardev_s);
  VAR_0->chardev_s = ((void*)0);
 }
}
