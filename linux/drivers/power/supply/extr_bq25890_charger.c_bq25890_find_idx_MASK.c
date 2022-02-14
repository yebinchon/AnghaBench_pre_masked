
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct bq25890_range {int max; int min; int step; } ;
typedef enum bq25890_table_ids { ____Placeholder_bq25890_table_ids } bq25890_table_ids ;
struct TYPE_3__ {size_t* tbl; size_t size; } ;
struct TYPE_4__ {struct bq25890_range rt; TYPE_1__ lt; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static u8 FUNC_0(u32 VAR_2, enum bq25890_table_ids VAR_3)
{
 u8 VAR_4;

 if (VAR_3 >= VAR_0) {
  const u32 *VAR_5 = VAR_1[VAR_3].lt.tbl;
  u32 VAR_6 = VAR_1[VAR_3].lt.size;

  for (VAR_4 = 1; VAR_4 < VAR_6 && VAR_5[VAR_4] <= VAR_2; VAR_4++)
   ;
 } else {
  const struct bq25890_range *VAR_7 = &VAR_1[VAR_3].rt;
  u8 VAR_8;

  VAR_8 = (VAR_7->max - VAR_7->min) / VAR_7->step + 1;

  for (VAR_4 = 1;
       VAR_4 < VAR_8 && (VAR_4 * VAR_7->step + VAR_7->min <= VAR_2);
       VAR_4++)
   ;
 }

 return VAR_4 - 1;
}
