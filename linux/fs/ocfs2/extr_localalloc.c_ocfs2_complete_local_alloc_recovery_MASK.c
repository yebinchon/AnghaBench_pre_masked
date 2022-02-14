
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_7__ {int h_sync; } ;
typedef TYPE_1__ handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ocfs2_super*,TYPE_1__*) ;
 struct inode* FUNC_8 (struct ocfs2_super*,int ,int ) ;
 int FUNC_9 (struct ocfs2_super*) ;
 int FUNC_10 (struct inode*,struct buffer_head**,int) ;
 int FUNC_11 (struct inode*,int) ;
 TYPE_1__* FUNC_12 (struct ocfs2_super*,int ) ;
 int FUNC_13 (struct ocfs2_super*,TYPE_1__*,struct ocfs2_dinode*,struct inode*,struct buffer_head*) ;

int FUNC_14(struct ocfs2_super *VAR_4,
     struct ocfs2_dinode *VAR_5)
{
 int VAR_6;
 handle_t *VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct inode *VAR_9;

 VAR_9 = FUNC_8(VAR_4,
          VAR_1,
          VAR_2);
 if (!VAR_9) {
  VAR_6 = -VAR_0;
  FUNC_6(VAR_6);
  goto out;
 }

 FUNC_3(VAR_9);

 VAR_6 = FUNC_10(VAR_9, &VAR_8, 1);
 if (VAR_6 < 0) {
  FUNC_6(VAR_6);
  goto out_mutex;
 }

 VAR_7 = FUNC_12(VAR_4, VAR_3);
 if (FUNC_0(VAR_7)) {
  VAR_6 = FUNC_1(VAR_7);
  VAR_7 = ((void*)0);
  FUNC_6(VAR_6);
  goto out_unlock;
 }


 VAR_7->h_sync = 1;

 VAR_6 = FUNC_13(VAR_4, VAR_7, VAR_5,
       VAR_9, VAR_8);
 if (VAR_6 < 0)
  FUNC_6(VAR_6);

 FUNC_7(VAR_4, VAR_7);

out_unlock:
 FUNC_11(VAR_9, 1);

out_mutex:
 FUNC_4(VAR_9);

 FUNC_2(VAR_8);

 FUNC_5(VAR_9);

out:
 if (!VAR_6)
  FUNC_9(VAR_4);
 if (VAR_6)
  FUNC_6(VAR_6);
 return VAR_6;
}
