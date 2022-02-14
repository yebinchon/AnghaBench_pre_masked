
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfs_dir2_leaf_entry {int dummy; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef int uint ;
struct TYPE_5__ {scalar_t__ magic; } ;
struct TYPE_6__ {TYPE_1__ info; } ;
struct xfs_dir2_leaf {TYPE_2__ hdr; } ;
struct xfs_da_args {int trans; TYPE_4__* dp; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
struct TYPE_8__ {TYPE_3__* d_ops; } ;
struct TYPE_7__ {struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (struct xfs_dir2_leaf*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 struct xfs_dir2_leaf_entry* FUNC_2 (struct xfs_dir2_leaf*) ;
 int FUNC_3 (int ,struct xfs_buf*,int ,int ) ;

void
FUNC_4(
 struct xfs_da_args *VAR_4,
 struct xfs_buf *VAR_5,
 int VAR_6,
 int VAR_7)
{
 xfs_dir2_leaf_entry_t *VAR_8;
 xfs_dir2_leaf_entry_t *VAR_9;
 struct xfs_dir2_leaf *VAR_10 = VAR_5->b_addr;
 struct xfs_dir2_leaf_entry *VAR_11;

 FUNC_0(VAR_10->hdr.info.magic == FUNC_1(VAR_0) ||
        VAR_10->hdr.info.magic == FUNC_1(VAR_2) ||
        VAR_10->hdr.info.magic == FUNC_1(VAR_1) ||
        VAR_10->hdr.info.magic == FUNC_1(VAR_3));

 VAR_11 = VAR_4->dp->d_ops->leaf_ents_p(VAR_10);
 VAR_8 = &VAR_11[VAR_6];
 VAR_9 = &VAR_11[VAR_7];
 FUNC_3(VAR_4->trans, VAR_5,
  (uint)((char *)VAR_8 - (char *)VAR_10),
  (uint)((char *)VAR_9 - (char *)VAR_10 + sizeof(*VAR_9) - 1));
}
