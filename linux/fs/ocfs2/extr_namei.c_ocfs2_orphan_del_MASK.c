
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {int * member_0; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_mode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 char* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ocfs2_dinode*,int) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (int *,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_7 (char*,int ,struct inode*,struct ocfs2_dir_lookup_result*) ;
 int FUNC_8 (struct ocfs2_dir_lookup_result*) ;
 int FUNC_9 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_10 (int *,struct buffer_head*) ;
 int FUNC_11 (struct ocfs2_dinode*) ;
 int FUNC_12 (struct inode*,int ) ;
 int FUNC_13 (char*,int,char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (unsigned long long,char*,int ) ;

int FUNC_16(struct ocfs2_super *VAR_5,
       handle_t *VAR_6,
       struct inode *VAR_7,
       struct inode *VAR_8,
       struct buffer_head *VAR_9,
       bool VAR_10)
{
 char VAR_11[VAR_2 + VAR_4 + 1];
 struct ocfs2_dinode *VAR_12;
 int VAR_13 = 0;
 struct ocfs2_dir_lookup_result VAR_14 = { ((void*)0), };

 if (VAR_10) {
  VAR_13 = FUNC_13(VAR_11, VAR_2 + 1, "%s",
    VAR_1);
  if (VAR_13 != VAR_2) {
   VAR_13 = -VAR_0;
   FUNC_3(VAR_13);
   return VAR_13;
  }

  VAR_13 = FUNC_5(FUNC_1(VAR_8)->ip_blkno,
    VAR_11 + VAR_2);
 } else
  VAR_13 = FUNC_5(FUNC_1(VAR_8)->ip_blkno, VAR_11);
 if (VAR_13 < 0) {
  FUNC_3(VAR_13);
  goto leave;
 }

 FUNC_15(
      (unsigned long long)FUNC_1(VAR_7)->ip_blkno,
      VAR_11, FUNC_14(VAR_11));

 VAR_13 = FUNC_9(VAR_6,
      FUNC_0(VAR_7),
      VAR_9,
      VAR_3);
 if (VAR_13 < 0) {
  FUNC_3(VAR_13);
  goto leave;
 }


 VAR_13 = FUNC_7(VAR_11, FUNC_14(VAR_11), VAR_7,
      &VAR_14);
 if (VAR_13) {
  FUNC_3(VAR_13);
  goto leave;
 }


 VAR_13 = FUNC_6(VAR_6, VAR_7, &VAR_14);
 if (VAR_13 < 0) {
  FUNC_3(VAR_13);
  goto leave;
 }


 VAR_12 = (struct ocfs2_dinode *) VAR_9->b_data;
 if (FUNC_2(VAR_8->i_mode))
  FUNC_4(VAR_12, -1);
 FUNC_12(VAR_7, FUNC_11(VAR_12));
 FUNC_10(VAR_6, VAR_9);

leave:
 FUNC_8(&VAR_14);

 if (VAR_13)
  FUNC_3(VAR_13);
 return VAR_13;
}
