
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct usb_tx_sdu {int len; void (* callback ) (void*) ;int list; void* cb_data; scalar_t__ buf; } ;
struct tx_cxt {int lock; int sdu_list; } ;
struct sdu {void* nic_type; void* bearer_ID; void* dft_eps_ID; void* len; int data; void* cmd_evt; } ;
struct TYPE_2__ {int work; } ;
struct lte_udev {TYPE_1__ work_tx; int gdm_ed; int usbdev; struct tx_cxt tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int) ;
 void* FUNC_1 (int ,int) ;
 struct usb_tx_sdu* FUNC_2 (struct tx_cxt*,int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,void*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(void *VAR_8, void *VAR_9, int VAR_10,
       unsigned int VAR_11, unsigned int VAR_12,
       void (*VAR_13)(void *VAR_14), void *VAR_15,
       int VAR_16, int VAR_17)
{
 struct lte_udev *VAR_18 = VAR_8;
 struct tx_cxt *VAR_19 = &VAR_18->tx;
 struct usb_tx_sdu *VAR_20;
 struct sdu *VAR_21 = ((void*)0);
 unsigned long VAR_22;
 int VAR_23 = 0;
 u16 VAR_24;

 if (!VAR_18->usbdev) {
  FUNC_5("sdu send - invalid device\n");
  return VAR_6;
 }

 FUNC_7(&VAR_19->lock, VAR_22);
 VAR_20 = FUNC_2(VAR_19, &VAR_23);
 FUNC_8(&VAR_19->lock, VAR_22);

 if (!VAR_20) {
  FUNC_5("sdu send - free list empty\n");
  return VAR_7;
 }

 VAR_21 = (struct sdu *)VAR_20->buf;
 VAR_21->cmd_evt = FUNC_0(VAR_18->gdm_ed, VAR_2);
 if (VAR_17 == VAR_3) {
  VAR_24 = VAR_10 + VAR_4;
  FUNC_4(VAR_21->data, VAR_9, VAR_10);
 } else {
  VAR_24 = VAR_10 - VAR_0;
  VAR_24 += VAR_4;
  FUNC_4(VAR_21->data, VAR_9 + VAR_0, VAR_10 - VAR_0);
 }

 VAR_21->len = FUNC_0(VAR_18->gdm_ed, VAR_24);
 VAR_21->dft_eps_ID = FUNC_1(VAR_18->gdm_ed, VAR_11);
 VAR_21->bearer_ID = FUNC_1(VAR_18->gdm_ed, VAR_12);
 VAR_21->nic_type = FUNC_1(VAR_18->gdm_ed, VAR_17);

 VAR_20->len = VAR_24 + VAR_1;
 VAR_20->callback = VAR_13;
 VAR_20->cb_data = VAR_15;

 FUNC_7(&VAR_19->lock, VAR_22);
 FUNC_3(&VAR_20->list, &VAR_19->sdu_list);
 FUNC_6(&VAR_18->work_tx.work);
 FUNC_8(&VAR_19->lock, VAR_22);

 if (VAR_23)
  return VAR_5;

 return 0;
}
