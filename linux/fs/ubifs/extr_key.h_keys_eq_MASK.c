
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {scalar_t__* u32; } ;
struct ubifs_info {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(const struct ubifs_info *VAR_0,
     const union ubifs_key *VAR_1,
     const union ubifs_key *VAR_2)
{
 if (VAR_1->u32[0] != VAR_2->u32[0])
  return 0;
 if (VAR_1->u32[1] != VAR_2->u32[1])
  return 0;
 return 1;
}
