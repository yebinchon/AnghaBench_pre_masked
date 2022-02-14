
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sym_hcb {int rv_ctest4; int rv_dmode; int rv_ctest5; } ;



__attribute__((used)) static inline void FUNC_0(struct sym_hcb *VAR_0, u_char VAR_1)
{
 VAR_0->rv_ctest4 &= ~0x80;
 VAR_0->rv_dmode &= ~(0x3 << 6);
 VAR_0->rv_ctest5 &= ~0x4;

 if (!VAR_1) {
  VAR_0->rv_ctest4 |= 0x80;
 }
 else {
  --VAR_1;
  VAR_0->rv_dmode |= ((VAR_1 & 0x3) << 6);
  VAR_0->rv_ctest5 |= (VAR_1 & 0x4);
 }
}
