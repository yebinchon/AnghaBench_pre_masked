
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_tx_queue {int id; } ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mvneta_port*,int ) ;
 int FUNC_3 (struct mvneta_port*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct mvneta_port *VAR_1,
      struct mvneta_tx_queue *VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_2->id));

 VAR_4 &= ~VAR_0;
 VAR_4 |= FUNC_0(VAR_3);

 FUNC_3(VAR_1, FUNC_1(VAR_2->id), VAR_4);
}
