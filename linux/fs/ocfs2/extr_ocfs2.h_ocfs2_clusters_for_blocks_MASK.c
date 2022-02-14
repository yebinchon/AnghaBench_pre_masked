
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int s_blocksize_bits; } ;
struct TYPE_2__ {int s_clustersize_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline u32 FUNC_1(struct super_block *VAR_0,
  u64 VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0)->s_clustersize_bits -
   VAR_0->s_blocksize_bits;

 VAR_1 += (1 << VAR_2) - 1;
 return (u32)(VAR_1 >> VAR_2);
}
