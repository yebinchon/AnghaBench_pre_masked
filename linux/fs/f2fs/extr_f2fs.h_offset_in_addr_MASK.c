
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_inode {int i_inline; int i_extra_isize; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct f2fs_inode *VAR_1)
{
 return (VAR_1->i_inline & VAR_0) ?
   (FUNC_0(VAR_1->i_extra_isize) / sizeof(__le32)) : 0;
}
