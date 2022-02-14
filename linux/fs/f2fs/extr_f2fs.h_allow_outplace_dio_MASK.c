
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;


 struct f2fs_sb_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,struct kiocb*,struct iov_iter*) ;
 int FUNC_2 (struct iov_iter*) ;
 scalar_t__ FUNC_3 (struct f2fs_sb_info*,int ) ;

__attribute__((used)) static inline int FUNC_4(struct inode *VAR_2,
    struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct f2fs_sb_info *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = FUNC_2(VAR_4);

 return (FUNC_3(VAR_5, VAR_0) && (VAR_6 == VAR_1) &&
    !FUNC_1(VAR_2, VAR_3, VAR_4));
}
