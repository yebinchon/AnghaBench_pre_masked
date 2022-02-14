
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int dummy; } ;
struct list_head {int next; } ;


 int FUNC_0 (struct list_head*) ;
 struct nfs_page* FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (struct nfs_page*,int) ;

__attribute__((used)) static void
FUNC_4(struct list_head *VAR_0, int VAR_1)
{
 struct nfs_page *VAR_2;

 while (!FUNC_0(VAR_0)) {
  VAR_2 = FUNC_1(VAR_0->next);
  FUNC_2(VAR_2);
  FUNC_3(VAR_2, VAR_1);
 }
}
