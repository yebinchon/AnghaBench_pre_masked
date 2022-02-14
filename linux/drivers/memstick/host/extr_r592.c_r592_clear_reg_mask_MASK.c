
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r592_device {scalar_t__ mmio; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct r592_device *VAR_0,
      int VAR_1, u32 VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_0->mmio + VAR_1);
 FUNC_0("reg #%02d &= 0x%08x (old = 0x%08x, mask = 0x%08x)",
      VAR_1, ~VAR_2, VAR_3, VAR_2);
 FUNC_2(VAR_3 & ~VAR_2, VAR_0->mmio + VAR_1);
}
