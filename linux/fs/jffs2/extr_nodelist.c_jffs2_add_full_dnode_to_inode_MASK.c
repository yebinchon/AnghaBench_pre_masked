
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jffs2_sb_info {int dummy; } ;
struct jffs2_node_frag {int ofs; int size; TYPE_1__* node; } ;
struct jffs2_inode_info {int fragtree; } ;
struct jffs2_full_dnode {int raw; scalar_t__ size; scalar_t__ ofs; } ;
struct TYPE_2__ {int frags; int raw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__,int ,struct jffs2_node_frag*) ;
 struct jffs2_node_frag* FUNC_1 (struct jffs2_node_frag*) ;
 struct jffs2_node_frag* FUNC_2 (struct jffs2_node_frag*) ;
 int FUNC_3 (struct jffs2_sb_info*,int *,struct jffs2_node_frag*) ;
 int FUNC_4 (struct jffs2_inode_info*) ;
 int FUNC_5 (int ) ;
 struct jffs2_node_frag* FUNC_6 (struct jffs2_full_dnode*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct jffs2_sb_info *VAR_2, struct jffs2_inode_info *VAR_3, struct jffs2_full_dnode *VAR_4)
{
 int VAR_5;
 struct jffs2_node_frag *VAR_6;

 if (FUNC_8(!VAR_4->size))
  return 0;

 VAR_6 = FUNC_6(VAR_4, VAR_4->ofs, VAR_4->size);
 if (FUNC_8(!VAR_6))
  return -VAR_0;
 VAR_6->node->frags = 1;

 FUNC_0("adding node %#04x-%#04x @0x%08x on flash, newfrag *%p\n",
    VAR_4->ofs, VAR_4->ofs+VAR_4->size, FUNC_7(VAR_4->raw), VAR_6);

 VAR_5 = FUNC_3(VAR_2, &VAR_3->fragtree, VAR_6);
 if (FUNC_8(VAR_5))
  return VAR_5;



 if (VAR_6->ofs & (VAR_1-1)) {
  struct jffs2_node_frag *VAR_7 = FUNC_2(VAR_6);

  FUNC_5(VAR_4->raw);

  if (VAR_7->node)
   FUNC_5(VAR_7->node->raw);
 }

 if ((VAR_6->ofs+VAR_6->size) & (VAR_1-1)) {
  struct jffs2_node_frag *VAR_8 = FUNC_1(VAR_6);

  if (VAR_8) {
   FUNC_5(VAR_4->raw);
   if (VAR_8->node)
    FUNC_5(VAR_8->node->raw);
  }
 }
 FUNC_4(VAR_3);

 return 0;
}
