
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int * dentry; int dev_list; } ;
struct opp_device {int * dentry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct opp_device*,struct opp_table*) ;

void FUNC_3(struct opp_device *VAR_0,
     struct opp_table *VAR_1)
{
 if (VAR_0->dentry == VAR_1->dentry) {

  if (!FUNC_1(&VAR_1->dev_list)) {
   FUNC_2(VAR_0, VAR_1);
   goto out;
  }
  VAR_1->dentry = ((void*)0);
 }

 FUNC_0(VAR_0->dentry);

out:
 VAR_0->dentry = ((void*)0);
}
