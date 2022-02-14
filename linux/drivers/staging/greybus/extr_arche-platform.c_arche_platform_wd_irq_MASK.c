
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arche_platform_drvdata {scalar_t__ wake_detect_state; int wake_lock; scalar_t__ wake_detect_start; int wake_detect; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct arche_platform_drvdata*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct arche_platform_drvdata *VAR_10 = VAR_9;
 unsigned long VAR_11;

 FUNC_3(&VAR_10->wake_lock, VAR_11);

 if (FUNC_1(VAR_10->wake_detect)) {







  if (VAR_10->wake_detect_state == VAR_3) {
   if (FUNC_5(VAR_7,
     VAR_10->wake_detect_start +
     FUNC_2(VAR_2))) {
    FUNC_0(VAR_10,
             VAR_6);
   } else {




    if (VAR_10->wake_detect_state !=
      VAR_4) {
     FUNC_0(VAR_10,
              VAR_5);
     FUNC_4(
      &VAR_10->wake_lock,
      VAR_11);
     return VAR_1;
    }
   }
  }
 } else {

  if (VAR_10->wake_detect_state == VAR_6) {
   VAR_10->wake_detect_start = VAR_7;







   FUNC_0(VAR_10,
            VAR_3);
  }
 }

 FUNC_4(&VAR_10->wake_lock, VAR_11);

 return VAR_0;
}
