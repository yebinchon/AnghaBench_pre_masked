
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int n_coupled; } ;
struct TYPE_4__ {int base; } ;
struct regulator_dev {int use_count; struct regulator* supply; TYPE_3__ coupling_desc; TYPE_2__* constraints; TYPE_1__ mutex; } ;
struct regulator {struct regulator_dev* rdev; } ;
struct TYPE_5__ {int always_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct regulator_dev*,int ,int *) ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct regulator_dev*,char*) ;
 int FUNC_6 (struct regulator_dev*) ;
 int FUNC_7 (struct regulator_dev*,int ) ;
 scalar_t__ FUNC_8 (struct regulator_dev*,int ) ;

__attribute__((used)) static int FUNC_9(struct regulator *VAR_8)
{
 struct regulator_dev *VAR_9 = VAR_8->rdev;
 int VAR_10 = 0;

 FUNC_4(&VAR_9->mutex.base);

 if (FUNC_0(VAR_9->use_count <= 0,
   "unbalanced disables for %s\n", FUNC_6(VAR_9)))
  return -VAR_1;


 if (VAR_9->use_count == 1 &&
     (VAR_9->constraints && !VAR_9->constraints->always_on)) {


  if (FUNC_8(VAR_9, VAR_4)) {
   VAR_10 = FUNC_1(VAR_9,
         VAR_7,
         ((void*)0));
   if (VAR_10 & VAR_2)
    return -VAR_0;

   VAR_10 = FUNC_2(VAR_9);
   if (VAR_10 < 0) {
    FUNC_5(VAR_9, "failed to disable\n");
    FUNC_1(VAR_9,
      VAR_5,
      ((void*)0));
    return VAR_10;
   }
   FUNC_1(VAR_9, VAR_6,
     ((void*)0));
  }

  VAR_9->use_count = 0;
 } else if (VAR_9->use_count > 1) {
  VAR_9->use_count--;
 }

 if (VAR_10 == 0)
  VAR_10 = FUNC_3(VAR_8);

 if (VAR_10 == 0 && VAR_9->coupling_desc.n_coupled > 1)
  VAR_10 = FUNC_7(VAR_9, VAR_3);

 if (VAR_10 == 0 && VAR_9->use_count == 0 && VAR_9->supply)
  VAR_10 = FUNC_9(VAR_9->supply);

 return VAR_10;
}
