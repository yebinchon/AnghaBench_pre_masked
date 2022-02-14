
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_fsize_t ;
struct TYPE_4__ {int di_size; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct TYPE_5__ {int i_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct xfs_inode*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline xfs_fsize_t FUNC_3(struct xfs_inode *VAR_0)
{
 if (FUNC_0(FUNC_1(VAR_0)->i_mode))
  return FUNC_2(FUNC_1(VAR_0));
 return VAR_0->i_d.di_size;
}
