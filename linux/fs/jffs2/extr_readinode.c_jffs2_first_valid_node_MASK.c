
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_raw_node_ref {struct jffs2_raw_node_ref* next_in_ino; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct jffs2_raw_node_ref*) ;
 int FUNC_2 (struct jffs2_raw_node_ref*) ;

__attribute__((used)) static struct jffs2_raw_node_ref *FUNC_3(struct jffs2_raw_node_ref *VAR_0)
{
 while (VAR_0 && VAR_0->next_in_ino) {
  if (!FUNC_1(VAR_0))
   return VAR_0;
  FUNC_0("node at 0x%08x is obsoleted. Ignoring.\n", FUNC_2(VAR_0));
  VAR_0 = VAR_0->next_in_ino;
 }
 return ((void*)0);
}
