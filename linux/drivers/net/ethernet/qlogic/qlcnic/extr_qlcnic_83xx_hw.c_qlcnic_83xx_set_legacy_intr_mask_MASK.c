
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {scalar_t__ tgt_mask_reg; } ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct qlcnic_adapter *VAR_0)
{
 if (VAR_0->tgt_mask_reg)
  FUNC_0(1, VAR_0->tgt_mask_reg);
}
