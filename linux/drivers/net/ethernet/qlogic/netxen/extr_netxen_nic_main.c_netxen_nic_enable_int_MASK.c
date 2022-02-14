
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_host_sds_ring {int crb_intr_mask; struct netxen_adapter* adapter; } ;
struct netxen_adapter {int tgt_mask_reg; } ;


 int FUNC_0 (struct netxen_adapter*) ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct nx_host_sds_ring *VAR_0)
{
 struct netxen_adapter *VAR_1 = VAR_0->adapter;

 FUNC_1(VAR_1, VAR_0->crb_intr_mask, 0x1);

 if (!FUNC_0(VAR_1))
  FUNC_1(VAR_1, VAR_1->tgt_mask_reg, 0xfbff);
}
