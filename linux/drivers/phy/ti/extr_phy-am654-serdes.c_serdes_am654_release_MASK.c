
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {int busy; int control; int type; } ;
struct phy {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct serdes_am654* FUNC_1 (struct phy*) ;

__attribute__((used)) static void FUNC_2(struct phy *VAR_1)
{
 struct serdes_am654 *VAR_2 = FUNC_1(VAR_1);

 VAR_2->type = VAR_0;
 VAR_2->busy = 0;
 FUNC_0(VAR_2->control);
}
