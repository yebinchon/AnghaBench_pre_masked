
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_pll {int id; } ;
struct TYPE_2__ {int dispc_channel; } ;
struct dpi_data {struct dss_pll* pll; TYPE_1__ output; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 struct dss_pll* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dss_pll*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct dpi_data *VAR_1)
{
 struct dss_pll *VAR_2;

 if (VAR_1->pll)
  return;

 VAR_2 = FUNC_1(VAR_1->output.dispc_channel);
 if (!VAR_2)
  return;


 if (FUNC_4() == VAR_0)
  FUNC_3(VAR_2->id, VAR_1->output.dispc_channel);

 if (FUNC_2(VAR_2)) {
  FUNC_0("DSI PLL not operational\n");
  return;
 }

 VAR_1->pll = VAR_2;
}
