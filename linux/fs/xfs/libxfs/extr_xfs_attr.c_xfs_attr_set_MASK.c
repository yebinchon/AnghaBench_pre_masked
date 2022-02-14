
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_attr_sf_hdr_t ;
struct xfs_trans_res {int tr_logflags; int tr_logcount; scalar_t__ tr_logres; } ;
struct xfs_mount {int m_flags; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_da_args {unsigned char* value; int valuelen; int op_flags; int total; scalar_t__ trans; int namelen; } ;
struct TYPE_5__ {int tr_logres; } ;
struct TYPE_4__ {scalar_t__ tr_logres; } ;
struct TYPE_6__ {TYPE_2__ tr_attrsetrt; TYPE_1__ tr_attrsetm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct xfs_mount*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct xfs_inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct xfs_da_args*,struct xfs_inode*,unsigned char const*,int) ;
 int FUNC_6 (struct xfs_da_args*,int*) ;
 int FUNC_7 (struct xfs_da_args*) ;
 int FUNC_8 (struct xfs_inode*,int,int) ;
 int FUNC_9 (struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_inode*,int ) ;
 int FUNC_11 (struct xfs_inode*) ;
 int FUNC_12 (struct xfs_mount*,struct xfs_trans_res*,int,int ,int ,scalar_t__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,struct xfs_inode*,int ) ;
 int FUNC_16 (scalar_t__,struct xfs_inode*,int ) ;
 int FUNC_17 (scalar_t__,struct xfs_inode*,int ) ;
 int FUNC_18 (scalar_t__,struct xfs_inode*,int,int ,int) ;
 int FUNC_19 (scalar_t__) ;
 int VAR_14 ;

int
FUNC_20(
 struct xfs_inode *VAR_15,
 const unsigned char *VAR_16,
 unsigned char *VAR_17,
 int VAR_18,
 int VAR_19)
{
 struct xfs_mount *VAR_20 = VAR_15->i_mount;
 struct xfs_da_args VAR_21;
 struct xfs_trans_res VAR_22;
 int VAR_23 = (VAR_19 & VAR_1) != 0;
 int VAR_24, VAR_25;

 FUNC_4(VAR_20, VAR_14);

 if (FUNC_2(VAR_15->i_mount))
  return -VAR_2;

 VAR_24 = FUNC_5(&VAR_21, VAR_15, VAR_16, VAR_19);
 if (VAR_24)
  return VAR_24;

 VAR_21.value = VAR_17;
 VAR_21.valuelen = VAR_18;
 VAR_21.op_flags = VAR_4 | VAR_5;
 VAR_21.total = FUNC_6(&VAR_21, &VAR_25);

 VAR_24 = FUNC_11(VAR_15);
 if (VAR_24)
  return VAR_24;





 if (FUNC_3(VAR_15) == 0) {
  int VAR_26 = sizeof(xfs_attr_sf_hdr_t) +
   FUNC_1(VAR_21.namelen, VAR_18);

  VAR_24 = FUNC_8(VAR_15, VAR_26, VAR_23);
  if (VAR_24)
   return VAR_24;
 }

 VAR_22.tr_logres = FUNC_0(VAR_20)->tr_attrsetm.tr_logres +
    FUNC_0(VAR_20)->tr_attrsetrt.tr_logres * VAR_21.total;
 VAR_22.tr_logcount = VAR_3;
 VAR_22.tr_logflags = VAR_12;





 VAR_24 = FUNC_12(VAR_20, &VAR_22, VAR_21.total, 0,
   VAR_23 ? VAR_13 : 0, &VAR_21.trans);
 if (VAR_24)
  return VAR_24;

 FUNC_9(VAR_15, VAR_7);
 VAR_24 = FUNC_18(VAR_21.trans, VAR_15, VAR_21.total, 0,
    VAR_23 ? VAR_11 | VAR_10 :
           VAR_11);
 if (VAR_24)
  goto out_trans_cancel;

 FUNC_16(VAR_21.trans, VAR_15, 0);
 VAR_24 = FUNC_7(&VAR_21);
 if (VAR_24)
  goto out_trans_cancel;
 if (!VAR_21.trans) {

  goto out_unlock;
 }





 if (VAR_20->m_flags & VAR_9)
  FUNC_19(VAR_21.trans);

 if ((VAR_19 & VAR_0) == 0)
  FUNC_15(VAR_21.trans, VAR_15, VAR_6);




 FUNC_17(VAR_21.trans, VAR_15, VAR_8);
 VAR_24 = FUNC_14(VAR_21.trans);
out_unlock:
 FUNC_10(VAR_15, VAR_7);
 return VAR_24;

out_trans_cancel:
 if (VAR_21.trans)
  FUNC_13(VAR_21.trans);
 goto out_unlock;
}
