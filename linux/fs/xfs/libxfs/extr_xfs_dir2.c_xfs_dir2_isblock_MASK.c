
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_fileoff_t ;
struct xfs_da_args {TYPE_2__* geo; TYPE_3__* dp; } ;
struct TYPE_4__ {scalar_t__ di_size; } ;
struct TYPE_6__ {TYPE_1__ i_d; int i_mount; } ;
struct TYPE_5__ {scalar_t__ blksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *,int ) ;

int
FUNC_2(
 struct xfs_da_args *VAR_2,
 int *VAR_3)
{
 xfs_fileoff_t VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_2->dp, &VAR_4, VAR_1)))
  return VAR_5;
 VAR_5 = FUNC_0(VAR_2->dp->i_mount, VAR_4) == VAR_2->geo->blksize;
 if (VAR_5 != 0 && VAR_2->dp->i_d.di_size != VAR_2->geo->blksize)
  return -VAR_0;
 *VAR_3 = VAR_5;
 return 0;
}
