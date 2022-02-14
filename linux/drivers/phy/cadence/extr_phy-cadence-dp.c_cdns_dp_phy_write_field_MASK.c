
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns_dp_phy {scalar_t__ base; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cdns_dp_phy *VAR_0,
        unsigned int VAR_1,
        unsigned char VAR_2,
        unsigned char VAR_3,
        unsigned int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_0->base + VAR_1);
 FUNC_1(((VAR_4 << VAR_2) | (VAR_5 & ~(((1 << VAR_3) - 1) <<
  VAR_2))), VAR_0->base + VAR_1);
}
