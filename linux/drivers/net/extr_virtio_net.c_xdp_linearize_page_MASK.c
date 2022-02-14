
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct skb_shared_info {int dummy; } ;
struct receive_queue {int vq; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct page*,int ) ;
 struct page* FUNC_2 (int ) ;
 int FUNC_3 (void*,void*,unsigned int) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 struct page* FUNC_7 (void*) ;
 void* FUNC_8 (int ,unsigned int*) ;

__attribute__((used)) static struct page *FUNC_9(struct receive_queue *VAR_3,
           u16 *VAR_4,
           struct page *VAR_5,
           int VAR_6,
           int VAR_7,
           unsigned int *VAR_8)
{
 struct page *VAR_9 = FUNC_2(VAR_0);

 if (!VAR_9)
  return ((void*)0);

 FUNC_3(FUNC_4(VAR_9) + VAR_7, FUNC_4(VAR_5) + VAR_6, *VAR_8);
 VAR_7 += *VAR_8;

 while (--*VAR_4) {
  int VAR_10 = FUNC_0(sizeof(struct skb_shared_info));
  unsigned int VAR_11;
  void *VAR_12;
  int VAR_13;

  VAR_12 = FUNC_8(VAR_3->vq, &VAR_11);
  if (FUNC_6(!VAR_12))
   goto err_buf;

  VAR_5 = FUNC_7(VAR_12);
  VAR_13 = VAR_12 - FUNC_4(VAR_5);




  if ((VAR_7 + VAR_11 + VAR_10) > VAR_1) {
   FUNC_5(VAR_5);
   goto err_buf;
  }

  FUNC_3(FUNC_4(VAR_9) + VAR_7,
         FUNC_4(VAR_5) + VAR_13, VAR_11);
  VAR_7 += VAR_11;
  FUNC_5(VAR_5);
 }


 *VAR_8 = VAR_7 - VAR_2;
 return VAR_9;
err_buf:
 FUNC_1(VAR_9, 0);
 return ((void*)0);
}
