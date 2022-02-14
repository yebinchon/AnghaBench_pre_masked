
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int index; } ;
struct fscache_object {int lock; struct fscache_cookie* cookie; } ;
struct fscache_cookie {int flags; int stores_lock; int stores; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int *,int ) ;
 struct page* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct fscache_cookie*,struct page*,struct page*,int) ;
 int FUNC_9 (struct fscache_cookie*,struct page*,int ) ;
 int FUNC_10 (struct fscache_cookie*) ;
 int FUNC_11 (int *,int ) ;

__attribute__((used)) static void FUNC_12(struct fscache_object *VAR_8,
       struct page *VAR_9)
{
 struct fscache_cookie *VAR_10;
 struct page *VAR_11 = ((void*)0), *VAR_12;

 FUNC_6(&VAR_8->lock);
 VAR_10 = VAR_8->cookie;
 if (VAR_10) {


  FUNC_6(&VAR_10->stores_lock);
  FUNC_4(&VAR_10->stores, VAR_9->index,
         VAR_1);
  FUNC_9(VAR_10, VAR_9, VAR_3);
  if (!FUNC_5(&VAR_10->stores, VAR_9->index,
     VAR_0)) {
   FUNC_0(&VAR_2);
   VAR_11 = FUNC_2(&VAR_10->stores, VAR_9->index);
   FUNC_9(VAR_10, VAR_9, VAR_4);
   FUNC_9(VAR_10, VAR_9, VAR_5);

   VAR_12 = FUNC_3(&VAR_10->stores, VAR_9->index);
   FUNC_8(VAR_10, VAR_9, VAR_12, 1);
  } else {
   FUNC_9(VAR_10, VAR_9, VAR_7);
  }
  FUNC_7(&VAR_10->stores_lock);
  FUNC_11(&VAR_10->flags, 0);
  FUNC_10(VAR_10);
 } else {
  FUNC_9(VAR_10, VAR_9, VAR_6);
 }
 FUNC_7(&VAR_8->lock);
 if (VAR_11)
  FUNC_1(VAR_11);
}
