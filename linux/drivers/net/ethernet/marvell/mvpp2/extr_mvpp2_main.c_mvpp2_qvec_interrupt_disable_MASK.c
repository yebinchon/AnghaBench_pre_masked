
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_queue_vector {int sw_thread_mask; struct mvpp2_port* port; } ;
struct mvpp2_port {int id; int priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(struct mvpp2_queue_vector *VAR_0)
{
 struct mvpp2_port *VAR_1 = VAR_0->port;

 FUNC_2(VAR_1->priv, FUNC_1(VAR_1->id),
      FUNC_0(VAR_0->sw_thread_mask));
}
