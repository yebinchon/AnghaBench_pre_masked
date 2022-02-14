
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perm_bits {int * write; int * virt; } ;
typedef int __le32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct perm_bits *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3)
{
 *(__le32 *)(&VAR_0->virt[VAR_1]) = FUNC_0(VAR_2);
 *(__le32 *)(&VAR_0->write[VAR_1]) = FUNC_0(VAR_3);
}
