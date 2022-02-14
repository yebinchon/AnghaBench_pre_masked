
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ath10k_snoc_pipe {struct ath10k_ce_pipe* ce_hdl; } ;
struct ath10k_snoc {struct ath10k_snoc_pipe* pipe_info; } ;
struct ath10k_hif_sg_item {int transfer_id; int len; int paddr; int transfer_context; } ;
struct ath10k_ce_pipe {int dummy; } ;
struct ath10k_ce {int ce_lock; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_ce_pipe*) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k_ce_pipe*,int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int *,int ,int) ;
 struct ath10k_snoc* FUNC_4 (struct ath10k*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_2, u8 VAR_3,
     struct ath10k_hif_sg_item *VAR_4, int VAR_5)
{
 struct ath10k_snoc *VAR_6 = FUNC_4(VAR_2);
 struct ath10k_ce *VAR_7 = FUNC_1(VAR_2);
 struct ath10k_snoc_pipe *VAR_8;
 struct ath10k_ce_pipe *VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_8 = &VAR_6->pipe_info[VAR_3];
 VAR_9 = VAR_8->ce_hdl;
 FUNC_5(&VAR_7->ce_lock);

 for (VAR_11 = 0; VAR_11 < VAR_5 - 1; VAR_11++) {
  FUNC_3(VAR_2, VAR_0,
      "snoc tx item %d paddr %pad len %d n_items %d\n",
      VAR_11, &VAR_4[VAR_11].paddr, VAR_4[VAR_11].len, VAR_5);

  VAR_10 = FUNC_2(VAR_9,
         VAR_4[VAR_11].transfer_context,
         VAR_4[VAR_11].paddr,
         VAR_4[VAR_11].len,
         VAR_4[VAR_11].transfer_id,
         VAR_1);
  if (VAR_10)
   goto err;
 }

 FUNC_3(VAR_2, VAR_0,
     "snoc tx item %d paddr %pad len %d n_items %d\n",
     VAR_11, &VAR_4[VAR_11].paddr, VAR_4[VAR_11].len, VAR_5);

 VAR_10 = FUNC_2(VAR_9,
        VAR_4[VAR_11].transfer_context,
        VAR_4[VAR_11].paddr,
        VAR_4[VAR_11].len,
        VAR_4[VAR_11].transfer_id,
        0);
 if (VAR_10)
  goto err;

 FUNC_6(&VAR_7->ce_lock);

 return 0;

err:
 for (; VAR_11 > 0; VAR_11--)
  FUNC_0(VAR_9);

 FUNC_6(&VAR_7->ce_lock);
 return VAR_10;
}
