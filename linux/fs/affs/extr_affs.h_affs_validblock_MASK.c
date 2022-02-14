
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {int s_reserved; int s_partition_size; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline bool FUNC_1(struct super_block *VAR_0, int VAR_1)
{
 return(VAR_1 >= FUNC_0(VAR_0)->s_reserved &&
        VAR_1 < FUNC_0(VAR_0)->s_partition_size);
}
