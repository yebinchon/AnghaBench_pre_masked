
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long* clkout; } ;
struct dss_pll {TYPE_1__ cinfo; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int,int) ;



 unsigned long FUNC_3 () ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 struct dss_pll* FUNC_8 (char*) ;

__attribute__((used)) static unsigned long FUNC_9(enum omap_channel VAR_0)
{
 struct dss_pll *VAR_1;
 int VAR_2;
 unsigned long VAR_3;
 u32 VAR_4;

 if (FUNC_7(VAR_0)) {
  VAR_4 = FUNC_4(FUNC_1(VAR_0));

  VAR_2 = FUNC_2(VAR_4, 23, 16);

  switch (FUNC_6(VAR_0)) {
  case 128:
   VAR_3 = FUNC_5();
   break;
  case 129:
   VAR_1 = FUNC_8("dsi0");
   if (!VAR_1)
    VAR_1 = FUNC_8("video0");

   VAR_3 = VAR_1->cinfo.clkout[0];
   break;
  case 130:
   VAR_1 = FUNC_8("dsi1");
   if (!VAR_1)
    VAR_1 = FUNC_8("video1");

   VAR_3 = VAR_1->cinfo.clkout[0];
   break;
  default:
   FUNC_0();
   return 0;
  }

  return VAR_3 / VAR_2;
 } else {
  return FUNC_3();
 }
}
