
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_dir2_leaf_tail_t ;
typedef int uint ;
struct TYPE_3__ {scalar_t__ magic; } ;
struct TYPE_4__ {TYPE_1__ info; } ;
struct xfs_dir2_leaf {TYPE_2__ hdr; } ;
struct xfs_da_args {int trans; int geo; } ;
struct xfs_buf {struct xfs_dir2_leaf* b_addr; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,struct xfs_dir2_leaf*) ;
 int FUNC_4 (int ,struct xfs_buf*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(
 struct xfs_da_args *VAR_2,
 struct xfs_buf *VAR_3,
 int VAR_4,
 int VAR_5)
{
 __be16 *VAR_6;
 __be16 *VAR_7;
 struct xfs_dir2_leaf *VAR_8 = VAR_3->b_addr;
 xfs_dir2_leaf_tail_t *VAR_9;

 FUNC_0(VAR_8->hdr.info.magic == FUNC_1(VAR_0) ||
        VAR_8->hdr.info.magic == FUNC_1(VAR_1));

 VAR_9 = FUNC_3(VAR_2->geo, VAR_8);
 VAR_6 = FUNC_2(VAR_9) + VAR_4;
 VAR_7 = FUNC_2(VAR_9) + VAR_5;
 FUNC_4(VAR_2->trans, VAR_3,
  (uint)((char *)VAR_6 - (char *)VAR_8),
  (uint)((char *)VAR_7 - (char *)VAR_8 + sizeof(*VAR_7) - 1));
}
