
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_inode {TYPE_1__* i_mount; } ;
struct TYPE_2__ {int m_sb; scalar_t__ m_always_cow; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline bool FUNC_1(struct xfs_inode *VAR_0)
{
 return VAR_0->i_mount->m_always_cow &&
  FUNC_0(&VAR_0->i_mount->m_sb);
}
