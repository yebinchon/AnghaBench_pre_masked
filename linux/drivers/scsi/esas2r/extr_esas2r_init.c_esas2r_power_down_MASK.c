
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct esas2r_adapter {int prev_dev_cnt; int flags; int flags2; } ;


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
 int FUNC_0 (struct esas2r_adapter*) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct esas2r_adapter*) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (struct esas2r_adapter*,int ) ;
 int FUNC_6 (struct esas2r_adapter*) ;
 int FUNC_7 (struct esas2r_adapter*,int) ;
 int FUNC_8 (struct esas2r_adapter*,int ,int) ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

void FUNC_14(struct esas2r_adapter *VAR_11)
{
 FUNC_12(VAR_6, &VAR_11->flags);
 FUNC_12(VAR_5, &VAR_11->flags);

 if (!FUNC_13(VAR_2, &VAR_11->flags)) {
  u32 VAR_12;
  u32 VAR_13;







  FUNC_0(VAR_11);
  FUNC_1(VAR_11);


  FUNC_8(VAR_11, VAR_8,
         VAR_7);
  VAR_12 = FUNC_9(VAR_10);

  while (1) {
   VAR_13 =
    FUNC_5(VAR_11, VAR_9);
   if (VAR_13 & VAR_7) {
    FUNC_8(VAR_11, VAR_9,
           VAR_13);
    break;
   }

   FUNC_11(FUNC_10(100));

   if ((FUNC_9(VAR_10) - VAR_12) > 3000) {
    FUNC_2(
     "timeout waiting for interface down");
    break;
   }
  }





  if (FUNC_13(VAR_0, &VAR_11->flags2))
   FUNC_3(VAR_11);
 }


 FUNC_12(VAR_4, &VAR_11->flags);
 FUNC_12(VAR_3, &VAR_11->flags);
 FUNC_12(VAR_1, &VAR_11->flags);

 FUNC_4(VAR_11);


 VAR_11->prev_dev_cnt = FUNC_6(VAR_11);
 FUNC_7(VAR_11, 0);
}
