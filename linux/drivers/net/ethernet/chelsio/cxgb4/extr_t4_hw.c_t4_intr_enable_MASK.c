
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int ,int) ;
 int FUNC_6 (struct adapter*,int ,int) ;

void FUNC_7(struct adapter *VAR_22)
{
 u32 VAR_23 = 0;
 u32 VAR_24 = FUNC_4(VAR_22, VAR_20);
 u32 VAR_25 = FUNC_0(VAR_22->params.chip) <= VAR_0 ?
   FUNC_2(VAR_24) : FUNC_3(VAR_24);

 if (FUNC_0(VAR_22->params.chip) <= VAR_0)
  VAR_23 = VAR_12 | VAR_13 | VAR_1;
 FUNC_6(VAR_22, VAR_21, VAR_8 |
       VAR_15 | VAR_9 |
       VAR_11 | VAR_16 |
       VAR_10 | VAR_7 |
       VAR_6 | VAR_5 |
       VAR_4 | VAR_14 |
       VAR_2 | VAR_3 | VAR_23);
 FUNC_6(VAR_22, FUNC_1(VAR_19), VAR_17);
 FUNC_5(VAR_22, VAR_18, 0, 1 << VAR_25);
}
