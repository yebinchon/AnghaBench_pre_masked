
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int * u32; void** j32; } ;
struct ubifs_info {int dummy; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(const struct ubifs_info *VAR_0,
     const union ubifs_key *VAR_1, void *VAR_2)
{
 union ubifs_key *VAR_3 = VAR_2;

 VAR_3->j32[0] = FUNC_0(VAR_1->u32[0]);
 VAR_3->j32[1] = FUNC_0(VAR_1->u32[1]);
}
