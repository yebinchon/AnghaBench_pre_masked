
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct jffs2_sb_info {int dummy; } ;
struct jffs2_inode_info {int sem; TYPE_1__* inocache; struct jffs2_full_dirent* dents; int fragtree; TYPE_3__* metadata; } ;
struct jffs2_full_dirent {struct jffs2_full_dirent* next; } ;
struct TYPE_6__ {int raw; } ;
struct TYPE_5__ {scalar_t__ state; void* nodes; int pino_nlink; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct jffs2_sb_info*,TYPE_1__*) ;
 int FUNC_1 (struct jffs2_full_dirent*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,struct jffs2_sb_info*) ;
 int FUNC_4 (struct jffs2_sb_info*,int ) ;
 int FUNC_5 (struct jffs2_sb_info*,TYPE_1__*,int ) ;
 int FUNC_6 (struct jffs2_sb_info*,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct jffs2_sb_info *VAR_3, struct jffs2_inode_info *VAR_4)
{
 struct jffs2_full_dirent *VAR_5, *VAR_6;
 int VAR_7;

 FUNC_6(VAR_3, VAR_4->inocache);
 FUNC_7(&VAR_4->sem);
 VAR_7 = VAR_4->inocache && !VAR_4->inocache->pino_nlink;

 if (VAR_4->inocache && VAR_4->inocache->state != VAR_1)
  FUNC_5(VAR_3, VAR_4->inocache, VAR_2);

 if (VAR_4->metadata) {
  if (VAR_7)
   FUNC_4(VAR_3, VAR_4->metadata->raw);
  FUNC_2(VAR_4->metadata);
 }

 FUNC_3(&VAR_4->fragtree, VAR_7?VAR_3:((void*)0));

 VAR_6 = VAR_4->dents;
 while(VAR_6) {
  VAR_5 = VAR_6;
  VAR_6 = VAR_5->next;
  FUNC_1(VAR_5);
 }

 if (VAR_4->inocache && VAR_4->inocache->state != VAR_1) {
  FUNC_5(VAR_3, VAR_4->inocache, VAR_0);
  if (VAR_4->inocache->nodes == (void *)VAR_4->inocache)
   FUNC_0(VAR_3, VAR_4->inocache);
 }

 FUNC_8(&VAR_4->sem);
}
