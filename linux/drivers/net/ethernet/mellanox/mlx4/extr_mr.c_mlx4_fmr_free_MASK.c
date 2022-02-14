
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct mlx4_fmr {TYPE_2__ mr; TYPE_1__* mpt; scalar_t__ maps; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ start; scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,TYPE_2__*) ;
 int FUNC_1 () ;

int FUNC_2(struct mlx4_dev *VAR_5, struct mlx4_fmr *VAR_6)
{
 int VAR_7;

 if (VAR_6->maps)
  return -VAR_0;
 if (VAR_6->mr.enabled == VAR_2) {




  *(u8 *)VAR_6->mpt = VAR_4;

  FUNC_1();
  VAR_6->mpt->length = 0;
  VAR_6->mpt->start = 0;

  FUNC_1();
  *(u8 *)VAR_6->mpt = VAR_3;

  FUNC_1();
 }

 VAR_7 = FUNC_0(VAR_5, &VAR_6->mr);
 if (VAR_7)
  return VAR_7;
 VAR_6->mr.enabled = VAR_1;

 return 0;
}
