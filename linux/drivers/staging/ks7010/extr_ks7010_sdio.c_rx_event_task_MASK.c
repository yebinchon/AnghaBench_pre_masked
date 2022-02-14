
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rx_device_buffer {int size; int data; } ;
struct TYPE_2__ {size_t qhead; struct rx_device_buffer* rx_dev_buff; } ;
struct ks_wlan_private {scalar_t__ dev_state; int rx_bh_task; TYPE_1__ rx_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ks_wlan_private*,int ,int ) ;
 int FUNC_1 (struct ks_wlan_private*) ;
 scalar_t__ FUNC_2 (struct ks_wlan_private*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct ks_wlan_private *VAR_2 = (struct ks_wlan_private *)VAR_1;
 struct rx_device_buffer *VAR_3;

 if (FUNC_2(VAR_2) && VAR_2->dev_state >= VAR_0) {
  VAR_3 = &VAR_2->rx_dev.rx_dev_buff[VAR_2->rx_dev.qhead];
  FUNC_0(VAR_2, VAR_3->data, VAR_3->size);
  FUNC_1(VAR_2);

  if (FUNC_2(VAR_2))
   FUNC_3(&VAR_2->rx_bh_task);
 }
}
