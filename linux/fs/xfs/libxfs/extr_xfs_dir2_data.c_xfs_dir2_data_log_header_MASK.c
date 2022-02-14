
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfs_dir2_data_hdr {scalar_t__ magic; } ;
struct xfs_da_args {TYPE_2__* dp; int trans; } ;
struct xfs_buf {struct xfs_dir2_data_hdr* b_addr; } ;
struct TYPE_4__ {TYPE_1__* d_ops; } ;
struct TYPE_3__ {scalar_t__ data_entry_offset; } ;


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
 FUNC_2(VAR_4->trans, VAR_5, 0,
     VAR_4->dp->d_ops->data_entry_offset - 1);
}
