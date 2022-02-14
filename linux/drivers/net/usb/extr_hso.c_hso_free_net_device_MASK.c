
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_net {scalar_t__ net; struct hso_device* mux_bulk_tx_buf; int mux_bulk_tx_urb; struct hso_device** mux_bulk_rx_buf_pool; int * mux_bulk_rx_urb_pool; int parent; } ;
struct hso_device {int dummy; } ;


 int VAR_0 ;
 struct hso_net* FUNC_0 (struct hso_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hso_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct hso_device *VAR_1)
{
 int VAR_2;
 struct hso_net *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3)
  return;

 FUNC_3(VAR_3->parent);

 if (VAR_3->net)
  FUNC_4(VAR_3->net);


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_5(VAR_3->mux_bulk_rx_urb_pool[VAR_2]);
  FUNC_2(VAR_3->mux_bulk_rx_buf_pool[VAR_2]);
  VAR_3->mux_bulk_rx_buf_pool[VAR_2] = ((void*)0);
 }
 FUNC_5(VAR_3->mux_bulk_tx_urb);
 FUNC_2(VAR_3->mux_bulk_tx_buf);
 VAR_3->mux_bulk_tx_buf = ((void*)0);

 if (VAR_3->net)
  FUNC_1(VAR_3->net);

 FUNC_2(VAR_1);
}
