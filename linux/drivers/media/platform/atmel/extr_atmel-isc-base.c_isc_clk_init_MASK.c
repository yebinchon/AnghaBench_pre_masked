
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isc_device {TYPE_1__* isc_clks; } ;
struct TYPE_2__ {int clk; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct isc_device*,unsigned int) ;

int FUNC_3(struct isc_device *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->isc_clks); VAR_2++)
  VAR_1->isc_clks[VAR_2].clk = FUNC_1(-VAR_0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->isc_clks); VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
