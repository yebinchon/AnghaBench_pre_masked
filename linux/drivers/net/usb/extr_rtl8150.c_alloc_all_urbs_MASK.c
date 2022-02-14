
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* tx_urb; void* rx_urb; void* intr_urb; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(rtl8150_t * VAR_1)
{
 VAR_1->rx_urb = FUNC_0(0, VAR_0);
 if (!VAR_1->rx_urb)
  return 0;
 VAR_1->tx_urb = FUNC_0(0, VAR_0);
 if (!VAR_1->tx_urb) {
  FUNC_1(VAR_1->rx_urb);
  return 0;
 }
 VAR_1->intr_urb = FUNC_0(0, VAR_0);
 if (!VAR_1->intr_urb) {
  FUNC_1(VAR_1->rx_urb);
  FUNC_1(VAR_1->tx_urb);
  return 0;
 }

 return 1;
}
