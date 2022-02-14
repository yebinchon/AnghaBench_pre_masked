
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int func_level; } ;
struct qeth_card {TYPE_1__ info; } ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct qeth_card *VAR_2)
{
 switch (VAR_2->info.type) {
 case 130:
  VAR_2->info.func_level = VAR_0;
  break;
 case 129:
 case 128:
  VAR_2->info.func_level = VAR_1;
  break;
 default:
  break;
 }
}
