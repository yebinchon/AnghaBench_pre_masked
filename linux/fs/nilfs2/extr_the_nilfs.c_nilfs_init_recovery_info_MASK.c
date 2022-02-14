
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_recovery_info {int ri_used_segments; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nilfs_recovery_info*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct nilfs_recovery_info *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->ri_used_segments);
}
