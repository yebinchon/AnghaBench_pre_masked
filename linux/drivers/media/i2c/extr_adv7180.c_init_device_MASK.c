
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv7180_state {scalar_t__ irq; int mutex; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int (* init ) (struct adv7180_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct adv7180_state*) ;
 int FUNC_1 (struct adv7180_state*) ;
 int FUNC_2 (struct adv7180_state*,int) ;
 int FUNC_3 (struct adv7180_state*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct adv7180_state*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct adv7180_state *VAR_10)
{
 int VAR_11;

 FUNC_4(&VAR_10->mutex);

 FUNC_2(VAR_10, 1);

 FUNC_3(VAR_10, VAR_9, VAR_3);
 FUNC_7(5000, 10000);

 VAR_11 = VAR_10->chip_info->init(VAR_10);
 if (VAR_11)
  goto out_unlock;

 VAR_11 = FUNC_0(VAR_10);
 if (VAR_11)
  goto out_unlock;

 FUNC_1(VAR_10);


 if (VAR_10->irq > 0) {

  VAR_11 = FUNC_3(VAR_10, VAR_4,
      VAR_0 |
      VAR_1);
  if (VAR_11 < 0)
   goto out_unlock;

  VAR_11 = FUNC_3(VAR_10, VAR_5, 0);
  if (VAR_11 < 0)
   goto out_unlock;

  VAR_11 = FUNC_3(VAR_10, VAR_6, 0);
  if (VAR_11 < 0)
   goto out_unlock;


  VAR_11 = FUNC_3(VAR_10, VAR_7,
      VAR_2);
  if (VAR_11 < 0)
   goto out_unlock;

  VAR_11 = FUNC_3(VAR_10, VAR_8, 0);
  if (VAR_11 < 0)
   goto out_unlock;
 }

out_unlock:
 FUNC_5(&VAR_10->mutex);

 return VAR_11;
}
