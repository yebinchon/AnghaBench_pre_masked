
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfs_da_args {int namelen; TYPE_1__* geo; int valuelen; } ;
struct TYPE_2__ {int blksize; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(
 struct xfs_da_args *VAR_0,
 int *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->namelen, VAR_0->valuelen);
 if (VAR_2 < FUNC_1(VAR_0->geo->blksize)) {
  if (VAR_1)
   *VAR_1 = 1;
  return VAR_2;
 }
 if (VAR_1)
  *VAR_1 = 0;
 return FUNC_2(VAR_0->namelen);
}
