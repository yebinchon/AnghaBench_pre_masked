
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ww_acquire_ctx {int dummy; } ;
struct TYPE_2__ {int n_coupled; } ;
struct regulator_dev {scalar_t__ use_count; scalar_t__ supply; TYPE_1__ coupling_desc; } ;
struct regulator {scalar_t__ uA_load; struct regulator_dev* rdev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*,int ) ;
 int FUNC_4 (struct regulator_dev*,struct ww_acquire_ctx*) ;
 int FUNC_5 (struct regulator_dev*,struct ww_acquire_ctx*) ;

int FUNC_6(struct regulator *VAR_1)
{
 struct regulator_dev *VAR_2 = VAR_1->rdev;
 struct ww_acquire_ctx VAR_3;
 int VAR_4;

 FUNC_4(VAR_2, &VAR_3);

 VAR_4 = FUNC_1(VAR_1->rdev);

 if (VAR_2->coupling_desc.n_coupled > 1)
  FUNC_3(VAR_2, VAR_0);

 if (VAR_1->uA_load) {
  VAR_1->uA_load = 0;
  VAR_4 = FUNC_2(VAR_2);
 }

 if (VAR_2->use_count != 0 && VAR_2->supply)
  FUNC_0(VAR_2->supply);

 FUNC_5(VAR_2, &VAR_3);

 return VAR_4;
}
