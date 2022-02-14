
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_sysc_ch {int chan_bit; scalar_t__ chan_offs; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_2(const struct rcar_sysc_ch *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_1 + VAR_2->chan_offs + VAR_0);
 if (VAR_3 & FUNC_0(VAR_2->chan_bit))
  return 1;

 return 0;
}
