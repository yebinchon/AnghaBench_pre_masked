
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct isp_device {scalar_t__* mmio_base; } ;
typedef enum isp_mem_resources { ____Placeholder_isp_mem_resources } isp_mem_resources ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline
void FUNC_1(struct isp_device *VAR_0, u32 VAR_1,
      enum isp_mem_resources VAR_2, u32 VAR_3)
{
 FUNC_0(VAR_1, VAR_0->mmio_base[VAR_2] + VAR_3);
}
