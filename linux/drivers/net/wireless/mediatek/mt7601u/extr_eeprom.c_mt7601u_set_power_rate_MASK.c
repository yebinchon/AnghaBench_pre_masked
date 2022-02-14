
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct power_per_rate {scalar_t__ bw20; scalar_t__ bw40; int raw; } ;
typedef scalar_t__ s8 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct power_per_rate *VAR_0, s8 VAR_1, u8 VAR_2)
{

 if (VAR_2 == 0xff)
  return;

 VAR_0->raw = FUNC_1(VAR_2);
 VAR_0->bw20 = FUNC_0(VAR_2);

 VAR_0->bw40 = VAR_0->bw20 + VAR_1;
}
