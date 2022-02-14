
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; int pdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int,int ) ;
 int FUNC_7 (struct adapter*,int ,int ) ;

void FUNC_8(struct adapter *VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_4(VAR_4->pdev))
  return;

 VAR_5 = FUNC_5(VAR_4, VAR_3);
 VAR_6 = FUNC_0(VAR_4->params.chip) <= VAR_0 ?
   FUNC_2(VAR_5) : FUNC_3(VAR_5);

 FUNC_7(VAR_4, FUNC_1(VAR_2), 0);
 FUNC_6(VAR_4, VAR_1, 1 << VAR_6, 0);
}
