
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int length; } ;
typedef TYPE_1__ xfs_dir2_data_unused_t ;
typedef int xfs_dir2_data_off_t ;
struct TYPE_6__ {scalar_t__ magic; } ;
typedef TYPE_2__ xfs_dir2_data_hdr_t ;
typedef int uint ;
struct xfs_da_args {int trans; } ;
struct xfs_buf {TYPE_2__* b_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,struct xfs_buf*,int ,int ) ;

void
FUNC_4(
 struct xfs_da_args *VAR_4,
 struct xfs_buf *VAR_5,
 xfs_dir2_data_unused_t *VAR_6)
{
 xfs_dir2_data_hdr_t *VAR_7 = VAR_5->b_addr;

 FUNC_0(VAR_7->magic == FUNC_1(VAR_1) ||
        VAR_7->magic == FUNC_1(VAR_3) ||
        VAR_7->magic == FUNC_1(VAR_0) ||
        VAR_7->magic == FUNC_1(VAR_2));




 FUNC_3(VAR_4->trans, VAR_5, (uint)((char *)VAR_6 - (char *)VAR_7),
  (uint)((char *)&VAR_6->length + sizeof(VAR_6->length) -
         1 - (char *)VAR_7));



 FUNC_3(VAR_4->trans, VAR_5,
  (uint)((char *)FUNC_2(VAR_6) - (char *)VAR_7),
  (uint)((char *)FUNC_2(VAR_6) - (char *)VAR_7 +
         sizeof(xfs_dir2_data_off_t) - 1));
}
