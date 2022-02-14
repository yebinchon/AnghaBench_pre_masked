
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jffs2_full_dirent {struct jffs2_full_dirent* next; } ;


 int FUNC_0 (struct jffs2_full_dirent*) ;

__attribute__((used)) static void FUNC_1(struct jffs2_full_dirent *VAR_0)
{
 struct jffs2_full_dirent *VAR_1;

 while (VAR_0) {
  VAR_1 = VAR_0->next;
  FUNC_0(VAR_0);
  VAR_0 = VAR_1;
 }
}
