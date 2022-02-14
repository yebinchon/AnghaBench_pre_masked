
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_4__ {TYPE_1__* raw_super; } ;
struct TYPE_3__ {int * qf_ino; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct super_block*) ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct super_block *VAR_1, int VAR_2)
{
 if (VAR_2 < VAR_0)
  return FUNC_1(FUNC_0(VAR_1)->raw_super->qf_ino[VAR_2]);
 return 0;
}
