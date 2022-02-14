
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct be_tx_obj {int dummy; } ;
struct TYPE_2__ {int tx_sge_err; int tx_dma_err; int tx_internal_parity_err; int tx_qinq_err; int tx_spoof_check_err; int tx_tso_err; } ;
 TYPE_1__* FUNC_0 (struct be_tx_obj*) ;

__attribute__((used)) static inline void FUNC_1(struct be_tx_obj *VAR_0, u8 VAR_1)
{
 switch (VAR_1) {
 case 131:
  FUNC_0(VAR_0)->tx_tso_err++;
  break;
 case 133:
 case 132:
  FUNC_0(VAR_0)->tx_spoof_check_err++;
  break;
 case 129:
  FUNC_0(VAR_0)->tx_qinq_err++;
  break;
 case 130:
  FUNC_0(VAR_0)->tx_internal_parity_err++;
  break;
 case 134:
  FUNC_0(VAR_0)->tx_dma_err++;
  break;
 case 128:
  FUNC_0(VAR_0)->tx_sge_err++;
  break;
 }
}
