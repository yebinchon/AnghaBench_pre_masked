
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* t_mountp; } ;
typedef TYPE_2__ xfs_trans_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_hdr_t ;
typedef int xfs_dir2_block_tail_t ;
typedef int uint ;
struct xfs_buf {int * b_addr; } ;
struct TYPE_5__ {int m_dir_geo; } ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,struct xfs_buf*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(
 xfs_trans_t *VAR_0,
 struct xfs_buf *VAR_1,
 int VAR_2,
 int VAR_3)
{
 xfs_dir2_data_hdr_t *VAR_4 = VAR_1->b_addr;
 xfs_dir2_leaf_entry_t *VAR_5;
 xfs_dir2_block_tail_t *VAR_6;

 VAR_6 = FUNC_1(VAR_0->t_mountp->m_dir_geo, VAR_4);
 VAR_5 = FUNC_0(VAR_6);
 FUNC_2(VAR_0, VAR_1, (uint)((char *)&VAR_5[VAR_2] - (char *)VAR_4),
  (uint)((char *)&VAR_5[VAR_3 + 1] - (char *)VAR_4 - 1));
}
