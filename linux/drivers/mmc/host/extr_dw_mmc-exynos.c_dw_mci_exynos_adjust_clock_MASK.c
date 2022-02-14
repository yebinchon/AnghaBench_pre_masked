
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct dw_mci_exynos_priv_data {unsigned int cur_speed; } ;
struct dw_mci {unsigned long bus_hz; scalar_t__ current_speed; int ciu_clk; int dev; struct dw_mci_exynos_priv_data* priv; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,int) ;
 unsigned int FUNC_4 (struct dw_mci*) ;

__attribute__((used)) static void FUNC_5(struct dw_mci *VAR_1, unsigned int VAR_2)
{
 struct dw_mci_exynos_priv_data *VAR_3 = VAR_1->priv;
 unsigned long VAR_4;
 u8 VAR_5;
 int VAR_6;




 if (!VAR_2 || FUNC_0(VAR_1->ciu_clk))
  return;


 if (VAR_2 < VAR_0)
  VAR_2 = VAR_0;

 if (VAR_2 == VAR_3->cur_speed)
  return;

 VAR_5 = FUNC_4(VAR_1);
 VAR_6 = FUNC_2(VAR_1->ciu_clk, VAR_2 * VAR_5);
 if (VAR_6)
  FUNC_3(VAR_1->dev,
   "failed to set clk-rate %u error: %d\n",
   VAR_2 * VAR_5, VAR_6);
 VAR_4 = FUNC_1(VAR_1->ciu_clk);
 VAR_1->bus_hz = VAR_4 / VAR_5;
 VAR_3->cur_speed = VAR_2;
 VAR_1->current_speed = 0;
}
