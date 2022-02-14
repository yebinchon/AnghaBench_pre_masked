
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwc3_hwparams {int dummy; } ;
struct dwc3 {int num_eps; struct dwc3_hwparams hwparams; } ;


 int FUNC_0 (struct dwc3_hwparams*) ;

__attribute__((used)) static void FUNC_1(struct dwc3 *VAR_0)
{
 struct dwc3_hwparams *VAR_1 = &VAR_0->hwparams;

 VAR_0->num_eps = FUNC_0(VAR_1);
}
