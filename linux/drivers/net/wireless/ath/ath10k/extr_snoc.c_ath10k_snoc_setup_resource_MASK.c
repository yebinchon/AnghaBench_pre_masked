
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_snoc_pipe {int pipe_num; int buf_sz; struct ath10k* hif_ce_state; int * ce_hdl; } ;
struct ath10k_snoc {struct ath10k_snoc_pipe* pipe_info; int rx_post_retry; } ;
struct ath10k_ce {int * ce_states; int ce_lock; } ;
struct ath10k {int dummy; } ;
struct TYPE_3__ {int src_sz_max; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int,TYPE_1__*) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int,int) ;
 int FUNC_3 (struct ath10k*) ;
 struct ath10k_snoc* FUNC_4 (struct ath10k*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_3)
{
 struct ath10k_snoc *VAR_4 = FUNC_4(VAR_3);
 struct ath10k_ce *VAR_5 = FUNC_1(VAR_3);
 struct ath10k_snoc_pipe *VAR_6;
 int VAR_7, VAR_8;

 FUNC_6(&VAR_4->rx_post_retry, VAR_1, 0);
 FUNC_5(&VAR_5->ce_lock);
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = &VAR_4->pipe_info[VAR_7];
  VAR_6->ce_hdl = &VAR_5->ce_states[VAR_7];
  VAR_6->pipe_num = VAR_7;
  VAR_6->hif_ce_state = VAR_3;

  VAR_8 = FUNC_0(VAR_3, VAR_7, &VAR_2[VAR_7]);
  if (VAR_8) {
   FUNC_2(VAR_3, "failed to allocate copy engine pipe %d: %d\n",
       VAR_7, VAR_8);
   return VAR_8;
  }

  VAR_6->buf_sz = VAR_2[VAR_7].src_sz_max;
 }
 FUNC_3(VAR_3);

 return 0;
}
