
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_off_t ;
typedef scalar_t__ xfs_extlen_t ;
struct xfs_trans {int dummy; } ;
struct xfs_mount {int dummy; } ;
struct TYPE_3__ {int di_flags2; scalar_t__ di_cowextsize; scalar_t__ di_size; } ;
struct xfs_inode {TYPE_1__ i_d; struct xfs_mount* i_mount; } ;
struct TYPE_4__ {int tr_ichange; } ;


 TYPE_2__* FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct xfs_inode*,scalar_t__) ;
 int FUNC_5 (struct xfs_inode*,int,int ) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_mount*,int *,int ,int ,int ,struct xfs_trans**) ;
 int FUNC_8 (struct xfs_trans*) ;
 int FUNC_9 (struct xfs_trans*,struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_11(
 struct xfs_inode *VAR_4,
 xfs_off_t VAR_5,
 xfs_extlen_t VAR_6,
 unsigned int VAR_7)
{
 struct xfs_mount *VAR_8 = VAR_4->i_mount;
 struct xfs_trans *VAR_9;
 int VAR_10;

 if (VAR_5 <= FUNC_2(FUNC_1(VAR_4)) && VAR_6 == 0)
  return 0;

 VAR_10 = FUNC_7(VAR_8, &FUNC_0(VAR_8)->tr_ichange, 0, 0, 0, &VAR_9);
 if (VAR_10)
  goto out_error;

 FUNC_6(VAR_4, VAR_1);
 FUNC_9(VAR_9, VAR_4, VAR_1);

 if (VAR_5 > FUNC_2(FUNC_1(VAR_4))) {
  FUNC_4(VAR_4, VAR_5);
  FUNC_3(FUNC_1(VAR_4), VAR_5);
  VAR_4->i_d.di_size = VAR_5;
 }

 if (VAR_6) {
  VAR_4->i_d.di_cowextsize = VAR_6;
  VAR_4->i_d.di_flags2 |= VAR_0;
 }

 FUNC_10(VAR_9, VAR_4, VAR_2);

 VAR_10 = FUNC_8(VAR_9);
 if (VAR_10)
  goto out_error;
 return VAR_10;

out_error:
 FUNC_5(VAR_4, VAR_10, VAR_3);
 return VAR_10;
}
