
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jz4740_mmc_host {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct jz4740_mmc_host *VAR_4)
{
 uint32_t VAR_5;
 unsigned int VAR_6 = 1000;

 FUNC_1(VAR_1, VAR_4->base + VAR_3);
 do {
  VAR_5 = FUNC_0(VAR_4->base + VAR_2);
 } while (VAR_5 & VAR_0 && --VAR_6);
}
