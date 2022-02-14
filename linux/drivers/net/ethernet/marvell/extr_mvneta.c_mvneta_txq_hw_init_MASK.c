
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_tx_queue {int descs_phys; int size; int done_pkts_coal; int id; } ;
struct mvneta_port {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mvneta_port*,struct mvneta_tx_queue*,int ) ;
 int FUNC_5 (struct mvneta_port*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mvneta_port *VAR_0,
          struct mvneta_tx_queue *VAR_1)
{

 FUNC_5(VAR_0, FUNC_0(VAR_1->id), 0x03ffffff);
 FUNC_5(VAR_0, FUNC_1(VAR_1->id), 0x3fffffff);


 FUNC_5(VAR_0, FUNC_2(VAR_1->id), VAR_1->descs_phys);
 FUNC_5(VAR_0, FUNC_3(VAR_1->id), VAR_1->size);

 FUNC_4(VAR_0, VAR_1, VAR_1->done_pkts_coal);
}
