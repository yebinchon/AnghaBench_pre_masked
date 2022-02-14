
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {int flag; int sb; struct page* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,struct metapage*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;

void FUNC_9(struct metapage *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 FUNC_3("force_metapage: mp = 0x%p", VAR_2);
 FUNC_6(VAR_0, &VAR_2->flag);
 FUNC_0(VAR_1, &VAR_2->flag);
 FUNC_1(VAR_3);
 FUNC_4(VAR_3);
 FUNC_7(VAR_3);
 if (FUNC_8(VAR_3))
  FUNC_2(VAR_2->sb, "write_one_page() failed\n");
 FUNC_0(VAR_0, &VAR_2->flag);
 FUNC_5(VAR_3);
}
