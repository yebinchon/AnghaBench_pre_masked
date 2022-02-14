
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct timer_list {int dummy; } ;
struct TYPE_8__ {int timer; int * map; } ;
struct TYPE_7__ {TYPE_1__* comm; } ;
struct mlx4_dev {TYPE_4__* persist; } ;
struct mlx4_priv {TYPE_3__ catas_err; TYPE_2__ mfunc; struct mlx4_dev dev; } ;
struct TYPE_10__ {int timer; } ;
struct TYPE_9__ {int state; int catas_work; int catas_wq; } ;
struct TYPE_6__ {int slave_read; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 int FUNC_5 (int *,int ) ;
 struct mlx4_priv* VAR_5 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void FUNC_10(struct timer_list *VAR_6)
{
 struct mlx4_priv *VAR_7 = FUNC_1(VAR_7, VAR_6, VAR_2.timer);
 struct mlx4_dev *VAR_8 = &VAR_7->dev;
 u32 VAR_9;

 if (FUNC_3(VAR_8)) {
  VAR_9 = FUNC_9(FUNC_7(&VAR_7->mfunc.comm->slave_read));
  if (FUNC_2(VAR_9)) {
   FUNC_4(VAR_8, "Internal error detected on the communication channel\n");
   goto internal_err;
  }
 } else if (FUNC_7(VAR_7->catas_err.map)) {
  FUNC_0(VAR_8);
  goto internal_err;
 }

 if (VAR_8->persist->state & VAR_1) {
  FUNC_4(VAR_8, "Internal error mark was detected on device\n");
  goto internal_err;
 }

 FUNC_5(&VAR_7->catas_err.timer,
    FUNC_8(VAR_3 + VAR_0));
 return;

internal_err:
 if (VAR_4)
  FUNC_6(VAR_8->persist->catas_wq, &VAR_8->persist->catas_work);
}
