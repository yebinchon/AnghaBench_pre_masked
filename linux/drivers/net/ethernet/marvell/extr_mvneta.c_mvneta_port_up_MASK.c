
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_tx_queue {scalar_t__ descs; } ;
struct mvneta_rx_queue {scalar_t__ descs; } ;
struct mvneta_port {struct mvneta_rx_queue* rxqs; struct mvneta_tx_queue* txqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mvneta_port*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct mvneta_port *VAR_4)
{
 int VAR_5;
 u32 VAR_6;


 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct mvneta_tx_queue *VAR_7 = &VAR_4->txqs[VAR_5];
  if (VAR_7->descs)
   VAR_6 |= (1 << VAR_5);
 }
 FUNC_0(VAR_4, VAR_1, VAR_6);

 VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct mvneta_rx_queue *VAR_8 = &VAR_4->rxqs[VAR_5];

  if (VAR_8->descs)
   VAR_6 |= (1 << VAR_5);
 }
 FUNC_0(VAR_4, VAR_0, VAR_6);
}
