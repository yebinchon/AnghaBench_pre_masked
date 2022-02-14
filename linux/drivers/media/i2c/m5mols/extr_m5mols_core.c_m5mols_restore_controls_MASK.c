
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m5mols_info {int ctrl_sync; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (struct m5mols_info*,int ) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct m5mols_info *VAR_1)
{
 int VAR_2;

 if (VAR_1->ctrl_sync)
  return 0;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(&VAR_1->handle);
 VAR_1->ctrl_sync = !VAR_2;

 return VAR_2;
}
