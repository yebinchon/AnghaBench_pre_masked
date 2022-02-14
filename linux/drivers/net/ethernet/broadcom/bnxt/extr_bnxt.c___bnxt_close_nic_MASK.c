
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int net_stats_prev; scalar_t__ bnapi; int pdev; int state; int timer; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 scalar_t__ FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*,int) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (struct bnxt*,int *) ;
 int FUNC_9 (struct bnxt*,int) ;
 int FUNC_10 (struct bnxt*) ;
 int FUNC_11 (struct bnxt*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void FUNC_19(struct bnxt *VAR_2, bool VAR_3,
        bool VAR_4)
{

 if (FUNC_0(VAR_2))
  FUNC_11(VAR_2);


 FUNC_10(VAR_2);

 FUNC_12(VAR_1, &VAR_2->state);
 FUNC_17();
 while (FUNC_4(VAR_2))
  FUNC_14(20);


 FUNC_9(VAR_2, VAR_3);



 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_13(&VAR_2->timer);
 if (FUNC_18(VAR_0, &VAR_2->state) &&
     FUNC_16(VAR_2->pdev))
  FUNC_15(VAR_2->pdev);

 FUNC_7(VAR_2);


 if (VAR_2->bnapi)
  FUNC_8(VAR_2, &VAR_2->net_stats_prev);
 if (VAR_3) {
  FUNC_5(VAR_2);
  FUNC_2(VAR_2);
 }
 FUNC_6(VAR_2, VAR_3);
}
