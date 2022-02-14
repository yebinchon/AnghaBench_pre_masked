
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct octeon_device {int rev_id; } ;



__attribute__((used)) static inline u16 FUNC_0(struct octeon_device *VAR_0)
{
 u16 VAR_1 = (VAR_0->rev_id & 0xC) >> 2;

 return (VAR_1 == 0) ? 1 : VAR_1;
}
