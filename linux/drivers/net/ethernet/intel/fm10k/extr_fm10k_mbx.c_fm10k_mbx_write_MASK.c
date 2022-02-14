
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fm10k_mbx_info {scalar_t__ mbx_lock; scalar_t__ mbx_hdr; int mbx_reg; int mbmem_reg; } ;
struct fm10k_hw {int dummy; } ;


 int FUNC_0 (struct fm10k_hw*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fm10k_hw *VAR_0, struct fm10k_mbx_info *VAR_1)
{
 u32 VAR_2 = VAR_1->mbmem_reg;


 FUNC_0(VAR_0, VAR_2, VAR_1->mbx_hdr);


 if (VAR_1->mbx_lock)
  FUNC_0(VAR_0, VAR_1->mbx_reg, VAR_1->mbx_lock);


 VAR_1->mbx_hdr = 0;
 VAR_1->mbx_lock = 0;
}
