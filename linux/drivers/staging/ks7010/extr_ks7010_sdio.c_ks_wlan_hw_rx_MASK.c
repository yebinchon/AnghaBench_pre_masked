
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct rx_device_buffer {void* size; int * data; } ;
struct TYPE_4__ {int confirm_wait; } ;
struct TYPE_3__ {size_t qtail; struct rx_device_buffer* rx_dev_buff; } ;
struct ks_wlan_private {int rx_bh_task; TYPE_2__ psstatus; int net_dev; TYPE_1__ rx_dev; } ;
struct hostif_hdr {int event; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (struct ks_wlan_private*) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (struct ks_wlan_private*,int ,int *,int ) ;
 int FUNC_6 (struct ks_wlan_private*,int ,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int ,int *,int) ;
 int FUNC_11 (struct ks_wlan_private*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ks_wlan_private *VAR_5, size_t VAR_6)
{
 int VAR_7;
 struct rx_device_buffer *VAR_8;
 struct hostif_hdr *VAR_9;
 u16 VAR_10 = 0;


 if (FUNC_11(VAR_5) >= (VAR_4 - 1)) {
  FUNC_9(VAR_5->net_dev, "rx buffer overflow\n");
  return;
 }
 VAR_8 = &VAR_5->rx_dev.rx_dev_buff[VAR_5->rx_dev.qtail];

 VAR_7 = FUNC_5(VAR_5, VAR_0, &VAR_8->data[0],
          FUNC_2(VAR_6));
 if (VAR_7)
  return;


 if (VAR_6 > 2046 || VAR_6 == 0) {





  VAR_7 = FUNC_6(VAR_5, VAR_2, VAR_3);
  if (VAR_7)
   FUNC_9(VAR_5->net_dev, "write READ_STATUS_REG\n");


  return;
 }

 VAR_9 = (struct hostif_hdr *)&VAR_8->data[0];
 VAR_8->size = FUNC_7(VAR_9->size) + sizeof(VAR_9->size);
 VAR_10 = FUNC_7(VAR_9->event);
 FUNC_3(VAR_5);

 VAR_7 = FUNC_6(VAR_5, VAR_2, VAR_3);
 if (VAR_7)
  FUNC_9(VAR_5->net_dev, "write READ_STATUS_REG\n");

 if (FUNC_1(&VAR_5->psstatus.confirm_wait) && FUNC_4(VAR_10)) {
  FUNC_8(VAR_5->net_dev, "IS_HIF_CONF true !!\n");
  FUNC_0(&VAR_5->psstatus.confirm_wait);
 }

 FUNC_12(&VAR_5->rx_bh_task);
}
