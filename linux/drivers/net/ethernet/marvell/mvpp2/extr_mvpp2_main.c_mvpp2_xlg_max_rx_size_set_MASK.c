
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_port {int pkt_size; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct mvpp2_port *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_4->base + VAR_2);
 VAR_5 &= ~VAR_0;
 VAR_5 |= ((VAR_4->pkt_size - VAR_3) / 2) <<
        VAR_1;
 FUNC_1(VAR_5, VAR_4->base + VAR_2);
}
