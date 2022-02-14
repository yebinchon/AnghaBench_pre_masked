
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_fsize_t ;
struct TYPE_4__ {int totsize; } ;
struct xfs_attr_shortform {TYPE_2__ hdr; } ;
typedef struct xfs_attr_shortform xfs_attr_shortform_t ;
struct TYPE_3__ {int di_size; } ;
struct xfs_inode {int * i_cowfp; int * i_afp; TYPE_1__ i_d; } ;
struct xfs_dinode {int di_aformat; int di_size; int di_format; } ;
struct inode {int i_mode; int i_rdev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;


 struct inode* FUNC_1 (struct xfs_inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct xfs_dinode*) ;
 int FUNC_3 (struct xfs_dinode*) ;



 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (struct xfs_dinode*) ;
 int FUNC_9 (struct xfs_inode*,int ) ;
 int FUNC_10 (struct xfs_inode*) ;
 int VAR_5 ;
 int FUNC_11 (struct xfs_inode*,struct xfs_dinode*,int ) ;
 int FUNC_12 (struct xfs_inode*,struct xfs_dinode*,int ) ;
 int FUNC_13 (struct xfs_inode*,struct xfs_dinode*,int ,int) ;
 scalar_t__ FUNC_14 (struct xfs_inode*) ;
 int FUNC_15 (int ) ;

int
FUNC_16(
 struct xfs_inode *VAR_6,
 struct xfs_dinode *VAR_7)
{
 struct inode *VAR_8 = FUNC_1(VAR_6);
 struct xfs_attr_shortform *VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 xfs_fsize_t VAR_12;

 switch (VAR_8->i_mode & VAR_2) {
 case 134:
 case 136:
 case 137:
 case 131:
  VAR_6->i_d.di_size = 0;
  VAR_8->i_rdev = FUNC_15(FUNC_8(VAR_7));
  break;

 case 132:
 case 133:
 case 135:
  switch (VAR_7->di_format) {
  case 128:
   VAR_12 = FUNC_5(VAR_7->di_size);
   VAR_10 = (int)VAR_12;
   VAR_11 = FUNC_13(VAR_6, VAR_7, VAR_4, VAR_10);
   break;
  case 129:
   VAR_11 = FUNC_12(VAR_6, VAR_7, VAR_4);
   break;
  case 130:
   VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_4);
   break;
  default:
   return -VAR_0;
  }
  break;

 default:
  return -VAR_0;
 }
 if (VAR_11)
  return VAR_11;

 if (FUNC_14(VAR_6)) {
  FUNC_0(VAR_6->i_cowfp == ((void*)0));
  FUNC_10(VAR_6);
 }

 if (!FUNC_3(VAR_7))
  return 0;

 FUNC_0(VAR_6->i_afp == ((void*)0));
 VAR_6->i_afp = FUNC_7(VAR_5, VAR_1);

 switch (VAR_7->di_aformat) {
 case 128:
  VAR_9 = (xfs_attr_shortform_t *)FUNC_2(VAR_7);
  VAR_10 = FUNC_4(VAR_9->hdr.totsize);

  VAR_11 = FUNC_13(VAR_6, VAR_7, VAR_3, VAR_10);
  break;
 case 129:
  VAR_11 = FUNC_12(VAR_6, VAR_7, VAR_3);
  break;
 case 130:
  VAR_11 = FUNC_11(VAR_6, VAR_7, VAR_3);
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }
 if (VAR_11) {
  FUNC_6(VAR_5, VAR_6->i_afp);
  VAR_6->i_afp = ((void*)0);
  if (VAR_6->i_cowfp)
   FUNC_6(VAR_5, VAR_6->i_cowfp);
  VAR_6->i_cowfp = ((void*)0);
  FUNC_9(VAR_6, VAR_4);
 }
 return VAR_11;
}
