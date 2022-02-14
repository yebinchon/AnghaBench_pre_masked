
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int lp_mutex; int lpt_cnext; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ubifs_info*) ;

int FUNC_5(struct ubifs_info *VAR_0)
{
 int VAR_1;

 FUNC_0("");

 if (!VAR_0->lpt_cnext)
  return 0;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_2(&VAR_0->lp_mutex);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->lp_mutex);

 return 0;
}
