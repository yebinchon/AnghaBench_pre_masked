
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_sb_info {int dummy; } ;
struct jffs2_raw_node_ref {scalar_t__ flash_offset; struct jffs2_raw_node_ref* next_in_ino; } ;
struct jffs2_eraseblock {int * last_node; struct jffs2_raw_node_ref* first_node; int offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (struct jffs2_raw_node_ref*) ;
 int FUNC_2 (struct jffs2_sb_info*,struct jffs2_raw_node_ref*,struct jffs2_eraseblock*) ;

void FUNC_3(struct jffs2_sb_info *VAR_2, struct jffs2_eraseblock *VAR_3)
{
 struct jffs2_raw_node_ref *VAR_4, *VAR_5;
 FUNC_0(1, "Freeing all node refs for eraseblock offset 0x%08x\n",
    VAR_3->offset);

 VAR_4 = VAR_5 = VAR_3->first_node;

 while (VAR_5) {
  if (VAR_5->flash_offset == VAR_1) {
   VAR_5 = VAR_5->next_in_ino;
   FUNC_1(VAR_4);
   VAR_4 = VAR_5;
   continue;
  }
  if (VAR_5->flash_offset != VAR_0 && VAR_5->next_in_ino)
   FUNC_2(VAR_2, VAR_5, VAR_3);


  VAR_5++;
 }
 VAR_3->first_node = VAR_3->last_node = ((void*)0);
}
