
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ubifs_key {int* u32; } ;
typedef int uint32_t ;
struct ubifs_info {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint32_t FUNC_0(const struct ubifs_info *VAR_1,
    const union ubifs_key *VAR_2)
{
 return VAR_2->u32[1] & VAR_0;
}
