
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;
struct TYPE_2__ {int dispc_clk_source; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;



 int FUNC_1 (int ,int,int ,int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(enum omap_dss_clk_source VAR_3)
{
 int VAR_4;
 u8 VAR_5, VAR_6;

 switch (VAR_3) {
 case 128:
  VAR_4 = 0;
  break;
 case 129:
  VAR_4 = 1;
  break;
 case 130:
  VAR_4 = 2;
  break;
 default:
  FUNC_0();
  return;
 }

 FUNC_2(VAR_1, &VAR_5, &VAR_6);

 FUNC_1(VAR_0, VAR_4, VAR_5, VAR_6);

 VAR_2.dispc_clk_source = VAR_3;
}
