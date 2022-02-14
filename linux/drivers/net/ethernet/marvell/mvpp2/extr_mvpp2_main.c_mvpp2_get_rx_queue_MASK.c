
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_rx_queue {int dummy; } ;
struct mvpp2_port {struct mvpp2_rx_queue** rxqs; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct mvpp2_rx_queue *FUNC_1(struct mvpp2_port *VAR_0,
       u32 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1) - 1;

 return VAR_0->rxqs[VAR_2];
}
