
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_mount {int m_flags; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;
struct xfs_da_args {scalar_t__ trans; int op_flags; } ;
struct TYPE_2__ {int tr_attrrm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int VAR_8 ;
 int FUNC_4 (struct xfs_da_args*,struct xfs_inode*,unsigned char const*,int) ;
 int FUNC_5 (struct xfs_da_args*) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_inode*) ;
 int FUNC_9 (struct xfs_mount*,int *,int ,int ,int ,scalar_t__*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,struct xfs_inode*,int ) ;
 int FUNC_13 (scalar_t__,struct xfs_inode*,int ) ;
 int FUNC_14 (scalar_t__,struct xfs_inode*,int ) ;
 int FUNC_15 (scalar_t__) ;
 int VAR_9 ;

int
FUNC_16(
 struct xfs_inode *VAR_10,
 const unsigned char *VAR_11,
 int VAR_12)
{
 struct xfs_mount *VAR_13 = VAR_10->i_mount;
 struct xfs_da_args VAR_14;
 int VAR_15;

 FUNC_3(VAR_13, VAR_9);

 if (FUNC_2(VAR_10->i_mount))
  return -VAR_2;

 VAR_15 = FUNC_4(&VAR_14, VAR_10, VAR_11, VAR_12);
 if (VAR_15)
  return VAR_15;






 VAR_14.op_flags = VAR_3;

 VAR_15 = FUNC_8(VAR_10);
 if (VAR_15)
  return VAR_15;





 VAR_15 = FUNC_9(VAR_13, &FUNC_0(VAR_13)->tr_attrrm,
   FUNC_1(VAR_13), 0,
   (VAR_12 & VAR_1) ? VAR_8 : 0,
   &VAR_14.trans);
 if (VAR_15)
  return VAR_15;

 FUNC_6(VAR_10, VAR_5);




 FUNC_13(VAR_14.trans, VAR_10, 0);

 VAR_15 = FUNC_5(&VAR_14);
 if (VAR_15)
  goto out;





 if (VAR_13->m_flags & VAR_7)
  FUNC_15(VAR_14.trans);

 if ((VAR_12 & VAR_0) == 0)
  FUNC_12(VAR_14.trans, VAR_10, VAR_4);




 FUNC_14(VAR_14.trans, VAR_10, VAR_6);
 VAR_15 = FUNC_11(VAR_14.trans);
 FUNC_7(VAR_10, VAR_5);

 return VAR_15;

out:
 if (VAR_14.trans)
  FUNC_10(VAR_14.trans);
 FUNC_7(VAR_10, VAR_5);
 return VAR_15;
}
