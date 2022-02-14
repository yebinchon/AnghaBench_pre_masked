
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int hal_buf; int dxe_lock; int vif_list; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct wcn36xx*) ;
 int FUNC_6 (struct wcn36xx*) ;
 int FUNC_7 (struct wcn36xx*) ;
 int FUNC_8 (struct wcn36xx*) ;
 int FUNC_9 (struct wcn36xx*) ;
 int FUNC_10 (struct wcn36xx*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct wcn36xx*) ;
 int FUNC_13 (struct wcn36xx*,int,int,int,int) ;
 int FUNC_14 (struct wcn36xx*) ;
 int FUNC_15 (struct wcn36xx*) ;
 int FUNC_16 (struct wcn36xx*) ;
 int FUNC_17 (struct wcn36xx*) ;
 int FUNC_18 (struct wcn36xx*) ;
 int FUNC_19 (struct wcn36xx*) ;
 int FUNC_20 (char*) ;

__attribute__((used)) static int FUNC_21(struct ieee80211_hw *VAR_4)
{
 struct wcn36xx *VAR_5 = VAR_4->priv;
 int VAR_6;

 FUNC_4(VAR_2, "mac start\n");


 VAR_6 = FUNC_17(VAR_5);
 if (VAR_6) {
  FUNC_11("Failed to open smd channel: %d\n", VAR_6);
  goto out_err;
 }


 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6) {
  FUNC_11("Failed to alloc DXE mempool: %d\n", VAR_6);
  goto out_smd_close;
 }

 VAR_6 = FUNC_6(VAR_5);
 if (VAR_6) {
  FUNC_11("Failed to alloc DXE ctl blocks: %d\n", VAR_6);
  goto out_free_dxe_pool;
 }

 VAR_5->hal_buf = FUNC_2(VAR_3, VAR_1);
 if (!VAR_5->hal_buf) {
  FUNC_11("Failed to allocate smd buf\n");
  VAR_6 = -VAR_0;
  goto out_free_dxe_ctl;
 }

 VAR_6 = FUNC_16(VAR_5);
 if (VAR_6) {
  FUNC_11("Failed to push NV to chip\n");
  goto out_free_smd_buf;
 }

 VAR_6 = FUNC_18(VAR_5);
 if (VAR_6) {
  FUNC_11("Failed to start chip\n");
  goto out_free_smd_buf;
 }

 if (!FUNC_13(VAR_5, 1, 2, 2, 24)) {
  VAR_6 = FUNC_15(VAR_5);
  if (VAR_6)
   FUNC_20("Exchange feature caps failed\n");
  else
   FUNC_12(VAR_5);
 }


 VAR_6 = FUNC_10(VAR_5);
 if (VAR_6) {
  FUNC_11("DXE init failed\n");
  goto out_smd_stop;
 }

 FUNC_5(VAR_5);

 FUNC_0(&VAR_5->vif_list);
 FUNC_3(&VAR_5->dxe_lock);

 return 0;

out_smd_stop:
 FUNC_19(VAR_5);
out_free_smd_buf:
 FUNC_1(VAR_5->hal_buf);
out_free_dxe_ctl:
 FUNC_8(VAR_5);
out_free_dxe_pool:
 FUNC_9(VAR_5);
out_smd_close:
 FUNC_14(VAR_5);
out_err:
 return VAR_6;
}
