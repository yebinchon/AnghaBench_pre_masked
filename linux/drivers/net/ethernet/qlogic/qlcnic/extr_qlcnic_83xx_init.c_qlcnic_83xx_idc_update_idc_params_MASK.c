
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ delay_reset; scalar_t__ collect_dump; scalar_t__ err_code; int delay; scalar_t__ quiesce_req; int status; } ;
struct qlcnic_hardware_context {TYPE_1__ idc; scalar_t__ reset_context; } ;
struct qlcnic_adapter {int state; scalar_t__ tx_timeo_cnt; struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct qlcnic_adapter*,int ,int) ;
 int FUNC_2 (struct qlcnic_adapter*,int,int) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct qlcnic_adapter *VAR_3)
{
 struct qlcnic_hardware_context *VAR_4 = VAR_3->ahw;

 FUNC_2(VAR_3, 1, 1);
 FUNC_1(VAR_3, 0, 1);
 FUNC_3(VAR_1, &VAR_3->ahw->idc.status);

 VAR_4->idc.quiesce_req = 0;
 VAR_4->idc.delay = VAR_0;
 VAR_4->idc.err_code = 0;
 VAR_4->idc.collect_dump = 0;
 VAR_4->reset_context = 0;
 VAR_3->tx_timeo_cnt = 0;
 VAR_4->idc.delay_reset = 0;

 FUNC_0(VAR_2, &VAR_3->state);
}
