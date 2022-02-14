
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dwc3_omap {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct dwc3_omap*) ;
 int FUNC_1 (struct dwc3_omap*) ;
 int FUNC_2 (struct dwc3_omap*) ;
 int FUNC_3 (struct dwc3_omap*,int ) ;
 int FUNC_4 (struct dwc3_omap*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_1, void *VAR_2)
{
 struct dwc3_omap *VAR_3 = VAR_2;
 u32 VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 FUNC_4(VAR_3, VAR_4);

 VAR_4 = FUNC_1(VAR_3);
 FUNC_3(VAR_3, VAR_4);


 FUNC_0(VAR_3);

 return VAR_0;
}
