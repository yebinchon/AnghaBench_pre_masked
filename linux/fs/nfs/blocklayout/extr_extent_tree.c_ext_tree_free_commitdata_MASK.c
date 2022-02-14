
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_layoutcommit_args {int layoutupdate_page; int * layoutupdate_pages; int start_p; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nfs4_layoutcommit_args *VAR_1,
  size_t VAR_2)
{
 if (VAR_1->layoutupdate_pages != &VAR_1->layoutupdate_page) {
  int VAR_3 = FUNC_0(VAR_2, VAR_0), VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
   FUNC_2(VAR_1->layoutupdate_pages[VAR_4]);
  FUNC_3(VAR_1->start_p);
  FUNC_1(VAR_1->layoutupdate_pages);
 } else {
  FUNC_2(VAR_1->layoutupdate_page);
 }
}
