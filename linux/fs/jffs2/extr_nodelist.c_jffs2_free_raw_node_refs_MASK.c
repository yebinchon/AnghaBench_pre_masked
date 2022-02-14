
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_sb_info {int nr_blocks; TYPE_1__* blocks; } ;
struct jffs2_raw_node_ref {scalar_t__ flash_offset; struct jffs2_raw_node_ref* next_in_ino; } ;
struct TYPE_2__ {int * last_node; struct jffs2_raw_node_ref* first_node; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct jffs2_raw_node_ref*) ;

void FUNC_1(struct jffs2_sb_info *VAR_2)
{
 int VAR_3;
 struct jffs2_raw_node_ref *VAR_4, *VAR_5;

 for (VAR_3=0; VAR_3<VAR_2->nr_blocks; VAR_3++) {
  VAR_4 = VAR_2->blocks[VAR_3].first_node;
  while (VAR_4) {
   if (VAR_4[VAR_0].flash_offset == VAR_1)
    VAR_5 = VAR_4[VAR_0].next_in_ino;
   else
    VAR_5 = ((void*)0);

   FUNC_0(VAR_4);
   VAR_4 = VAR_5;
  }
  VAR_2->blocks[VAR_3].first_node = VAR_2->blocks[VAR_3].last_node = ((void*)0);
 }
}
