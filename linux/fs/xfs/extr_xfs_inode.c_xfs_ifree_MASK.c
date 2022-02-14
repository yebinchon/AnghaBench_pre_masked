
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xfs_trans {int dummy; } ;
struct TYPE_4__ {scalar_t__ di_nextents; scalar_t__ di_anextents; scalar_t__ di_size; scalar_t__ di_nblocks; void* di_aformat; void* di_format; scalar_t__ di_forkoff; scalar_t__ di_dmevmask; scalar_t__ di_flags2; scalar_t__ di_flags; } ;
struct xfs_inode {TYPE_2__* i_itemp; TYPE_1__ i_d; int i_ino; } ;
struct xfs_icluster {scalar_t__ deleted; int member_0; } ;
struct TYPE_6__ {scalar_t__ i_nlink; int i_generation; scalar_t__ i_mode; } ;
struct TYPE_5__ {int ili_fields; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (struct xfs_inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct xfs_trans*,int ,struct xfs_icluster*) ;
 int FUNC_4 (struct xfs_inode*,struct xfs_trans*,struct xfs_icluster*) ;
 int FUNC_5 (struct xfs_inode*,int ) ;
 int FUNC_6 (struct xfs_inode*,int ) ;
 int FUNC_7 (struct xfs_trans*,struct xfs_inode*) ;
 int FUNC_8 (struct xfs_trans*,struct xfs_inode*,int ) ;

int
FUNC_9(
 struct xfs_trans *VAR_7,
 struct xfs_inode *VAR_8)
{
 int VAR_9;
 struct xfs_icluster VAR_10 = { 0 };

 FUNC_0(FUNC_6(VAR_8, VAR_3));
 FUNC_0(FUNC_2(VAR_8)->i_nlink == 0);
 FUNC_0(VAR_8->i_d.di_nextents == 0);
 FUNC_0(VAR_8->i_d.di_anextents == 0);
 FUNC_0(VAR_8->i_d.di_size == 0 || !FUNC_1(FUNC_2(VAR_8)->i_mode));
 FUNC_0(VAR_8->i_d.di_nblocks == 0);




 VAR_9 = FUNC_7(VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_7, VAR_8->i_ino, &VAR_10);
 if (VAR_9)
  return VAR_9;

 FUNC_5(VAR_8, VAR_1);
 FUNC_5(VAR_8, VAR_0);

 FUNC_2(VAR_8)->i_mode = 0;
 VAR_8->i_d.di_flags = 0;
 VAR_8->i_d.di_flags2 = 0;
 VAR_8->i_d.di_dmevmask = 0;
 VAR_8->i_d.di_forkoff = 0;
 VAR_8->i_d.di_format = VAR_2;
 VAR_8->i_d.di_aformat = VAR_2;


 VAR_8->i_itemp->ili_fields &= ~(VAR_4|VAR_6);





 FUNC_2(VAR_8)->i_generation++;
 FUNC_8(VAR_7, VAR_8, VAR_5);

 if (VAR_10.deleted)
  VAR_9 = FUNC_4(VAR_8, VAR_7, &VAR_10);

 return VAR_9;
}
