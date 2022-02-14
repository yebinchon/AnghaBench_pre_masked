
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_wmm_params_arg {int no_ack; int acm; int txop; int aifs; int cwmax; int cwmin; } ;
struct wmi_wmm_params {void* no_ack; void* acm; void* txop; void* aifs; void* cwmax; void* cwmin; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(struct wmi_wmm_params *VAR_0,
         const struct wmi_wmm_params_arg *VAR_1)
{
 VAR_0->cwmin = FUNC_0(VAR_1->cwmin);
 VAR_0->cwmax = FUNC_0(VAR_1->cwmax);
 VAR_0->aifs = FUNC_0(VAR_1->aifs);
 VAR_0->txop = FUNC_0(VAR_1->txop);
 VAR_0->acm = FUNC_0(VAR_1->acm);
 VAR_0->no_ack = FUNC_0(VAR_1->no_ack);
}
