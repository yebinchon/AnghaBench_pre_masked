
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_dinode {int i_ctime_nsec; int i_ctime; } ;
struct TYPE_2__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_sb; TYPE_1__ i_ctime; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ FUNC_6 (struct inode*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int * FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_2,
         struct buffer_head *VAR_3)
{
 int VAR_4;
 handle_t *VAR_5;
 struct ocfs2_dinode *VAR_6 = (struct ocfs2_dinode *)VAR_3->b_data;

 VAR_5 = FUNC_11(FUNC_2(VAR_2->i_sb),
       VAR_0);
 if (FUNC_1(VAR_5)) {
  VAR_4 = FUNC_3(VAR_5);
  FUNC_7(VAR_4);
  goto out;
 }

 VAR_4 = FUNC_9(VAR_5, FUNC_0(VAR_2), VAR_3,
          VAR_1);
 if (VAR_4) {
  FUNC_7(VAR_4);
  goto out_commit;
 }

 VAR_2->i_ctime = FUNC_6(VAR_2);
 VAR_6->i_ctime = FUNC_5(VAR_2->i_ctime.tv_sec);
 VAR_6->i_ctime_nsec = FUNC_4(VAR_2->i_ctime.tv_nsec);

 FUNC_10(VAR_5, VAR_3);

out_commit:
 FUNC_8(FUNC_2(VAR_2->i_sb), VAR_5);
out:
 return VAR_4;
}
