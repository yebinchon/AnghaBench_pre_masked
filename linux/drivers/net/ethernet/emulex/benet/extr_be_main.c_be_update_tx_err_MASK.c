
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct be_tx_obj {int dummy; } ;
struct TYPE_2__ {int tx_spoof_check_err; int tx_dma_err; int tx_hdr_parse_err; } ;





 TYPE_1__* FUNC_0 (struct be_tx_obj*) ;

__attribute__((used)) static inline void FUNC_1(struct be_tx_obj *VAR_0, u8 VAR_1)
{
 switch (VAR_1) {
 case 129:
  FUNC_0(VAR_0)->tx_hdr_parse_err++;
  break;
 case 128:
  FUNC_0(VAR_0)->tx_dma_err++;
  break;
 case 130:
  FUNC_0(VAR_0)->tx_spoof_check_err++;
  break;
 }
}
