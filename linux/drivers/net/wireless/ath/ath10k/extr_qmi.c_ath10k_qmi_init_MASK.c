
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k_snoc {struct ath10k_qmi* qmi; } ;
struct ath10k_qmi {int qmi_hdl; int event_wq; int event_work; int event_lock; int event_list; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (struct ath10k*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ath10k_qmi*,int ) ;
 struct ath10k_snoc* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ath10k_qmi*) ;
 struct ath10k_qmi* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 int FUNC_11 (int *) ;
 int VAR_9 ;
 int FUNC_12 (int *) ;

int FUNC_13(struct ath10k *VAR_10, u32 VAR_11)
{
 struct ath10k_snoc *VAR_12 = FUNC_5(VAR_10);
 struct ath10k_qmi *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->ar = VAR_10;
 VAR_12->qmi = VAR_13;

 VAR_14 = FUNC_4(VAR_13, VAR_11);
 if (VAR_14)
  goto err;

 VAR_14 = FUNC_10(&VAR_13->qmi_hdl,
         VAR_3,
         &VAR_8, VAR_9);
 if (VAR_14)
  goto err;

 VAR_13->event_wq = FUNC_2("ath10k_qmi_driver_event",
     VAR_6, 1);
 if (!VAR_13->event_wq) {
  FUNC_3(VAR_10, "failed to allocate workqueue\n");
  VAR_14 = -VAR_0;
  goto err_release_qmi_handle;
 }

 FUNC_0(&VAR_13->event_list);
 FUNC_12(&VAR_13->event_lock);
 FUNC_1(&VAR_13->event_work, VAR_7);

 VAR_14 = FUNC_9(&VAR_13->qmi_hdl, VAR_4,
        VAR_5, 0);
 if (VAR_14)
  goto err_qmi_lookup;

 return 0;

err_qmi_lookup:
 FUNC_6(VAR_13->event_wq);

err_release_qmi_handle:
 FUNC_11(&VAR_13->qmi_hdl);

err:
 FUNC_7(VAR_13);
 return VAR_14;
}
