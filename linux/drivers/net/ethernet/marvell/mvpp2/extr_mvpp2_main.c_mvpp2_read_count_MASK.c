
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mvpp2_port {scalar_t__ stats_base; } ;
struct mvpp2_ethtool_counter {scalar_t__ offset; scalar_t__ reg_is_64b; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u64 FUNC_1(struct mvpp2_port *VAR_0,
       const struct mvpp2_ethtool_counter *VAR_1)
{
 u64 VAR_2;

 VAR_2 = FUNC_0(VAR_0->stats_base + VAR_1->offset);
 if (VAR_1->reg_is_64b)
  VAR_2 += (u64)FUNC_0(VAR_0->stats_base + VAR_1->offset + 4) << 32;

 return VAR_2;
}
