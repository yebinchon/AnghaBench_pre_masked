
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int s_clustersize_bits; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct super_block *VAR_0,
             unsigned int VAR_1)
{
 return VAR_1 >> (20 - FUNC_0(VAR_0)->s_clustersize_bits);
}
