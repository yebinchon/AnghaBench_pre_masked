
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct iwl_rx_transfer_desc {int dummy; } ;
typedef int __le64 ;
typedef int __le32 ;
struct TYPE_2__ {scalar_t__ mq_rx_supported; } ;



__attribute__((used)) static int FUNC_0(struct iwl_trans *VAR_0, bool VAR_1)
{
 struct iwl_rx_transfer_desc *VAR_2;

 if (VAR_1)
  return sizeof(*VAR_2);
 else
  return VAR_0->trans_cfg->mq_rx_supported ? sizeof(__le64) :
   sizeof(__le32);
}
