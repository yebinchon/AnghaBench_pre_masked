
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int limit_entry; } ;
typedef TYPE_2__ nsp32_target ;
struct TYPE_8__ {int syncnum; TYPE_1__* synct; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_6__ {unsigned char start_period; unsigned char end_period; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(nsp32_hw_data *VAR_1,
         nsp32_target *VAR_2,
         unsigned char VAR_3)
{
 int VAR_4;

 if (VAR_2->limit_entry >= VAR_1->syncnum) {
  FUNC_0(VAR_0, "limit_entry exceeds syncnum!");
  VAR_2->limit_entry = 0;
 }

 for (VAR_4 = VAR_2->limit_entry; VAR_4 < VAR_1->syncnum; VAR_4++) {
  if (VAR_3 >= VAR_1->synct[VAR_4].start_period &&
      VAR_3 <= VAR_1->synct[VAR_4].end_period) {
    break;
  }
 }





 if (VAR_4 == VAR_1->syncnum) {
  VAR_4 = -1;
 }

 return VAR_4;
}
