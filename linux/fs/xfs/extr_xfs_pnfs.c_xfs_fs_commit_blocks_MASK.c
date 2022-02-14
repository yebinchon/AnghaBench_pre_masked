
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_3__ {scalar_t__ di_size; } ;
struct xfs_inode {TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct iomap {scalar_t__ offset; scalar_t__ length; } ;
struct inode {int i_mapping; } ;
struct iattr {int ia_valid; scalar_t__ ia_size; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int tr_ichange; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct xfs_mount*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 struct xfs_inode* FUNC_3 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct xfs_inode*,int ) ;
 int FUNC_8 (struct xfs_inode*,scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_inode*,scalar_t__) ;
 int FUNC_11 (struct xfs_inode*,struct iattr*) ;
 int FUNC_12 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_13 (struct xfs_trans*) ;
 int FUNC_14 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_15 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_16 (struct xfs_trans*) ;

int
FUNC_17(
 struct inode *VAR_8,
 struct iomap *VAR_9,
 int VAR_10,
 struct iattr *VAR_11)
{
 struct xfs_inode *VAR_12 = FUNC_3(VAR_8);
 struct xfs_mount *VAR_13 = VAR_12->i_mount;
 struct xfs_trans *VAR_14;
 bool VAR_15 = 0;
 int VAR_16, VAR_17;
 loff_t VAR_18;

 FUNC_0(VAR_11->ia_valid & (VAR_0|VAR_1|VAR_2));

 FUNC_7(VAR_12, VAR_7);

 VAR_18 = FUNC_4(VAR_8);
 if ((VAR_11->ia_valid & VAR_3) && VAR_11->ia_size > VAR_18) {
  VAR_15 = 1;
  VAR_18 = VAR_11->ia_size;
 }

 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  u64 VAR_19, VAR_20, VAR_21;

  VAR_19 = VAR_9[VAR_17].offset;
  if (VAR_19 > VAR_18)
   continue;

  VAR_21 = VAR_19 + VAR_9[VAR_17].length;
  if (VAR_21 > VAR_18)
   VAR_21 = VAR_18;

  VAR_20 = VAR_21 - VAR_19;
  if (!VAR_20)
   continue;




  VAR_16 = FUNC_6(VAR_8->i_mapping,
     VAR_19 >> VAR_4,
     (VAR_21 - 1) >> VAR_4);
  FUNC_2(VAR_16);

  VAR_16 = FUNC_8(VAR_12, VAR_19, VAR_20, 0);
  if (VAR_16)
   goto out_drop_iolock;
 }

 if (VAR_15) {
  VAR_16 = FUNC_10(VAR_12, VAR_18);
  if (VAR_16)
   goto out_drop_iolock;
 }

 VAR_16 = FUNC_12(VAR_13, &FUNC_1(VAR_13)->tr_ichange, 0, 0, 0, &VAR_14);
 if (VAR_16)
  goto out_drop_iolock;

 FUNC_7(VAR_12, VAR_5);
 FUNC_14(VAR_14, VAR_12, VAR_5);
 FUNC_15(VAR_14, VAR_12, VAR_6);

 FUNC_11(VAR_12, VAR_11);
 if (VAR_15) {
  FUNC_5(VAR_8, VAR_11->ia_size);
  VAR_12->i_d.di_size = VAR_11->ia_size;
 }

 FUNC_16(VAR_14);
 VAR_16 = FUNC_13(VAR_14);

out_drop_iolock:
 FUNC_9(VAR_12, VAR_7);
 return VAR_16;
}
