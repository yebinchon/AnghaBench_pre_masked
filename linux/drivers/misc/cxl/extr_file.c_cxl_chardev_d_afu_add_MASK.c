
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_afu {int chardev_d; int afu_cdev_d; } ;


 int FUNC_0 (struct cxl_afu*) ;
 int VAR_0 ;
 int FUNC_1 (struct cxl_afu*,int ,int *,int *,char*,char*,int *) ;

int FUNC_2(struct cxl_afu *VAR_1)
{
 return FUNC_1(VAR_1, FUNC_0(VAR_1), &VAR_1->afu_cdev_d,
          &VAR_1->chardev_d, "d", "dedicated",
          &VAR_0);
}
