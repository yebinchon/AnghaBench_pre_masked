
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath10k_pci_pipe {int pipe_num; size_t buf_sz; int * ce_hdl; struct ath10k* hif_ce_state; } ;
struct ath10k_pci {int * ce_diag; struct ath10k_pci_pipe* pipe_info; } ;
struct ath10k_ce {int * ce_states; } ;
struct ath10k {int dummy; } ;
struct TYPE_3__ {scalar_t__ src_sz_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int,TYPE_1__*) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int,int) ;
 struct ath10k_pci* FUNC_3 (struct ath10k*) ;
 TYPE_1__* VAR_2 ;

int FUNC_4(struct ath10k *VAR_3)
{
 struct ath10k_pci *VAR_4 = FUNC_3(VAR_3);
 struct ath10k_pci_pipe *VAR_5;
 struct ath10k_ce *VAR_6 = FUNC_1(VAR_3);
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = &VAR_4->pipe_info[VAR_7];
  VAR_5->ce_hdl = &VAR_6->ce_states[VAR_7];
  VAR_5->pipe_num = VAR_7;
  VAR_5->hif_ce_state = VAR_3;

  VAR_8 = FUNC_0(VAR_3, VAR_7, &VAR_2[VAR_7]);
  if (VAR_8) {
   FUNC_2(VAR_3, "failed to allocate copy engine pipe %d: %d\n",
       VAR_7, VAR_8);
   return VAR_8;
  }


  if (VAR_7 == VAR_1) {
   VAR_4->ce_diag = VAR_5->ce_hdl;
   continue;
  }

  VAR_5->buf_sz = (size_t)(VAR_2[VAR_7].src_sz_max);
 }

 return 0;
}
