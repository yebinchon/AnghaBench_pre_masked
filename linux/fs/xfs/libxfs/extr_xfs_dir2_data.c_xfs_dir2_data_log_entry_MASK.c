
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfs_dir2_data_entry_t ;
typedef int uint ;
struct xfs_dir2_data_hdr {scalar_t__ magic; } ;
struct xfs_da_args {TYPE_2__* dp; int trans; } ;
struct xfs_buf {struct xfs_dir2_data_hdr* b_addr; } ;
struct TYPE_4__ {TYPE_1__* d_ops; } ;
struct TYPE_3__ {scalar_t__ (* data_entry_tag_p ) (int *) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,struct xfs_buf*,int ,int ) ;

void
FUNC_4(
 struct xfs_da_args *VAR_4,
 struct xfs_buf *VAR_5,
 xfs_dir2_data_entry_t *VAR_6)
{
 struct xfs_dir2_data_hdr *VAR_7 = VAR_5->b_addr;

 FUNC_0(VAR_7->magic == FUNC_1(VAR_1) ||
        VAR_7->magic == FUNC_1(VAR_3) ||
        VAR_7->magic == FUNC_1(VAR_0) ||
        VAR_7->magic == FUNC_1(VAR_2));

 FUNC_3(VAR_4->trans, VAR_5, (uint)((char *)VAR_6 - (char *)VAR_7),
  (uint)((char *)(VAR_4->dp->d_ops->data_entry_tag_p(VAR_6) + 1) -
         (char *)VAR_7 - 1));
}
