
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct charger_manager {int dev; int fullbatt_vchk_work; scalar_t__ fullbatt_vchk_jiffies_at; } ;
typedef int ktime_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct charger_manager*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct charger_manager* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct device *VAR_8)
{
 struct charger_manager *VAR_9 = FUNC_3(VAR_8);

 if (VAR_2)
  VAR_2 = 0;

 if (VAR_4) {
  ktime_t VAR_10;

  FUNC_1(VAR_3);
  VAR_4 = 0;
  VAR_10 = FUNC_2(VAR_3);
  VAR_1 -= FUNC_6(VAR_10);
  FUNC_9(&VAR_7);
 }

 FUNC_0(VAR_9);


 if (VAR_9->fullbatt_vchk_jiffies_at) {
  unsigned long VAR_11 = 0;
  unsigned long VAR_12 = VAR_6 + VAR_0;

  if (FUNC_10(VAR_12, VAR_9->fullbatt_vchk_jiffies_at)) {
   VAR_11 = (unsigned long)((long)VAR_12
    - (long)(VAR_9->fullbatt_vchk_jiffies_at));
   VAR_11 = FUNC_5(VAR_11);
  } else {
   VAR_11 = 0;
  }





  if (VAR_11 > VAR_1)
   VAR_11 -= VAR_1;
  else
   VAR_11 = 0;

  FUNC_8(VAR_5, &VAR_9->fullbatt_vchk_work,
       FUNC_7(VAR_11));
 }
 FUNC_4(VAR_9->dev, 0);
}
