
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {TYPE_2__* array; } ;
struct TYPE_4__ {int * array; } ;
struct sci_unsolicited_frame_control {int get; TYPE_3__ buffers; TYPE_1__ address_table; } ;
struct TYPE_5__ {scalar_t__ state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

bool FUNC_4(struct sci_unsolicited_frame_control *VAR_4,
       u32 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = VAR_4->get & (VAR_1 - 1);
 VAR_7 = VAR_4->get & VAR_1;






 while (FUNC_2(VAR_4->address_table.array[VAR_6]) == 0 &&
        FUNC_3(VAR_4->address_table.array[VAR_6]) == 0 &&
        VAR_6 < VAR_1)
  VAR_6++;





 FUNC_0(VAR_6 >= VAR_1);
 if (VAR_5 >= VAR_1)
  return 0;

 VAR_4->buffers.array[VAR_5].state = VAR_3;

 if (VAR_6 != VAR_5) {




  return 0;
 }





 while (VAR_4->buffers.array[VAR_6].state == VAR_3) {
  VAR_4->buffers.array[VAR_6].state = VAR_2;

  if (VAR_6+1 == VAR_1-1) {
   VAR_7 ^= VAR_1;
   VAR_6 = 0;
  } else
   VAR_6++;
 }

 VAR_4->get = FUNC_1(VAR_0) | VAR_7 | VAR_6;

 return 1;
}
