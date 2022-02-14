
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct f2fs_sb_info*) ;
 struct f2fs_sb_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct inode*,struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_4 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct f2fs_sb_info*) ;
 int FUNC_7 (struct iov_iter*) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_9 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline bool FUNC_10(struct inode *VAR_3,
    struct kiocb *VAR_4, struct iov_iter *VAR_5)
{
 struct f2fs_sb_info *VAR_6 = FUNC_1(VAR_3);
 int VAR_7 = FUNC_7(VAR_5);

 if (FUNC_5(VAR_3))
  return 1;
 if (FUNC_4(VAR_6))
  return 1;




 if (FUNC_6(VAR_6))
  return 1;
 if (FUNC_9(VAR_6, VAR_0) && (VAR_7 == VAR_2)) {
  if (FUNC_3(VAR_3, VAR_4, VAR_5))
   return 1;
  if (FUNC_0(VAR_6))
   return 1;
 }
 if (FUNC_8(FUNC_1(VAR_3), VAR_1) &&
     !FUNC_2(VAR_3))
  return 1;

 return 0;
}
