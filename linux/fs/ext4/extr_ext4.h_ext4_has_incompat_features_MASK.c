
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_es; } ;
struct TYPE_3__ {scalar_t__ s_feature_incompat; } ;


 TYPE_2__* FUNC_0 (struct super_block*) ;

__attribute__((used)) static inline bool FUNC_1(struct super_block *VAR_0)
{
 return (FUNC_0(VAR_0)->s_es->s_feature_incompat != 0);
}
