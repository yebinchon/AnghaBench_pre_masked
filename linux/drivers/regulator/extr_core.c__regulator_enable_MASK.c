
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int n_coupled; } ;
struct TYPE_3__ {int base; } ;
struct regulator_dev {scalar_t__ use_count; struct regulator* supply; TYPE_2__ coupling_desc; TYPE_1__ mutex; } ;
struct regulator {struct regulator_dev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator_dev*,int ,int *) ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator*) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (struct regulator_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct regulator_dev*,char*,int) ;
 int FUNC_8 (struct regulator_dev*,int ) ;
 int FUNC_9 (struct regulator_dev*,int ) ;

__attribute__((used)) static int FUNC_10(struct regulator *VAR_5)
{
 struct regulator_dev *VAR_6 = VAR_5->rdev;
 int VAR_7;

 FUNC_6(&VAR_6->mutex.base);

 if (VAR_6->use_count == 0 && VAR_6->supply) {
  VAR_7 = FUNC_10(VAR_6->supply);
  if (VAR_7 < 0)
   return VAR_7;
 }


 if (VAR_6->coupling_desc.n_coupled > 1) {
  VAR_7 = FUNC_8(VAR_6, VAR_2);
  if (VAR_7 < 0)
   goto err_disable_supply;
 }

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  goto err_disable_supply;

 if (VAR_6->use_count == 0) {

  VAR_7 = FUNC_5(VAR_6);
  if (VAR_7 == -VAR_0 || VAR_7 == 0) {
   if (!FUNC_9(VAR_6,
     VAR_3)) {
    VAR_7 = -VAR_1;
    goto err_consumer_disable;
   }

   VAR_7 = FUNC_2(VAR_6);
   if (VAR_7 < 0)
    goto err_consumer_disable;

   FUNC_0(VAR_6, VAR_4,
          ((void*)0));
  } else if (VAR_7 < 0) {
   FUNC_7(VAR_6, "is_enabled() failed: %d\n", VAR_7);
   goto err_consumer_disable;
  }

 }

 VAR_6->use_count++;

 return 0;

err_consumer_disable:
 FUNC_3(VAR_5);

err_disable_supply:
 if (VAR_6->use_count == 0 && VAR_6->supply)
  FUNC_1(VAR_6->supply);

 return VAR_7;
}
