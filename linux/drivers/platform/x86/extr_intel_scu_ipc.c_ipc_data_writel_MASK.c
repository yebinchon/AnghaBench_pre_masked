
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_scu_ipc_dev {scalar_t__ ipc_base; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct intel_scu_ipc_dev *VAR_0, u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_1, VAR_0->ipc_base + 0x80 + VAR_2);
}
