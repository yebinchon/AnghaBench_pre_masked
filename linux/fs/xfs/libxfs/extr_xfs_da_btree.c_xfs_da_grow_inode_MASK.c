
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_dablk_t ;
struct xfs_da_args {TYPE_1__* geo; } ;
struct TYPE_2__ {int fsbcount; scalar_t__ leafblk; } ;


 int FUNC_0 (struct xfs_da_args*) ;
 int FUNC_1 (struct xfs_da_args*,scalar_t__*,int ) ;

int
FUNC_2(
 struct xfs_da_args *VAR_0,
 xfs_dablk_t *VAR_1)
{
 xfs_fileoff_t VAR_2;
 int VAR_3;

 FUNC_0(VAR_0);

 VAR_2 = VAR_0->geo->leafblk;
 VAR_3 = FUNC_1(VAR_0, &VAR_2, VAR_0->geo->fsbcount);
 if (!VAR_3)
  *VAR_1 = (xfs_dablk_t)VAR_2;
 return VAR_3;
}
