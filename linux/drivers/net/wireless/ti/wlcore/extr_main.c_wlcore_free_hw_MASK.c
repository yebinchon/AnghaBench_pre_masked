
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1271 {int fwlog_size; int hw; int * priv; int freezable_wq; int * tx_res_if; int * fw_status; int * raw_fw_status; int * nvs; int fw_type; int * fw; int aggr_buf_size; scalar_t__ aggr_buf; int dummy_packet; scalar_t__ fwlog; int * mbox; int * buffer_32; int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct wl1271*) ;
 int FUNC_11 (struct wl1271*) ;

int FUNC_12(struct wl1271 *VAR_1)
{

 FUNC_7(&VAR_1->mutex);
 VAR_1->fwlog_size = -1;
 FUNC_8(&VAR_1->mutex);

 FUNC_11(VAR_1);

 FUNC_6(VAR_1->buffer_32);
 FUNC_6(VAR_1->mbox);
 FUNC_2((unsigned long)VAR_1->fwlog);
 FUNC_1(VAR_1->dummy_packet);
 FUNC_3((unsigned long)VAR_1->aggr_buf, FUNC_4(VAR_1->aggr_buf_size));

 FUNC_10(VAR_1);

 FUNC_9(VAR_1->fw);
 VAR_1->fw = ((void*)0);
 VAR_1->fw_type = VAR_0;
 FUNC_6(VAR_1->nvs);
 VAR_1->nvs = ((void*)0);

 FUNC_6(VAR_1->raw_fw_status);
 FUNC_6(VAR_1->fw_status);
 FUNC_6(VAR_1->tx_res_if);
 FUNC_0(VAR_1->freezable_wq);

 FUNC_6(VAR_1->priv);
 FUNC_5(VAR_1->hw);

 return 0;
}
