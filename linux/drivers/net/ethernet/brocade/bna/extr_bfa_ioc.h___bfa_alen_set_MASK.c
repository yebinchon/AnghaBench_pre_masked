
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct bfi_alen {int al_addr; int al_len; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline void
FUNC_2(struct bfi_alen *VAR_0, u32 VAR_1, u64 VAR_2)
{
 VAR_0->al_len = FUNC_1(VAR_1);
 FUNC_0(VAR_0->al_addr, VAR_2);
}
