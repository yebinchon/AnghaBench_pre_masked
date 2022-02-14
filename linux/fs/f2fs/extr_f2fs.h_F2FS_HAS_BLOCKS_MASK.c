
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_blocks; } ;
typedef int block_t ;
struct TYPE_2__ {scalar_t__ i_xattr_nid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(struct inode *VAR_1)
{
 block_t VAR_2 = FUNC_0(VAR_1)->i_xattr_nid ? 1 : 0;

 return (VAR_1->i_blocks >> VAR_0) > VAR_2;
}
