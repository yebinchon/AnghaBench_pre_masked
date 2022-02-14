
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ magic; } ;
struct TYPE_8__ {TYPE_1__ hdr; } ;
typedef TYPE_4__ xfs_dir2_free_t ;
struct xfs_da_args {TYPE_3__* dp; int trans; } ;
struct xfs_buf {TYPE_4__* b_addr; } ;
struct TYPE_7__ {TYPE_2__* d_ops; } ;
struct TYPE_6__ {scalar_t__ free_hdr_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct xfs_buf*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(
 struct xfs_da_args *VAR_2,
 struct xfs_buf *VAR_3)
{







 FUNC_2(VAR_2->trans, VAR_3, 0,
     VAR_2->dp->d_ops->free_hdr_size - 1);
}
