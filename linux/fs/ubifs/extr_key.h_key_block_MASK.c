
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {unsigned int* u32; } ;
struct ubifs_info {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(const struct ubifs_info *VAR_1,
         const union ubifs_key *VAR_2)
{
 return VAR_2->u32[1] & VAR_0;
}
