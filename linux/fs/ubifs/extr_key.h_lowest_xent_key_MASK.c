
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int* u32; } ;
struct ubifs_info {int dummy; } ;
typedef int ino_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(const struct ubifs_info *VAR_2,
       union ubifs_key *VAR_3, ino_t VAR_4)
{
 VAR_3->u32[0] = VAR_4;
 VAR_3->u32[1] = VAR_1 << VAR_0;
}
