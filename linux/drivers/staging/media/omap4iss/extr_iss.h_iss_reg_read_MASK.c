
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iss_device {scalar_t__* regs; } ;
typedef enum iss_mem_resources { ____Placeholder_iss_mem_resources } iss_mem_resources ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline
u32 FUNC_1(struct iss_device *VAR_0, enum iss_mem_resources VAR_1,
   u32 VAR_2)
{
 return FUNC_0(VAR_0->regs[VAR_1] + VAR_2);
}
