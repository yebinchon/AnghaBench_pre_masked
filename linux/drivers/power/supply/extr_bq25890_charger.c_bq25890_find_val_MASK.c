
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct bq25890_range {size_t step; scalar_t__ min; } ;
typedef enum bq25890_table_ids { ____Placeholder_bq25890_table_ids } bq25890_table_ids ;
struct TYPE_3__ {scalar_t__* tbl; } ;
struct TYPE_4__ {struct bq25890_range rt; TYPE_1__ lt; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(u8 VAR_2, enum bq25890_table_ids VAR_3)
{
 const struct bq25890_range *VAR_4;


 if (VAR_3 >= VAR_0)
  return VAR_1[VAR_3].lt.tbl[VAR_2];


 VAR_4 = &VAR_1[VAR_3].rt;

 return (VAR_4->min + VAR_2 * VAR_4->step);
}
