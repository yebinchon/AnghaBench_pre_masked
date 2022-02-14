
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_usbphyc {scalar_t__ switch_setup; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct stm32_usbphyc *VAR_2,
           u32 VAR_3)
{
 if (!VAR_3)
  FUNC_0(VAR_2->base + VAR_0,
           VAR_1);
 else
  FUNC_1(VAR_2->base + VAR_0,
           VAR_1);
 VAR_2->switch_setup = VAR_3;
}
