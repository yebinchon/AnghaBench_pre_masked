
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;


typedef int xfs_trans_t ;
struct TYPE_19__ {TYPE_2__* m_dirnameops; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_20__ {TYPE_1__* d_ops; TYPE_3__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int xfs_dir2_leaf_t ;
struct xfs_dir2_leaf_entry {int address; int hashval; } ;
typedef struct xfs_dir2_leaf_entry xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_21__ {int namelen; int name; } ;
typedef TYPE_5__ xfs_dir2_data_entry_t ;
struct TYPE_22__ {scalar_t__ hashval; int cmpresult; int op_flags; TYPE_12__* geo; int * trans; TYPE_4__* dp; } ;
typedef TYPE_6__ xfs_da_args_t ;
struct xfs_dir3_icleaf_hdr {int count; } ;
struct xfs_buf {int * b_addr; } ;
typedef enum xfs_dacmp { ____Placeholder_xfs_dacmp } xfs_dacmp ;
struct TYPE_18__ {int (* compname ) (TYPE_6__*,int ,int ) ;} ;
struct TYPE_17__ {int (* leaf_hdr_from_disk ) (struct xfs_dir3_icleaf_hdr*,int *) ;struct xfs_dir2_leaf_entry* (* leaf_ents_p ) (int *) ;} ;
struct TYPE_16__ {int leafblk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 struct xfs_dir2_leaf_entry* FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_dir3_icleaf_hdr*,int *) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 int FUNC_5 (TYPE_12__*,scalar_t__) ;
 int FUNC_6 (TYPE_12__*,scalar_t__) ;
 int FUNC_7 (TYPE_12__*,int) ;
 int FUNC_8 (TYPE_6__*,struct xfs_buf*) ;
 int FUNC_9 (int *,TYPE_4__*,int ,int,struct xfs_buf**) ;
 int FUNC_10 (TYPE_4__*,struct xfs_buf*) ;
 int FUNC_11 (int *,TYPE_4__*,int ,int,struct xfs_buf**) ;
 int FUNC_12 (int *,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_13(
 xfs_da_args_t *VAR_6,
 struct xfs_buf **VAR_7,
 int *VAR_8,
 struct xfs_buf **VAR_9)
{
 xfs_dir2_db_t VAR_10 = -1;
 struct xfs_buf *VAR_11 = ((void*)0);
 xfs_dir2_data_entry_t *VAR_12;
 xfs_inode_t *VAR_13;
 int VAR_14;
 int VAR_15;
 struct xfs_buf *VAR_16;
 xfs_dir2_leaf_entry_t *VAR_17;
 xfs_dir2_leaf_t *VAR_18;
 xfs_mount_t *VAR_19;
 xfs_dir2_db_t VAR_20;
 xfs_trans_t *VAR_21;
 xfs_dir2_db_t VAR_22 = -1;
 enum xfs_dacmp VAR_23;
 struct xfs_dir2_leaf_entry *VAR_24;
 struct xfs_dir3_icleaf_hdr VAR_25;

 VAR_13 = VAR_6->dp;
 VAR_21 = VAR_6->trans;
 VAR_19 = VAR_13->i_mount;

 VAR_14 = FUNC_11(VAR_21, VAR_13, VAR_6->geo->leafblk, -1, &VAR_16);
 if (VAR_14)
  return VAR_14;

 *VAR_7 = VAR_16;
 VAR_18 = VAR_16->b_addr;
 FUNC_10(VAR_13, VAR_16);
 VAR_24 = VAR_13->d_ops->leaf_ents_p(VAR_18);
 VAR_13->d_ops->leaf_hdr_from_disk(&VAR_25, VAR_18);




 VAR_15 = FUNC_8(VAR_6, VAR_16);




 for (VAR_17 = &VAR_24[VAR_15];
      VAR_15 < VAR_25.count && FUNC_1(VAR_17->hashval) == VAR_6->hashval;
      VAR_17++, VAR_15++) {



  if (FUNC_1(VAR_17->address) == VAR_5)
   continue;



  VAR_20 = FUNC_5(VAR_6->geo,
            FUNC_1(VAR_17->address));




  if (VAR_20 != VAR_10) {
   if (VAR_11)
    FUNC_12(VAR_21, VAR_11);
   VAR_14 = FUNC_9(VAR_21, VAR_13,
        FUNC_7(VAR_6->geo, VAR_20),
        -1, &VAR_11);
   if (VAR_14) {
    FUNC_12(VAR_21, VAR_16);
    return VAR_14;
   }
   VAR_10 = VAR_20;
  }



  VAR_12 = (xfs_dir2_data_entry_t *)((char *)VAR_11->b_addr +
   FUNC_6(VAR_6->geo,
      FUNC_1(VAR_17->address)));





  VAR_23 = VAR_19->m_dirnameops->compname(VAR_6, VAR_12->name, VAR_12->namelen);
  if (VAR_23 != VAR_2 && VAR_23 != VAR_6->cmpresult) {
   VAR_6->cmpresult = VAR_23;
   *VAR_8 = VAR_15;

   if (VAR_23 == VAR_3) {
    *VAR_9 = VAR_11;
    return 0;
   }
   VAR_22 = VAR_10;
  }
 }
 FUNC_0(VAR_6->op_flags & VAR_4);





 if (VAR_6->cmpresult == VAR_1) {
  FUNC_0(VAR_22 != -1);
  if (VAR_22 != VAR_10) {
   FUNC_12(VAR_21, VAR_11);
   VAR_14 = FUNC_9(VAR_21, VAR_13,
        FUNC_7(VAR_6->geo, VAR_22),
        -1, &VAR_11);
   if (VAR_14) {
    FUNC_12(VAR_21, VAR_16);
    return VAR_14;
   }
  }
  *VAR_9 = VAR_11;
  return 0;
 }



 FUNC_0(VAR_22 == -1);
 if (VAR_11)
  FUNC_12(VAR_21, VAR_11);
 FUNC_12(VAR_21, VAR_16);
 return -VAR_0;
}
