
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct fuse_copy_state {scalar_t__ write; scalar_t__ move_pages; int len; scalar_t__ pipebufs; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 unsigned int FUNC_2 (struct fuse_copy_state*,void**,unsigned int*) ;
 int FUNC_3 (struct fuse_copy_state*) ;
 int FUNC_4 (struct fuse_copy_state*,struct page*,unsigned int,unsigned int) ;
 int FUNC_5 (struct fuse_copy_state*,struct page**) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct fuse_copy_state *VAR_1, struct page **VAR_2,
     unsigned VAR_3, unsigned VAR_4, int VAR_5)
{
 int VAR_6;
 struct page *VAR_7 = *VAR_2;

 if (VAR_7 && VAR_5 && VAR_4 < VAR_0)
  FUNC_0(VAR_7);

 while (VAR_4) {
  if (VAR_1->write && VAR_1->pipebufs && VAR_7) {
   return FUNC_4(VAR_1, VAR_7, VAR_3, VAR_4);
  } else if (!VAR_1->len) {
   if (VAR_1->move_pages && VAR_7 &&
       VAR_3 == 0 && VAR_4 == VAR_0) {
    VAR_6 = FUNC_5(VAR_1, VAR_2);
    if (VAR_6 <= 0)
     return VAR_6;
   } else {
    VAR_6 = FUNC_3(VAR_1);
    if (VAR_6)
     return VAR_6;
   }
  }
  if (VAR_7) {
   void *VAR_8 = FUNC_6(VAR_7);
   void *VAR_9 = VAR_8 + VAR_3;
   VAR_3 += FUNC_2(VAR_1, &VAR_9, &VAR_4);
   FUNC_7(VAR_8);
  } else
   VAR_3 += FUNC_2(VAR_1, ((void*)0), &VAR_4);
 }
 if (VAR_7 && !VAR_1->write)
  FUNC_1(VAR_7);
 return 0;
}
