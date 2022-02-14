
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct nicvf {int hw_tso; } ;
struct cqe_rx_t {int rb_cnt; scalar_t__ align_pad; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 size_t FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct nicvf*,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct nicvf*,scalar_t__,int) ;
 int FUNC_4 (struct nicvf*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sk_buff*,int ,struct page*,int,int,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_10 (struct sk_buff*) ;
 struct page* FUNC_11 (int) ;

struct sk_buff *FUNC_12(struct nicvf *VAR_1,
      struct cqe_rx_t *VAR_2, bool VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct sk_buff *VAR_6 = ((void*)0);
 struct page *VAR_7;
 int VAR_8;
 u16 *VAR_9 = ((void*)0);
 u64 *VAR_10 = ((void*)0);
 u64 VAR_11;

 VAR_9 = (void *)VAR_2 + (3 * sizeof(u64));







 if (!VAR_1->hw_tso)
  VAR_10 = (void *)VAR_2 + (6 * sizeof(u64));
 else
  VAR_10 = (void *)VAR_2 + (7 * sizeof(u64));

 for (VAR_4 = 0; VAR_4 < VAR_2->rb_cnt; VAR_4++) {
  VAR_5 = VAR_9[FUNC_1(VAR_4)];
  VAR_11 = FUNC_2(VAR_1, *VAR_10);
  if (!VAR_11) {
   if (VAR_6)
    FUNC_0(VAR_6);
   return ((void*)0);
  }

  if (!VAR_4) {

   FUNC_4(VAR_1,
            *VAR_10 - VAR_2->align_pad,
            VAR_11, VAR_3);
   VAR_6 = FUNC_3(VAR_1,
        VAR_11 - VAR_2->align_pad,
        VAR_5);
   if (!VAR_6)
    return ((void*)0);
   FUNC_9(VAR_6, VAR_2->align_pad);
   FUNC_8(VAR_6, VAR_5);
  } else {

   FUNC_4(VAR_1, *VAR_10, VAR_11, VAR_3);
   VAR_7 = FUNC_11(FUNC_6(VAR_11));
   VAR_8 = FUNC_6(VAR_11) - FUNC_5(VAR_7);
   FUNC_7(VAR_6, FUNC_10(VAR_6)->nr_frags, VAR_7,
     VAR_8, VAR_5, VAR_0);
  }

  VAR_10++;
 }
 return VAR_6;
}
