
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {unsigned int s_clustersize_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_1(struct super_block *VAR_1)
{
 unsigned int VAR_2 = FUNC_0(VAR_1)->s_clustersize_bits;
 unsigned int VAR_3 = 1;

 if (VAR_0 < VAR_2)
  VAR_3 = 1 << (VAR_2 - VAR_0);

 return VAR_3;
}
