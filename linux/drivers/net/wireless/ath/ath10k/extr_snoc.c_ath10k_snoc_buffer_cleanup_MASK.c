
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_snoc_pipe {int dummy; } ;
struct ath10k_snoc {struct ath10k_snoc_pipe* pipe_info; int rx_post_retry; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct ath10k_snoc* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k_snoc_pipe*) ;
 int FUNC_2 (struct ath10k_snoc_pipe*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ath10k *VAR_1)
{
 struct ath10k_snoc *VAR_2 = FUNC_0(VAR_1);
 struct ath10k_snoc_pipe *VAR_3;
 int VAR_4;

 FUNC_3(&VAR_2->rx_post_retry);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3 = &VAR_2->pipe_info[VAR_4];
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }
}
