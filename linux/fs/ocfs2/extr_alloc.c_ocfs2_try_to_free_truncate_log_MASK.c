
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tid_t ;
struct ocfs2_super {unsigned int truncated_clusters; TYPE_1__* journal; int osb_tl_inode; } ;
struct TYPE_2__ {int j_journal; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ocfs2_super*) ;

int FUNC_6(struct ocfs2_super *VAR_0,
     unsigned int VAR_1)
{
 tid_t VAR_2;
 int VAR_3 = 0;
 unsigned int VAR_4;

 FUNC_0(VAR_0->osb_tl_inode);
 VAR_4 = VAR_0->truncated_clusters;
 FUNC_1(VAR_0->osb_tl_inode);





 if (VAR_4 < VAR_1)
  goto out;

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3) {
  FUNC_4(VAR_3);
  goto out;
 }

 if (FUNC_2(VAR_0->journal->j_journal, &VAR_2)) {
  FUNC_3(VAR_0->journal->j_journal, VAR_2);
  VAR_3 = 1;
 }
out:
 return VAR_3;
}
