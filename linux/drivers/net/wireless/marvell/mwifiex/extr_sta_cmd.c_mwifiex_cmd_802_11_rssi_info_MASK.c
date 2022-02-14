
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mwifiex_private {scalar_t__ bcn_nf_avg; scalar_t__ bcn_rssi_avg; scalar_t__ bcn_nf_last; scalar_t__ bcn_rssi_last; scalar_t__ data_nf_avg; scalar_t__ data_rssi_avg; scalar_t__ data_nf_last; scalar_t__ data_rssi_last; scalar_t__ bcn_avg_factor; scalar_t__ data_avg_factor; } ;
struct TYPE_3__ {void* nbcn; void* ndata; void* action; } ;
struct TYPE_4__ {TYPE_1__ rssi_info; } ;
struct host_cmd_ds_command {TYPE_2__ params; void* size; void* command; } ;
struct host_cmd_ds_802_11_rssi_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct mwifiex_private *VAR_2,
        struct host_cmd_ds_command *VAR_3, u16 VAR_4)
{
 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(struct host_cmd_ds_802_11_rssi_info) +
    VAR_1);
 VAR_3->params.rssi_info.action = FUNC_0(VAR_4);
 VAR_3->params.rssi_info.ndata = FUNC_0(VAR_2->data_avg_factor);
 VAR_3->params.rssi_info.nbcn = FUNC_0(VAR_2->bcn_avg_factor);


 VAR_2->data_rssi_last = 0;
 VAR_2->data_nf_last = 0;
 VAR_2->data_rssi_avg = 0;
 VAR_2->data_nf_avg = 0;
 VAR_2->bcn_rssi_last = 0;
 VAR_2->bcn_nf_last = 0;
 VAR_2->bcn_rssi_avg = 0;
 VAR_2->bcn_nf_avg = 0;

 return 0;
}
