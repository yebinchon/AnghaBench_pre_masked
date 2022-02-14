
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partition {int current_block; int total_blocks; int reserved_block; TYPE_1__* blocks; } ;
struct TYPE_2__ {scalar_t__ state; scalar_t__ free_sectors; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct partition*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct partition *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = VAR_2->current_block == -1 ?
   VAR_1 % VAR_2->total_blocks : VAR_2->current_block;
 VAR_4 = VAR_3;

 do {
  if (VAR_2->blocks[VAR_3].free_sectors &&
    VAR_3 != VAR_2->reserved_block)
   return VAR_3;

  if (VAR_2->blocks[VAR_3].state == VAR_0)
   FUNC_0(VAR_2, VAR_3);

  if (++VAR_3 >= VAR_2->total_blocks)
   VAR_3 = 0;

 } while (VAR_3 != VAR_4);

 return -1;
}
