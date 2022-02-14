
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ice_res_tracker {scalar_t__ end; scalar_t__* list; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(struct ice_res_tracker *VAR_2, u16 VAR_3, u16 VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 if (!VAR_2 || VAR_3 >= VAR_2->end)
  return -VAR_0;

 VAR_4 |= VAR_1;
 for (VAR_6 = VAR_3; VAR_6 < VAR_2->end && VAR_2->list[VAR_6] == VAR_4; VAR_6++) {
  VAR_2->list[VAR_6] = 0;
  VAR_5++;
 }

 return VAR_5;
}
