
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ di_aformat; scalar_t__ di_anextents; } ;
struct xfs_inode {TYPE_1__ i_d; } ;
struct xfs_da_args {int trans; struct xfs_inode* dp; } ;
struct xfs_buf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xfs_da_args*) ;
 int FUNC_1 (struct xfs_da_args*) ;
 int FUNC_2 (struct xfs_da_args*) ;
 int FUNC_3 (struct xfs_da_args*,struct xfs_buf**) ;
 int FUNC_4 (struct xfs_inode*,struct xfs_da_args*) ;
 scalar_t__ FUNC_5 (struct xfs_inode*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct xfs_buf*) ;
 int FUNC_8 (int ,struct xfs_buf*) ;
 int FUNC_9 (int ,struct xfs_buf*) ;

int
FUNC_10(
 struct xfs_da_args *VAR_4)
{
 struct xfs_inode *VAR_5 = VAR_4->dp;
 struct xfs_buf *VAR_6 = ((void*)0);
 int VAR_7;





 if (VAR_5->i_d.di_aformat == VAR_3 ||
     (VAR_5->i_d.di_aformat == VAR_2 &&
      VAR_5->i_d.di_anextents == 0)) {




  if (VAR_5->i_d.di_aformat == VAR_2)
   FUNC_2(VAR_4);




  VAR_7 = FUNC_4(VAR_5, VAR_4);
  if (VAR_7 != -VAR_0)
   return VAR_7;





  VAR_7 = FUNC_3(VAR_4, &VAR_6);
  if (VAR_7)
   return VAR_7;
  FUNC_7(VAR_4->trans, VAR_6);
  VAR_7 = FUNC_6(&VAR_4->trans);
  FUNC_8(VAR_4->trans, VAR_6);
  if (VAR_7) {
   FUNC_9(VAR_4->trans, VAR_6);
   return VAR_7;
  }
 }

 if (FUNC_5(VAR_5, VAR_1))
  VAR_7 = FUNC_0(VAR_4);
 else
  VAR_7 = FUNC_1(VAR_4);
 return VAR_7;
}
