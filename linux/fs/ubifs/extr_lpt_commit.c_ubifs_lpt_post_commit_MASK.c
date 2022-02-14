
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int lp_mutex; scalar_t__ big_lpt; } ;


 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ubifs_info*) ;

int FUNC_5(struct ubifs_info *VAR_0)
{
 int VAR_1;

 FUNC_2(&VAR_0->lp_mutex);
 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto out;
 if (VAR_0->big_lpt)
  while (FUNC_4(VAR_0)) {
   FUNC_3(&VAR_0->lp_mutex);
   VAR_1 = FUNC_0(VAR_0);
   if (VAR_1)
    return VAR_1;
   FUNC_2(&VAR_0->lp_mutex);
  }
out:
 FUNC_3(&VAR_0->lp_mutex);
 return VAR_1;
}
