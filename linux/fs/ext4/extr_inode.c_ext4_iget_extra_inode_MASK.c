
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_inode_info {int i_extra_isize; } ;
struct ext4_inode {int dummy; } ;
typedef scalar_t__ __le32 ;
struct TYPE_2__ {scalar_t__ i_inline_off; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static inline int FUNC_5(struct inode *VAR_3,
      struct ext4_inode *VAR_4,
      struct ext4_inode_info *VAR_5)
{
 __le32 *VAR_6 = (void *)VAR_4 +
   VAR_0 + VAR_5->i_extra_isize;

 if (VAR_0 + VAR_5->i_extra_isize + sizeof(__le32) <=
     FUNC_1(VAR_3->i_sb) &&
     *VAR_6 == FUNC_2(VAR_2)) {
  FUNC_4(VAR_3, VAR_1);
  return FUNC_3(VAR_3);
 } else
  FUNC_0(VAR_3)->i_inline_off = 0;
 return 0;
}
