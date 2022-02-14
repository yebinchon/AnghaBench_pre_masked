
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nx_host_sds_ring {int napi; struct netxen_adapter* adapter; } ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int int_vec_bit; int isr_int_vec; int tgt_status_reg; int crb_int_state_reg; scalar_t__ portnum; TYPE_1__ ahw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nx_host_sds_ring*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,unsigned long*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 struct nx_host_sds_ring *VAR_4 = VAR_3;
 struct netxen_adapter *VAR_5 = VAR_4->adapter;
 u32 VAR_6 = 0;

 VAR_6 = FUNC_4(VAR_5->isr_int_vec);

 if (!(VAR_6 & VAR_5->int_vec_bit))
  return VAR_1;

 if (FUNC_1(VAR_5->ahw.revision_id)) {

  VAR_6 = FUNC_4(VAR_5->crb_int_state_reg);
  if (!FUNC_0(VAR_6))
   return VAR_1;

 } else {
  unsigned long VAR_7 = 0;

  VAR_7 = FUNC_4(VAR_5->crb_int_state_reg);


  if (!FUNC_5((7 + VAR_5->portnum), &VAR_7))
   return VAR_1;


  FUNC_6((VAR_7 & 0xffffffff), VAR_5->crb_int_state_reg);


  FUNC_3(VAR_4);
 }

 FUNC_6(0xffffffff, VAR_5->tgt_status_reg);

 FUNC_4(VAR_5->isr_int_vec);
 FUNC_4(VAR_5->isr_int_vec);

 FUNC_2(&VAR_4->napi);

 return VAR_0;
}
