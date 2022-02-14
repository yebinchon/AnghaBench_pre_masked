
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct jffs2_sb_info {struct jffs2_inodirty* wbuf_inodes; } ;
struct jffs2_inodirty {struct jffs2_inodirty* next; int ino; } ;


 int VAR_0 ;
 struct jffs2_inodirty VAR_1 ;
 int FUNC_0 (struct jffs2_sb_info*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct jffs2_sb_info*) ;
 scalar_t__ FUNC_3 (struct jffs2_sb_info*,int ) ;
 struct jffs2_inodirty* FUNC_4 (int,int ) ;

__attribute__((used)) static void FUNC_5(struct jffs2_sb_info *VAR_2, uint32_t VAR_3)
{
 struct jffs2_inodirty *VAR_4;


 FUNC_2(VAR_2);

 if (FUNC_3(VAR_2, VAR_3))
  return;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4) {
  FUNC_1(1, "No memory to allocate inodirty. Fallback to all considered dirty\n");
  FUNC_0(VAR_2);
  VAR_2->wbuf_inodes = &VAR_1;
  return;
 }
 VAR_4->ino = VAR_3;
 VAR_4->next = VAR_2->wbuf_inodes;
 VAR_2->wbuf_inodes = VAR_4;
 return;
}
