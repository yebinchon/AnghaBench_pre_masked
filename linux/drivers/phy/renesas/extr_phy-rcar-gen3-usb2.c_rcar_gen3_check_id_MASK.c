
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_chan {scalar_t__ dr_mode; scalar_t__ base; int uses_otg_pins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct rcar_gen3_chan *VAR_3)
{
 if (!VAR_3->uses_otg_pins)
  return (VAR_3->dr_mode == VAR_2) ? 0 : 1;

 return !!(FUNC_0(VAR_3->base + VAR_0) & VAR_1);
}
