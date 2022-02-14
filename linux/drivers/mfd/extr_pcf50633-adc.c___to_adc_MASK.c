
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf50633_adc {int dummy; } ;
struct pcf50633 {int adc_pdev; } ;


 struct pcf50633_adc* FUNC_0 (int ) ;

__attribute__((used)) static inline struct pcf50633_adc *FUNC_1(struct pcf50633 *VAR_0)
{
 return FUNC_0(VAR_0->adc_pdev);
}
