
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hso_net {scalar_t__ mux_bulk_tx_urb; scalar_t__* mux_bulk_rx_urb_pool; } ;
struct hso_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hso_net* FUNC_0 (struct hso_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hso_device *VAR_2)
{
 int VAR_3;
 struct hso_net *VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_4->mux_bulk_rx_urb_pool[VAR_3])
   FUNC_1(VAR_4->mux_bulk_rx_urb_pool[VAR_3]);

 }
 if (VAR_4->mux_bulk_tx_urb)
  FUNC_1(VAR_4->mux_bulk_tx_urb);

 return 0;
}
