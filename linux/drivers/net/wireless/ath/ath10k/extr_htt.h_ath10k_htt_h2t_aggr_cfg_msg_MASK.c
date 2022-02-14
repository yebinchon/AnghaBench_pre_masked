
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath10k_htt {TYPE_1__* tx_ops; } ;
struct TYPE_2__ {int (* htt_h2t_aggr_cfg_msg ) (struct ath10k_htt*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_htt*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct ath10k_htt *VAR_1,
           u8 VAR_2,
           u8 VAR_3)

{
 if (!VAR_1->tx_ops->htt_h2t_aggr_cfg_msg)
  return -VAR_0;

 return VAR_1->tx_ops->htt_h2t_aggr_cfg_msg(VAR_1,
       VAR_2,
       VAR_3);
}
