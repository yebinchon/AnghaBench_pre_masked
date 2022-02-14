
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_hardware {TYPE_1__* band; int * di; int now; int up; } ;
struct brcms_c_info {struct brcms_hardware* hw; } ;
struct TYPE_2__ {int pi; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct brcms_hardware*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct brcms_c_info *VAR_1)
{
 struct brcms_hardware *VAR_2 = VAR_1->hw;

 if (!VAR_2->up)
  return;


 VAR_2->now++;


 FUNC_0(VAR_2);


 FUNC_1(VAR_1->hw->di[VAR_0]);

 FUNC_2(VAR_2->band->pi);
}
