
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int * u32; } ;
struct ubifs_info {int dummy; } ;
typedef int ino_t ;



__attribute__((used)) static inline ino_t FUNC_0(const struct ubifs_info *VAR_0, const void *VAR_1)
{
 const union ubifs_key *VAR_2 = VAR_1;

 return VAR_2->u32[0];
}
