
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int * commit_task; int uuid_str; int slot_num; int sb; } ;
struct ocfs2_journal {int j_journal; struct ocfs2_super* j_osb; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,struct ocfs2_super*,char*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_8 (struct ocfs2_super*,int,int) ;

int FUNC_9(struct ocfs2_journal *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_super *VAR_6;

 FUNC_0(!VAR_2);

 VAR_6 = VAR_2->j_osb;

 VAR_5 = FUNC_3(VAR_2->j_journal);
 if (VAR_5 < 0) {
  FUNC_5(VAR_0, "Failed to load journal!\n");
  goto done;
 }

 FUNC_7(VAR_6->sb, VAR_2->j_journal, VAR_6->slot_num);

 VAR_5 = FUNC_8(VAR_6, 1, VAR_4);
 if (VAR_5 < 0) {
  FUNC_6(VAR_5);
  goto done;
 }


 if (!VAR_3) {
  VAR_6->commit_task = FUNC_4(VAR_1, VAR_6,
    "ocfs2cmt-%s", VAR_6->uuid_str);
  if (FUNC_1(VAR_6->commit_task)) {
   VAR_5 = FUNC_2(VAR_6->commit_task);
   VAR_6->commit_task = ((void*)0);
   FUNC_5(VAR_0, "unable to launch ocfs2commit thread, "
        "error=%d", VAR_5);
   goto done;
  }
 } else
  VAR_6->commit_task = ((void*)0);

done:
 return VAR_5;
}
