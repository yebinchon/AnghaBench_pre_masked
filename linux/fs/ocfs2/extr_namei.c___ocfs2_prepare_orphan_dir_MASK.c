
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dir_lookup_result {int dummy; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ocfs2_super*,struct inode*,struct buffer_head*,char*,int,struct ocfs2_dir_lookup_result*) ;
 int FUNC_4 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4,
          struct buffer_head *VAR_5,
          u64 VAR_6,
          char *VAR_7,
          struct ocfs2_dir_lookup_result *VAR_8,
          bool VAR_9)
{
 int VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_0(VAR_4->i_sb);
 int VAR_12 = VAR_9 ?
   (VAR_2 + VAR_3) :
   VAR_3;

 if (VAR_9) {
  VAR_10 = FUNC_4(VAR_7, VAR_2 + 1, "%s",
    VAR_1);
  if (VAR_10 != VAR_2) {
   VAR_10 = -VAR_0;
   FUNC_1(VAR_10);
   return VAR_10;
  }

  VAR_10 = FUNC_2(VAR_6,
    VAR_7 + VAR_2);
 } else
  VAR_10 = FUNC_2(VAR_6, VAR_7);
 if (VAR_10 < 0) {
  FUNC_1(VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_11, VAR_4,
        VAR_5, VAR_7,
        VAR_12, VAR_8);
 if (VAR_10 < 0) {
  FUNC_1(VAR_10);
  return VAR_10;
 }

 return 0;
}
