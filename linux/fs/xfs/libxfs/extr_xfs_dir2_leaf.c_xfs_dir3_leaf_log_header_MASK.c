
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint ;
struct TYPE_5__ {scalar_t__ magic; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
struct xfs_dir2_leaf {TYPE_2__ hdr; } ;
struct xfs_da_args {TYPE_4__* dp; int trans; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
struct TYPE_8__ {TYPE_3__* d_ops; } ;
struct TYPE_7__ {scalar_t__ leaf_hdr_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct xfs_buf*,int ,scalar_t__) ;

void
FUNC_3(
 struct xfs_da_args *VAR_4,
 struct xfs_buf *VAR_5)
{
 struct xfs_dir2_leaf *VAR_6 = VAR_5->b_addr;

 FUNC_0(VAR_6->hdr.info.magic == FUNC_1(VAR_0) ||
        VAR_6->hdr.info.magic == FUNC_1(VAR_2) ||
        VAR_6->hdr.info.magic == FUNC_1(VAR_1) ||
        VAR_6->hdr.info.magic == FUNC_1(VAR_3));

 FUNC_2(VAR_4->trans, VAR_5,
     (uint)((char *)&VAR_6->hdr - (char *)VAR_6),
     VAR_4->dp->d_ops->leaf_hdr_size - 1);
}
