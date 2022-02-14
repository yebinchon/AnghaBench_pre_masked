
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rc_dev {struct ir_raw_event_ctrl* raw; } ;
struct ir_raw_event_ctrl {int bpf_sample; scalar_t__ progs; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int ) ;

void FUNC_1(struct rc_dev *VAR_1, u32 VAR_2)
{
 struct ir_raw_event_ctrl *VAR_3 = VAR_1->raw;

 VAR_3->bpf_sample = VAR_2;

 if (VAR_3->progs)
  FUNC_0(VAR_3->progs, &VAR_3->bpf_sample, VAR_0);
}
