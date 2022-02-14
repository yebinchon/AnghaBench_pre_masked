
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll {int dummy; } ;
struct hdmi_pll_data {struct dss_pll pll; } ;


 int FUNC_0 (struct dss_pll*) ;

void FUNC_1(struct hdmi_pll_data *VAR_0)
{
 struct dss_pll *VAR_1 = &VAR_0->pll;

 FUNC_0(VAR_1);
}
