
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* clkout; } ;
struct dss_pll {TYPE_1__ cinfo; } ;


 int FUNC_0 () ;



 unsigned long FUNC_1 () ;
 int FUNC_2 () ;
 struct dss_pll* FUNC_3 (char*) ;

__attribute__((used)) static unsigned long FUNC_4(void)
{
 struct dss_pll *VAR_0;
 unsigned long VAR_1 = 0;

 switch (FUNC_2()) {
 case 128:
  VAR_1 = FUNC_1();
  break;
 case 129:
  VAR_0 = FUNC_3("dsi0");
  if (!VAR_0)
   VAR_0 = FUNC_3("video0");

  VAR_1 = VAR_0->cinfo.clkout[0];
  break;
 case 130:
  VAR_0 = FUNC_3("dsi1");
  if (!VAR_0)
   VAR_0 = FUNC_3("video1");

  VAR_1 = VAR_0->cinfo.clkout[0];
  break;
 default:
  FUNC_0();
  return 0;
 }

 return VAR_1;
}
