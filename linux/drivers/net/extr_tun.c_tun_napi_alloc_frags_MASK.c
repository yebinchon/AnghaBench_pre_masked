
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tun_file {int napi; } ;
struct sk_buff {size_t len; size_t data_len; size_t truesize; } ;
struct page {int dummy; } ;
struct iov_iter {int nr_segs; TYPE_1__* iov; } ;
struct TYPE_2__ {size_t iov_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (struct sk_buff*,size_t) ;
 size_t FUNC_2 (struct iov_iter const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct sk_buff*,int,struct page*,void*,size_t) ;
 struct page* FUNC_10 (void*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct tun_file *VAR_4,
         size_t VAR_5,
         const struct iov_iter *VAR_6)
{
 struct sk_buff *VAR_7;
 size_t VAR_8;
 int VAR_9;
 int VAR_10;

 if (VAR_6->nr_segs > VAR_2 + 1)
  return FUNC_0(-VAR_1);

 FUNC_3();
 VAR_7 = FUNC_6(&VAR_4->napi);
 FUNC_4();
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_2(VAR_6);
 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9)
  goto free;

 VAR_7->len = VAR_5;
 VAR_7->data_len = VAR_5 - VAR_8;
 VAR_7->truesize += VAR_7->data_len;

 for (VAR_10 = 1; VAR_10 < VAR_6->nr_segs; VAR_10++) {
  size_t VAR_11 = VAR_6->iov[VAR_10].iov_len;
  struct page *VAR_12;
  void *VAR_13;

  if (VAR_11 == 0 || VAR_11 > VAR_3) {
   VAR_9 = -VAR_0;
   goto free;
  }
  VAR_13 = FUNC_7(VAR_11);
  if (!VAR_13) {
   VAR_9 = -VAR_1;
   goto free;
  }
  VAR_12 = FUNC_10(VAR_13);
  FUNC_9(VAR_7, VAR_10 - 1, VAR_12,
       VAR_13 - FUNC_8(VAR_12), VAR_11);
 }

 return VAR_7;
free:

 FUNC_5(&VAR_4->napi);
 return FUNC_0(VAR_9);
}
