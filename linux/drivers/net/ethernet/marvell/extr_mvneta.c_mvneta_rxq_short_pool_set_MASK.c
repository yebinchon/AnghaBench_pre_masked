
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvneta_rx_queue {int id; } ;
struct mvneta_port {TYPE_1__* pool_short; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mvneta_port*,int ) ;
 int FUNC_2 (struct mvneta_port*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct mvneta_port *VAR_2,
          struct mvneta_rx_queue *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_3->id));
 VAR_4 &= ~VAR_0;
 VAR_4 |= (VAR_2->pool_short->id << VAR_1);

 FUNC_2(VAR_2, FUNC_0(VAR_3->id), VAR_4);
}
