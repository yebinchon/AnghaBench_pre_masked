
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_16__ {TYPE_1__* m_dirnameops; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_17__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_18__ {int address; int hashval; } ;
typedef TYPE_4__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_dataptr_t ;
typedef int xfs_dir2_data_hdr_t ;
struct TYPE_19__ {int namelen; int name; } ;
typedef TYPE_5__ xfs_dir2_data_entry_t ;
struct TYPE_20__ {int count; } ;
typedef TYPE_6__ xfs_dir2_block_tail_t ;
typedef int xfs_dahash_t ;
struct TYPE_21__ {int hashval; int op_flags; int cmpresult; int geo; int * trans; TYPE_3__* dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct xfs_buf {int * b_addr; } ;
typedef enum xfs_dacmp { ____Placeholder_xfs_dacmp } xfs_dacmp ;
struct TYPE_15__ {int (* compname ) (TYPE_7__*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ) ;
 TYPE_4__* FUNC_3 (TYPE_6__*) ;
 TYPE_6__* FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,TYPE_3__*,struct xfs_buf**) ;
 int FUNC_7 (TYPE_3__*,struct xfs_buf*) ;
 int FUNC_8 (int *,struct xfs_buf*) ;

__attribute__((used)) static int
FUNC_9(
 xfs_da_args_t *VAR_6,
 struct xfs_buf **VAR_7,
 int *VAR_8)
{
 xfs_dir2_dataptr_t VAR_9;
 xfs_dir2_data_hdr_t *VAR_10;
 xfs_dir2_leaf_entry_t *VAR_11;
 struct xfs_buf *VAR_12;
 xfs_dir2_block_tail_t *VAR_13;
 xfs_dir2_data_entry_t *VAR_14;
 xfs_inode_t *VAR_15;
 int VAR_16;
 xfs_dahash_t VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 xfs_mount_t *VAR_21;
 xfs_trans_t *VAR_22;
 enum xfs_dacmp VAR_23;

 VAR_15 = VAR_6->dp;
 VAR_22 = VAR_6->trans;
 VAR_21 = VAR_15->i_mount;

 VAR_16 = FUNC_6(VAR_22, VAR_15, &VAR_12);
 if (VAR_16)
  return VAR_16;

 VAR_10 = VAR_12->b_addr;
 FUNC_7(VAR_15, VAR_12);
 VAR_13 = FUNC_4(VAR_6->geo, VAR_10);
 VAR_11 = FUNC_3(VAR_13);




 for (VAR_19 = 0, VAR_18 = FUNC_1(VAR_13->count) - 1; ; ) {
  FUNC_0(VAR_19 <= VAR_18);
  VAR_20 = (VAR_19 + VAR_18) >> 1;
  if ((VAR_17 = FUNC_1(VAR_11[VAR_20].hashval)) == VAR_6->hashval)
   break;
  if (VAR_17 < VAR_6->hashval)
   VAR_19 = VAR_20 + 1;
  else
   VAR_18 = VAR_20 - 1;
  if (VAR_19 > VAR_18) {
   FUNC_0(VAR_6->op_flags & VAR_4);
   FUNC_8(VAR_22, VAR_12);
   return -VAR_0;
  }
 }



 while (VAR_20 > 0 && FUNC_1(VAR_11[VAR_20 - 1].hashval) == VAR_6->hashval) {
  VAR_20--;
 }




 do {
  if ((VAR_9 = FUNC_1(VAR_11[VAR_20].address)) == VAR_5)
   continue;



  VAR_14 = (xfs_dir2_data_entry_t *)
   ((char *)VAR_10 + FUNC_5(VAR_6->geo, VAR_9));





  VAR_23 = VAR_21->m_dirnameops->compname(VAR_6, VAR_14->name, VAR_14->namelen);
  if (VAR_23 != VAR_2 && VAR_23 != VAR_6->cmpresult) {
   VAR_6->cmpresult = VAR_23;
   *VAR_7 = VAR_12;
   *VAR_8 = VAR_20;
   if (VAR_23 == VAR_3)
    return 0;
  }
 } while (++VAR_20 < FUNC_1(VAR_13->count) &&
   FUNC_1(VAR_11[VAR_20].hashval) == VAR_17);

 FUNC_0(VAR_6->op_flags & VAR_4);




 if (VAR_6->cmpresult == VAR_1)
  return 0;



 FUNC_8(VAR_22, VAR_12);
 return -VAR_0;
}
