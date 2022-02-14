
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int snpsid; } ;
struct dwc2_hsotg {TYPE_1__ hw_params; } ;



__attribute__((used)) static inline bool FUNC_0(struct dwc2_hsotg *VAR_0)
{
 return (VAR_0->hw_params.snpsid & 0xffff0000) == 0x55310000;
}
