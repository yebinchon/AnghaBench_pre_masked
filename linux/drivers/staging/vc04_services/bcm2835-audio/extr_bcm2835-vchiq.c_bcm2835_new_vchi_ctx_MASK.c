
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct bcm2835_vchi_ctx {int * vchi_instance; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;

int FUNC_5(struct device *VAR_1, struct bcm2835_vchi_ctx *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_4(&VAR_2->vchi_instance);
 if (VAR_3) {
  FUNC_1(VAR_1, "failed to initialise VCHI instance (ret=%d)\n",
   VAR_3);
  return -VAR_0;
 }

 VAR_3 = FUNC_3(VAR_2->vchi_instance);
 if (VAR_3) {
  FUNC_0(VAR_1, "failed to connect VCHI instance (ret=%d)\n",
   VAR_3);

  FUNC_2(VAR_2->vchi_instance);
  VAR_2->vchi_instance = ((void*)0);

  return -VAR_0;
 }

 return 0;
}
