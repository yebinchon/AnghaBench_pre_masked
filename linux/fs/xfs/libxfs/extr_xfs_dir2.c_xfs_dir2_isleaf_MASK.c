
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xfs_fileoff_t ;
struct xfs_da_args {TYPE_1__* geo; int dp; } ;
struct TYPE_2__ {scalar_t__ leafblk; scalar_t__ fsbcount; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,int ) ;

int
FUNC_1(
 struct xfs_da_args *VAR_1,
 int *VAR_2)
{
 xfs_fileoff_t VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_1->dp, &VAR_3, VAR_0)))
  return VAR_4;
 *VAR_2 = VAR_3 == VAR_1->geo->leafblk + VAR_1->geo->fsbcount;
 return 0;
}
