
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct miphy28lp_phy {int * syscfg_reg; int osc_rdy; struct miphy28lp_dev* phydev; } ;
struct miphy28lp_dev {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct miphy28lp_phy *VAR_6)
{
 struct miphy28lp_dev *VAR_7 = VAR_6->phydev;
 unsigned long VAR_8 = VAR_5 + 5 * VAR_2;
 u32 VAR_9;

 if (!VAR_6->osc_rdy)
  return 0;

 if (!VAR_6->syscfg_reg[VAR_4])
  return -VAR_1;

 do {
  FUNC_1(VAR_7->regmap,
    VAR_6->syscfg_reg[VAR_4], &VAR_9);

  if ((VAR_9 & VAR_3) != VAR_3)
   FUNC_0();
  else
   return 0;
 } while (!FUNC_2(VAR_5, VAR_8));

 return -VAR_0;
}
