
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct cs5535_mfgpt_timer {int nr; TYPE_1__* chip; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

uint16_t FUNC_1(struct cs5535_mfgpt_timer *VAR_0, uint16_t VAR_1)
{
 return FUNC_0(VAR_0->chip->base + VAR_1 + (VAR_0->nr * 8));
}
