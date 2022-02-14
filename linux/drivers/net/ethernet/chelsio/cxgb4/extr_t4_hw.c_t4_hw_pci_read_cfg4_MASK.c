
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; int pf; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct adapter*,int ) ;
 int FUNC_5 (struct adapter*,int ,int) ;

void FUNC_6(struct adapter *VAR_6, int VAR_7, u32 *VAR_8)
{
 u32 VAR_9 = FUNC_1(VAR_6->pf) | FUNC_2(VAR_7);

 if (FUNC_0(VAR_6->params.chip) <= VAR_0)
  VAR_9 |= VAR_1;
 else
  VAR_9 |= VAR_5;

 if (FUNC_3(VAR_6->params.chip))
  VAR_9 |= VAR_2;

 FUNC_5(VAR_6, VAR_4, VAR_9);
 *VAR_8 = FUNC_4(VAR_6, VAR_3);






 FUNC_5(VAR_6, VAR_4, 0);
}
