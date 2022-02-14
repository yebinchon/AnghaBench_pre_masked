
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rp2_uart_port {scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct rp2_uart_port *VAR_0, int VAR_1,
      u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_0->base + VAR_1);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_4, VAR_0->base + VAR_1);
}
