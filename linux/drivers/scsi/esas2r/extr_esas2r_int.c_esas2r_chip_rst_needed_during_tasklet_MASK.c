
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {scalar_t__ chip_uptime; scalar_t__ int_mask; int prev_dev_cnt; int flags; int chip_init_time; } ;


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
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct esas2r_adapter*) ;
 int FUNC_6 (struct esas2r_adapter*) ;
 int FUNC_7 (struct esas2r_adapter*) ;
 int FUNC_8 (struct esas2r_adapter*,int) ;
 int VAR_14 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct esas2r_adapter *VAR_15)
{

 FUNC_0(VAR_3, &VAR_15->flags);
 FUNC_0(VAR_1, &VAR_15->flags);
 FUNC_0(VAR_0, &VAR_15->flags);
 FUNC_0(VAR_2, &VAR_15->flags);
 if (!FUNC_3(VAR_15) || (VAR_15->chip_uptime >=
           VAR_12)) {
  FUNC_2("*** adapter disabled ***");
  FUNC_10(VAR_6, &VAR_15->flags);
  FUNC_10(VAR_7, &VAR_15->flags);
  FUNC_0(VAR_4, &VAR_15->flags);
  FUNC_0(VAR_8, &VAR_15->flags);

  FUNC_1(VAR_15);
  VAR_15->int_mask = 0;
  FUNC_5(VAR_15);

  FUNC_4(VAR_13,
      "Adapter disabled because of hardware failure");
 } else {
  bool VAR_16 = FUNC_11(VAR_5, &VAR_15->flags);

  if (!VAR_16)




   FUNC_1(VAR_15);

  if ((FUNC_12(VAR_10, &VAR_15->flags)) &&
      !FUNC_12(VAR_9, &VAR_15->flags) && !VAR_16) {




  } else {
   FUNC_2("*** resetting chip ***");
   FUNC_6(VAR_15);
  }


  VAR_15->chip_uptime += VAR_11;
  VAR_15->chip_init_time = FUNC_9(VAR_14);
  if (!FUNC_12(VAR_10, &VAR_15->flags)) {
   FUNC_5(VAR_15);

   if (!VAR_16) {

    VAR_15->prev_dev_cnt =
     FUNC_7(VAR_15);
    FUNC_8(VAR_15, 0);
   }
  }

  VAR_15->int_mask = 0;
 }
}
