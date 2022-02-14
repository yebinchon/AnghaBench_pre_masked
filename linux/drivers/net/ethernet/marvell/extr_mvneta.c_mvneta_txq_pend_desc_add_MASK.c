
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mvneta_tx_queue {scalar_t__ pending; int id; } ;
struct mvneta_port {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct mvneta_port*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mvneta_port *VAR_0,
         struct mvneta_tx_queue *VAR_1,
         int VAR_2)
{
 u32 VAR_3;

 VAR_2 += VAR_1->pending;


 do {
  VAR_3 = FUNC_1(VAR_2, 255);
  FUNC_2(VAR_0, FUNC_0(VAR_1->id), VAR_3);
  VAR_2 -= VAR_3;
 } while (VAR_2 > 0);
 VAR_1->pending = 0;
}
