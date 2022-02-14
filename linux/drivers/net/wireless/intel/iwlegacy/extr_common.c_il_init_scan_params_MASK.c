
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_2__ {int valid_tx_ant; } ;
struct il_priv {void** scan_tx_ant; TYPE_1__ hw_params; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (int ) ;

void
FUNC_1(struct il_priv *VAR_2)
{
 u8 VAR_3 = FUNC_0(VAR_2->hw_params.valid_tx_ant) - 1;
 if (!VAR_2->scan_tx_ant[VAR_1])
  VAR_2->scan_tx_ant[VAR_1] = VAR_3;
 if (!VAR_2->scan_tx_ant[VAR_0])
  VAR_2->scan_tx_ant[VAR_0] = VAR_3;
}
