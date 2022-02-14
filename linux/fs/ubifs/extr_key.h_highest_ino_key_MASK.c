
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int* u32; } ;
struct ubifs_info {int dummy; } ;
typedef int ino_t ;



__attribute__((used)) static inline void FUNC_0(const struct ubifs_info *VAR_0,
    union ubifs_key *VAR_1, ino_t VAR_2)
{
 VAR_1->u32[0] = VAR_2;
 VAR_1->u32[1] = 0xffffffff;
}
