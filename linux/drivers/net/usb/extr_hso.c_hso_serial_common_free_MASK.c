
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_serial {int num_rx_urbs; int port; int tx_data; int tx_buffer; int tx_urb; int * rx_data; int * rx_urb; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hso_serial *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_urbs; VAR_1++) {

  FUNC_2(VAR_0->rx_urb[VAR_1]);

  FUNC_0(VAR_0->rx_data[VAR_1]);
 }


 FUNC_2(VAR_0->tx_urb);
 FUNC_0(VAR_0->tx_buffer);
 FUNC_0(VAR_0->tx_data);
 FUNC_1(&VAR_0->port);
}
