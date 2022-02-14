
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mwifiex_private {int tx_htinfo; int tx_rate; int data_rate; int is_data_rate_auto; } ;
struct TYPE_3__ {int ht_info; int tx_rate; } ;
struct TYPE_4__ {TYPE_1__ tx_rate; } ;
struct host_cmd_ds_command {TYPE_2__ params; } ;


 int FUNC_0 (struct mwifiex_private*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_0,
         struct host_cmd_ds_command *VAR_1)
{
 VAR_0->tx_rate = VAR_1->params.tx_rate.tx_rate;
 VAR_0->tx_htinfo = VAR_1->params.tx_rate.ht_info;
 if (!VAR_0->is_data_rate_auto)
  VAR_0->data_rate =
   FUNC_0(VAR_0, VAR_0->tx_rate,
         VAR_0->tx_htinfo);

 return 0;
}
