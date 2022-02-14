
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* rx_urb; void* tx_urb; void* intr_urb; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(pegasus_t *VAR_2)
{
 int VAR_3 = -VAR_0;

 VAR_2->rx_urb = FUNC_0(0, VAR_1);
 if (!VAR_2->rx_urb) {
  return VAR_3;
 }
 VAR_2->tx_urb = FUNC_0(0, VAR_1);
 if (!VAR_2->tx_urb) {
  FUNC_1(VAR_2->rx_urb);
  return VAR_3;
 }
 VAR_2->intr_urb = FUNC_0(0, VAR_1);
 if (!VAR_2->intr_urb) {
  FUNC_1(VAR_2->tx_urb);
  FUNC_1(VAR_2->rx_urb);
  return VAR_3;
 }

 return 0;
}
