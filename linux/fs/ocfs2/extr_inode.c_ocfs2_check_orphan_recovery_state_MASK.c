
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; int * osb_orphan_wipes; int osb_recovering_orphan_dirs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ocfs2_super*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct ocfs2_super *VAR_1,
          int VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_1->osb_lock);
 if (FUNC_0(VAR_1, &VAR_1->osb_recovering_orphan_dirs, VAR_2)) {
  VAR_3 = -VAR_0;
  goto out;
 }


 VAR_1->osb_orphan_wipes[VAR_2]++;
out:
 FUNC_2(&VAR_1->osb_lock);
 FUNC_3(VAR_2, VAR_3);
 return VAR_3;
}
