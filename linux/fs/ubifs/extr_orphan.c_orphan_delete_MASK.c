
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_orphan {int del; int inum; struct ubifs_orphan* dnext; scalar_t__ cmt; } ;
struct ubifs_info {struct ubifs_orphan* orph_dnext; } ;


 int FUNC_0 (struct ubifs_info*,struct ubifs_orphan*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct ubifs_info *VAR_0, struct ubifs_orphan *VAR_1)
{
 if (VAR_1->del) {
  FUNC_1("deleted twice ino %lu", VAR_1->inum);
  return;
 }

 if (VAR_1->cmt) {
  VAR_1->del = 1;
  VAR_1->dnext = VAR_0->orph_dnext;
  VAR_0->orph_dnext = VAR_1;
  FUNC_1("delete later ino %lu", VAR_1->inum);
  return;
 }

 FUNC_0(VAR_0, VAR_1);
}
