
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct perm_bits {void** write; void** virt; } ;



__attribute__((used)) static inline void FUNC_0(struct perm_bits *VAR_0, int VAR_1, u8 VAR_2, u8 VAR_3)
{
 VAR_0->virt[VAR_1] = VAR_2;
 VAR_0->write[VAR_1] = VAR_3;
}
