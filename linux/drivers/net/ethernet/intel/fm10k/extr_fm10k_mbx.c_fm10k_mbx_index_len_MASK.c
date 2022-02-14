
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fm10k_mbx_info {int mbmem_len; } ;



__attribute__((used)) static u16 FUNC_0(struct fm10k_mbx_info *VAR_0, u16 VAR_1, u16 VAR_2)
{
 u16 VAR_3 = VAR_2 - VAR_1;


 if (VAR_3 > VAR_2)
  VAR_3 -= 2;

 return VAR_3 & ((VAR_0->mbmem_len << 1) - 1);
}
