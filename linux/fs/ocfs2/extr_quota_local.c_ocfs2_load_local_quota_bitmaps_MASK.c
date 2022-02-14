
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_quota_chunk {int qc_num; int qc_chunk; int * qc_headerbh; } ;
struct ocfs2_local_disk_dqinfo {int dqi_chunks; } ;
struct list_head {int dummy; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 struct ocfs2_quota_chunk* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct ocfs2_quota_chunk*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (struct inode*,int ,int **) ;
 int FUNC_7 (struct list_head*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_3,
   struct ocfs2_local_disk_dqinfo *VAR_4,
   struct list_head *VAR_5)
{
 struct ocfs2_quota_chunk *VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_5);
 for (VAR_7 = 0; VAR_7 < FUNC_3(VAR_4->dqi_chunks); VAR_7++) {
  VAR_6 = FUNC_1(VAR_2, VAR_1);
  if (!VAR_6) {
   FUNC_7(VAR_5);
   return -VAR_0;
  }
  VAR_6->qc_num = VAR_7;
  VAR_6->qc_headerbh = ((void*)0);
  VAR_8 = FUNC_6(VAR_3,
    FUNC_8(VAR_3->i_sb, VAR_7),
    &VAR_6->qc_headerbh);
  if (VAR_8) {
   FUNC_5(VAR_8);
   FUNC_2(VAR_2, VAR_6);
   FUNC_7(VAR_5);
   return VAR_8;
  }
  FUNC_4(&VAR_6->qc_chunk, VAR_5);
 }
 return 0;
}
