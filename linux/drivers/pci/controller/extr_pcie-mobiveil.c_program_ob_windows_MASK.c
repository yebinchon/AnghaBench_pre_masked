
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct mobiveil_pcie {int apio_wins; int ob_wins_configured; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct mobiveil_pcie*,int ) ;
 int FUNC_7 (struct mobiveil_pcie*,int,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct mobiveil_pcie *VAR_5, int VAR_6,
          u64 VAR_7, u64 VAR_8, u32 VAR_9, u64 VAR_10)
{
 u32 VAR_11;
 u64 VAR_12 = ~(VAR_10 - 1);

 if (VAR_6 >= VAR_5->apio_wins) {
  FUNC_8(&VAR_5->pdev->dev,
   "ERROR: max outbound windows reached !\n");
  return;
 }





 VAR_11 = FUNC_6(VAR_5, FUNC_1(VAR_6));
 VAR_11 &= ~(VAR_3 << VAR_4 | VAR_2);
 VAR_11 |= 1 << VAR_1 | VAR_9 << VAR_4 |
   (FUNC_9(VAR_12) & VAR_2);
 FUNC_7(VAR_5, VAR_11, FUNC_1(VAR_6));

 FUNC_7(VAR_5, FUNC_10(VAR_12), FUNC_5(VAR_6));





 FUNC_7(VAR_5, FUNC_9(VAR_7) & (~VAR_0),
     FUNC_0(VAR_6));
 FUNC_7(VAR_5, FUNC_10(VAR_7),
     FUNC_4(VAR_6));

 FUNC_7(VAR_5, FUNC_9(VAR_8),
     FUNC_3(VAR_6));
 FUNC_7(VAR_5, FUNC_10(VAR_8),
     FUNC_2(VAR_6));

 VAR_5->ob_wins_configured++;
}
