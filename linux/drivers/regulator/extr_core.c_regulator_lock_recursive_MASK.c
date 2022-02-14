
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct TYPE_3__ {int n_coupled; struct regulator_dev** coupled_rdevs; } ;
struct regulator_dev {TYPE_2__* supply; TYPE_1__ coupling_desc; } ;
struct TYPE_4__ {struct regulator_dev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regulator_dev*,struct ww_acquire_ctx*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2,
        struct regulator_dev **VAR_3,
        struct regulator_dev **VAR_4,
        struct ww_acquire_ctx *VAR_5)
{
 struct regulator_dev *VAR_6;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2->coupling_desc.n_coupled; VAR_7++) {
  VAR_6 = VAR_2->coupling_desc.coupled_rdevs[VAR_7];

  if (!VAR_6)
   continue;

  if (VAR_6 != *VAR_4) {
   VAR_8 = FUNC_1(VAR_6, VAR_5);
   if (VAR_8) {
    if (VAR_8 == -VAR_1) {
     *VAR_3 = VAR_6;
     goto err_unlock;
    }


    FUNC_0(VAR_8 != -VAR_0);
   }
  } else {
   *VAR_4 = ((void*)0);
  }

  if (VAR_6->supply && !FUNC_2(VAR_6)) {
   VAR_8 = FUNC_5(VAR_6->supply->rdev,
             VAR_3,
             VAR_4,
             VAR_5);
   if (VAR_8) {
    FUNC_3(VAR_6);
    goto err_unlock;
   }
  }
 }

 return 0;

err_unlock:
 FUNC_4(VAR_2, VAR_7);

 return VAR_8;
}
