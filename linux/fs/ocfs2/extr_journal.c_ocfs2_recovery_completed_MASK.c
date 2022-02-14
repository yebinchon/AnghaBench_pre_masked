
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; struct ocfs2_recovery_map* recovery_map; } ;
struct ocfs2_recovery_map {scalar_t__ rm_used; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ocfs2_super *VAR_0)
{
 int VAR_1;
 struct ocfs2_recovery_map *VAR_2 = VAR_0->recovery_map;

 FUNC_0(&VAR_0->osb_lock);
 VAR_1 = (VAR_2->rm_used == 0);
 FUNC_1(&VAR_0->osb_lock);

 return VAR_1;
}
