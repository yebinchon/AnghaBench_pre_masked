
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct octeon_device {int priv_flags; } ;



__attribute__((used)) static inline u32 FUNC_0(struct octeon_device *VAR_0, u32 VAR_1)
{
 return !!(VAR_0->priv_flags & (0x1 << VAR_1));
}
