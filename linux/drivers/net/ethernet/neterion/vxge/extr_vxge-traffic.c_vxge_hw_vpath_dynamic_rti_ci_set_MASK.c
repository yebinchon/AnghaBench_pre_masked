
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct __vxge_hw_ring {TYPE_1__* vp_reg; int tim_rti_cfg1_saved; } ;
struct TYPE_2__ {int * tim_cfg1_int_num; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,int *) ;

void FUNC_1(struct __vxge_hw_ring *VAR_2)
{
 u64 VAR_3 = VAR_2->tim_rti_cfg1_saved;

 VAR_3 |= VAR_0;
 VAR_2->tim_rti_cfg1_saved = VAR_3;
 FUNC_0(VAR_3, &VAR_2->vp_reg->tim_cfg1_int_num[VAR_1]);
}
