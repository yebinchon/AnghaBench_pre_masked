
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {scalar_t__ ki_pos; int ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int i_sb; } ;
struct ext4_sb_info {scalar_t__ s_bitmap_maxbytes; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ext4_sb_info* FUNC_0 (int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 struct inode* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct kiocb*,struct iov_iter*) ;
 scalar_t__ FUNC_5 (struct iov_iter*) ;
 int FUNC_6 (struct iov_iter*,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static ssize_t FUNC_8(struct kiocb *VAR_3, struct iov_iter *VAR_4)
{
 struct inode *VAR_5 = FUNC_3(VAR_3->ki_filp);
 ssize_t VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6 <= 0)
  return VAR_6;

 if (FUNC_7(FUNC_1(VAR_5)))
  return -VAR_1;





 if (!(FUNC_2(VAR_5, VAR_2))) {
  struct ext4_sb_info *VAR_7 = FUNC_0(VAR_5->i_sb);

  if (VAR_3->ki_pos >= VAR_7->s_bitmap_maxbytes)
   return -VAR_0;
  FUNC_6(VAR_4, VAR_7->s_bitmap_maxbytes - VAR_3->ki_pos);
 }
 return FUNC_5(VAR_4);
}
