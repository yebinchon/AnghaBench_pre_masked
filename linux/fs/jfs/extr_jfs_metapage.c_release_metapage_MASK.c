
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct metapage {scalar_t__ lsn; int sb; int flag; scalar_t__ nohomeok; scalar_t__ count; struct page* page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct page*,struct metapage*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,struct metapage*,int ) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct metapage*) ;
 int FUNC_9 (struct page*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (struct metapage*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (struct page*) ;

void FUNC_14(struct metapage * VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 FUNC_5("release_metapage: mp = 0x%p, flag = 0x%lx", VAR_2, VAR_2->flag);

 FUNC_0(!VAR_3);

 FUNC_6(VAR_3);
 FUNC_11(VAR_2);

 FUNC_1(VAR_2->count);
 if (--VAR_2->count || VAR_2->nohomeok) {
  FUNC_12(VAR_3);
  FUNC_7(VAR_3);
  return;
 }

 if (FUNC_10(VAR_0, &VAR_2->flag)) {
  FUNC_9(VAR_3);
  if (FUNC_10(VAR_1, &VAR_2->flag)) {
   FUNC_2(VAR_1, &VAR_2->flag);
   if (FUNC_13(VAR_3))
    FUNC_4(VAR_2->sb, "write_one_page() failed\n");
   FUNC_6(VAR_3);
  }
 } else if (VAR_2->lsn)
  FUNC_8(VAR_2);


 FUNC_3(VAR_3, VAR_2);

 FUNC_12(VAR_3);
 FUNC_7(VAR_3);
}
