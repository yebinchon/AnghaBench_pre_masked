
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_rx_queue {int size; int time_coal; int pkts_coal; int id; int descs_phys; } ;
struct mvneta_port {scalar_t__ rx_offset_correction; int pkt_size; int bm_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct mvneta_port*,struct mvneta_rx_queue*,int ) ;
 int FUNC_4 (struct mvneta_port*,struct mvneta_rx_queue*,int ) ;
 int FUNC_5 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_6 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_7 (struct mvneta_port*,struct mvneta_rx_queue*,scalar_t__) ;
 int FUNC_8 (struct mvneta_port*,struct mvneta_rx_queue*,int ) ;
 int FUNC_9 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_10 (struct mvneta_port*,struct mvneta_rx_queue*,int ) ;
 int FUNC_11 (struct mvneta_port*,struct mvneta_rx_queue*,scalar_t__) ;
 int FUNC_12 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_13 (struct mvneta_port*,int ,int ) ;

__attribute__((used)) static void FUNC_14(struct mvneta_port *VAR_3,
          struct mvneta_rx_queue *VAR_4)
{

 FUNC_13(VAR_3, FUNC_0(VAR_4->id), VAR_4->descs_phys);
 FUNC_13(VAR_3, FUNC_1(VAR_4->id), VAR_4->size);


 FUNC_3(VAR_3, VAR_4, VAR_4->pkts_coal);
 FUNC_4(VAR_3, VAR_4, VAR_4->time_coal);

 if (!VAR_3->bm_priv) {

  FUNC_11(VAR_3, VAR_4, 0);
  FUNC_7(VAR_3, VAR_4, VAR_1 < VAR_2 ?
     VAR_1 :
     FUNC_2(VAR_3->pkt_size));
  FUNC_5(VAR_3, VAR_4);
  FUNC_8(VAR_3, VAR_4, VAR_4->size);
 } else {

  FUNC_11(VAR_3, VAR_4,
          VAR_0 - VAR_3->rx_offset_correction);

  FUNC_6(VAR_3, VAR_4);

  FUNC_9(VAR_3, VAR_4);
  FUNC_12(VAR_3, VAR_4);
  FUNC_10(VAR_3, VAR_4, VAR_4->size);
 }
}
