
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct fscache_cookie {int flags; int stores_lock; int stores; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,void**,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fscache_cookie*,struct page*,int ) ;
 int FUNC_9 (struct fscache_cookie*) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(struct fscache_cookie *VAR_3)
{
 struct page *VAR_4;
 void *VAR_5[16];
 int VAR_6, VAR_7;

 FUNC_1("");

 for (;;) {
  FUNC_6(&VAR_3->stores_lock);
  VAR_6 = FUNC_5(&VAR_3->stores, VAR_5, 0,
            FUNC_0(VAR_5),
            VAR_0);
  if (VAR_6 == 0) {
   FUNC_7(&VAR_3->stores_lock);
   break;
  }

  for (VAR_7 = VAR_6 - 1; VAR_7 >= 0; VAR_7--) {
   VAR_4 = VAR_5[VAR_7];
   FUNC_4(&VAR_3->stores, VAR_4->index);
   FUNC_8(VAR_3, VAR_4, VAR_2);
   FUNC_8(VAR_3, VAR_4, VAR_1);
  }

  FUNC_7(&VAR_3->stores_lock);

  for (VAR_7 = VAR_6 - 1; VAR_7 >= 0; VAR_7--)
   FUNC_3(VAR_5[VAR_7]);
 }

 FUNC_10(&VAR_3->flags, 0);
 FUNC_9(VAR_3);

 FUNC_2("");
}
