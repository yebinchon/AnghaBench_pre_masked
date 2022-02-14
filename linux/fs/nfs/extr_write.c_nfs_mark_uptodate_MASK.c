
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_page; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_page*) ;

__attribute__((used)) static void FUNC_3(struct nfs_page *VAR_0)
{
 if (FUNC_0(VAR_0->wb_page))
  return;
 if (!FUNC_2(VAR_0))
  return;
 FUNC_1(VAR_0->wb_page);
}
