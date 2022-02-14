
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct mvneta_rx_queue {int id; } ;
struct mvneta_port {int clk; } ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct mvneta_port*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mvneta_port *VAR_0,
        struct mvneta_rx_queue *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_0->clk);
 VAR_3 = (VAR_4 / 1000000) * VAR_2;

 FUNC_2(VAR_0, FUNC_0(VAR_1->id), VAR_3);
}
