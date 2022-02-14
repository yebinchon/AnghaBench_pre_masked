
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_dentry_lru; } ;
struct shrink_control {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_1 (int *,struct shrink_control*,int ,int *) ;
 int FUNC_2 (int *) ;

long FUNC_3(struct super_block *VAR_2, struct shrink_control *VAR_3)
{
 FUNC_0(VAR_1);
 long VAR_4;

 VAR_4 = FUNC_1(&VAR_2->s_dentry_lru, VAR_3,
         VAR_0, &VAR_1);
 FUNC_2(&VAR_1);
 return VAR_4;
}
