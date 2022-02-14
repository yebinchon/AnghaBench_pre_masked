
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int rx_post_retry; int dump_work; int ce_diag_mutex; int ps_lock; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct ath10k*) ;
 scalar_t__ FUNC_2 (struct ath10k*) ;
 struct ath10k_ce* FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 int FUNC_5 (struct ath10k*) ;
 int VAR_0 ;
 int FUNC_6 (struct ath10k*) ;
 struct ath10k_pci* FUNC_7 (struct ath10k*) ;
 int VAR_1 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,int ) ;

int FUNC_11(struct ath10k *VAR_2)
{
 struct ath10k_pci *VAR_3 = FUNC_7(VAR_2);
 struct ath10k_ce *VAR_4 = FUNC_3(VAR_2);
 int VAR_5;

 FUNC_9(&VAR_4->ce_lock);
 FUNC_9(&VAR_3->ps_lock);
 FUNC_8(&VAR_3->ce_diag_mutex);

 FUNC_0(&VAR_3->dump_work, VAR_0);

 FUNC_10(&VAR_3->rx_post_retry, VAR_1, 0);

 if (FUNC_1(VAR_2) || FUNC_2(VAR_2))
  FUNC_6(VAR_2);

 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5) {
  FUNC_4(VAR_2, "failed to allocate copy engine pipes: %d\n",
      VAR_5);
  return VAR_5;
 }

 return 0;
}
