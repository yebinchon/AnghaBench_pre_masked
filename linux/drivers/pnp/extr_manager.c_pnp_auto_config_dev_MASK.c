
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int num_dependent_sets; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pnp_dev*,int) ;
 int FUNC_2 (struct pnp_dev*) ;
 int FUNC_3 (int *,char*) ;

int FUNC_4(struct pnp_dev *VAR_1)
{
 int VAR_2, VAR_3;

 if (!FUNC_2(VAR_1)) {
  FUNC_3(&VAR_1->dev, "configuration not supported\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_1(VAR_1, 0);
 if (VAR_3 == 0)
  return 0;

 for (VAR_2 = 1; VAR_2 < VAR_1->num_dependent_sets; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 == 0)
   return 0;
 }

 FUNC_0(&VAR_1->dev, "unable to assign resources\n");
 return VAR_3;
}
