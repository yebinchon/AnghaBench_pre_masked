
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct jffs2_sb_info {int erase_completion_lock; struct jffs2_eraseblock* gcblock; } ;
struct jffs2_raw_node_ref {int dummy; } ;
struct jffs2_node_frag {scalar_t__ ofs; scalar_t__ size; struct jffs2_full_dnode* node; } ;
struct jffs2_inode_info {int sem; TYPE_1__* inocache; struct jffs2_full_dirent* dents; int fragtree; struct jffs2_full_dnode* metadata; } ;
struct jffs2_full_dnode {scalar_t__ frags; struct jffs2_raw_node_ref* raw; } ;
struct jffs2_full_dirent {scalar_t__ ino; struct jffs2_raw_node_ref* raw; struct jffs2_full_dirent* next; } ;
struct jffs2_eraseblock {int dummy; } ;
struct TYPE_2__ {int ino; struct jffs2_raw_node_ref* nodes; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct jffs2_node_frag* FUNC_1 (int *) ;
 struct jffs2_node_frag* FUNC_2 (struct jffs2_node_frag*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (struct jffs2_sb_info*,int ) ;
 int FUNC_5 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_inode_info*,struct jffs2_full_dirent*) ;
 int FUNC_6 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_inode_info*,struct jffs2_full_dirent*) ;
 int FUNC_7 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_inode_info*,struct jffs2_full_dnode*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_inode_info*,struct jffs2_full_dnode*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct jffs2_sb_info*,struct jffs2_eraseblock*,struct jffs2_inode_info*,struct jffs2_full_dnode*) ;
 int FUNC_10 (struct jffs2_sb_info*,TYPE_1__*,struct jffs2_raw_node_ref*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,...) ;
 scalar_t__ FUNC_14 (struct jffs2_raw_node_ref*) ;
 scalar_t__ FUNC_15 (struct jffs2_raw_node_ref*) ;
 int FUNC_16 (struct jffs2_raw_node_ref*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static int FUNC_19(struct jffs2_sb_info *VAR_3, struct jffs2_eraseblock *VAR_4,
          struct jffs2_raw_node_ref *VAR_5, struct jffs2_inode_info *VAR_6)
{
 struct jffs2_node_frag *VAR_7;
 struct jffs2_full_dnode *VAR_8 = ((void*)0);
 struct jffs2_full_dirent *VAR_9;
 uint32_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0;

 FUNC_11(&VAR_6->sem);




 FUNC_17(&VAR_3->erase_completion_lock);

 if (VAR_3->gcblock != VAR_4) {
  FUNC_18(&VAR_3->erase_completion_lock);
  FUNC_3(1, "GC block is no longer gcblock. Restart\n");
  goto upnout;
 }
 if (FUNC_15(VAR_5)) {
  FUNC_18(&VAR_3->erase_completion_lock);
  FUNC_3(1, "node to be GC'd was obsoleted in the meantime.\n");

  goto upnout;
 }
 FUNC_18(&VAR_3->erase_completion_lock);


 if (VAR_6->metadata && VAR_6->metadata->raw == VAR_5) {
  VAR_8 = VAR_6->metadata;
  VAR_13 = FUNC_9(VAR_3, VAR_4, VAR_6, VAR_8);
  goto upnout;
 }


 for (VAR_7 = FUNC_1(&VAR_6->fragtree); VAR_7; VAR_7 = FUNC_2(VAR_7)) {
  if (VAR_7->node && VAR_7->node->raw == VAR_5) {
   VAR_8 = VAR_7->node;
   VAR_11 = VAR_7->ofs + VAR_7->size;
   if (!VAR_12++)
    VAR_10 = VAR_7->ofs;
   if (VAR_12 == VAR_7->node->frags)
    break;
  }
 }
 if (VAR_8) {
  if (FUNC_14(VAR_5) == VAR_2) {
   VAR_13 = FUNC_10(VAR_3, VAR_6->inocache, VAR_5);
   if (!VAR_13) {

    VAR_7->node->raw = VAR_6->inocache->nodes;
   }
   if (VAR_13 != -VAR_0)
    goto upnout;
  }

  if((VAR_10 >> VAR_1) < ((VAR_11-1) >> VAR_1)) {

   VAR_13 = FUNC_8(VAR_3, VAR_4, VAR_6, VAR_8, VAR_10, VAR_11);
  } else {

   VAR_13 = FUNC_7(VAR_3, VAR_4, VAR_6, VAR_8, VAR_10, VAR_11);
  }
  goto upnout;
 }


 for (VAR_9 = VAR_6->dents; VAR_9; VAR_9=VAR_9->next) {
  if (VAR_9->raw == VAR_5)
   break;
 }

 if (VAR_9 && VAR_9->ino) {
  VAR_13 = FUNC_6(VAR_3, VAR_4, VAR_6, VAR_9);
 } else if (VAR_9) {
  VAR_13 = FUNC_5(VAR_3, VAR_4, VAR_6, VAR_9);
 } else {
  FUNC_13("Raw node at 0x%08x wasn't in node lists for ino #%u\n",
   FUNC_16(VAR_5), VAR_6->inocache->ino);
  if (FUNC_15(VAR_5)) {
   FUNC_13("But it's obsolete so we don't mind too much\n");
  } else {
   FUNC_4(VAR_3, FUNC_16(VAR_5));
   FUNC_0();
  }
 }
 upnout:
 FUNC_12(&VAR_6->sem);

 return VAR_13;
}
