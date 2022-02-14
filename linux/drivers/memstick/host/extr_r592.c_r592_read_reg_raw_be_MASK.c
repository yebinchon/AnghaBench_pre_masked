
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r592_device {scalar_t__ mmio; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ) ;

__attribute__((used)) static inline u32 FUNC_3(struct r592_device *VAR_0, int VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0->mmio + VAR_1);
 FUNC_2("reg #%02d == 0x%08x", VAR_1, VAR_2);
 return FUNC_1(VAR_2);
}
