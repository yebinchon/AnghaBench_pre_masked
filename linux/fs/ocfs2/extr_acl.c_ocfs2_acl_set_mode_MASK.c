
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; int i_mode; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; TYPE_1__ i_ctime; int i_mode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__ FUNC_8 (struct inode*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_13 (int *,struct buffer_head*) ;
 int FUNC_14 (struct inode*,struct buffer_head**) ;
 int * FUNC_15 (int ,int ) ;
 int FUNC_16 (int *,struct inode*,int ) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_2, struct buffer_head *VAR_3,
         handle_t *VAR_4, umode_t VAR_5)
{
 int VAR_6, VAR_7 = 0;
 struct ocfs2_dinode *VAR_8;

 if (VAR_3 == ((void*)0)) {
  VAR_6 = FUNC_14(VAR_2, &VAR_3);
  if (VAR_6) {
   FUNC_10(VAR_6);
   goto out;
  }
 } else
  FUNC_9(VAR_3);

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_15(FUNC_2(VAR_2->i_sb),
        VAR_0);
  if (FUNC_1(VAR_4)) {
   VAR_6 = FUNC_3(VAR_4);
   FUNC_10(VAR_6);
   goto out_brelse;
  }

  VAR_7 = 1;
 }

 VAR_8 = (struct ocfs2_dinode *)VAR_3->b_data;
 VAR_6 = FUNC_12(VAR_4, FUNC_0(VAR_2), VAR_3,
          VAR_1);
 if (VAR_6) {
  FUNC_10(VAR_6);
  goto out_commit;
 }

 VAR_2->i_mode = VAR_5;
 VAR_2->i_ctime = FUNC_8(VAR_2);
 VAR_8->i_mode = FUNC_5(VAR_2->i_mode);
 VAR_8->i_ctime = FUNC_7(VAR_2->i_ctime.tv_sec);
 VAR_8->i_ctime_nsec = FUNC_6(VAR_2->i_ctime.tv_nsec);
 FUNC_16(VAR_4, VAR_2, 0);

 FUNC_13(VAR_4, VAR_3);

out_commit:
 if (VAR_7)
  FUNC_11(FUNC_2(VAR_2->i_sb), VAR_4);
out_brelse:
 FUNC_4(VAR_3);
out:
 return VAR_6;
}
