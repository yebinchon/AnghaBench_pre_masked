
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ufs_inode_info {int meta_lock; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ __fs64 ;
struct TYPE_4__ {scalar_t__ key64; scalar_t__* p; struct buffer_head* bh; } ;
typedef TYPE_1__ Indirect ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static inline int FUNC_2(struct ufs_inode_info *VAR_0,
          struct buffer_head *VAR_1, __fs64 *VAR_2,
          Indirect *VAR_3, Indirect *VAR_4)
{
 Indirect *VAR_5;
 unsigned VAR_6;
 VAR_4->bh = VAR_1;
 do {
  VAR_6 = FUNC_0(&VAR_0->meta_lock);
  VAR_4->key64 = *(__fs64 *)(VAR_4->p = VAR_2);
  for (VAR_5 = VAR_3; VAR_5 <= VAR_4 && VAR_5->key64 == *(__fs64 *)VAR_5->p; VAR_5++)
   ;
 } while (FUNC_1(&VAR_0->meta_lock, VAR_6));
 return (VAR_5 > VAR_4);
}
