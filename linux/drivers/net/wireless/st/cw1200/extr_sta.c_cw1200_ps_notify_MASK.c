
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cw1200_common {int vif; int hw; int sta_asleep_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (char*,char*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct cw1200_common *VAR_3,
        int VAR_4, bool VAR_5)
{
 if (VAR_4 > VAR_0)
  return;

 FUNC_1("%s for LinkId: %d. STAs asleep: %.8X\n",
   VAR_5 ? "Stop" : "Start",
   VAR_4, VAR_3->sta_asleep_mask);

 FUNC_0(VAR_3->hw, VAR_3->vif,
       VAR_5 ? VAR_2 : VAR_1, VAR_4);
}
