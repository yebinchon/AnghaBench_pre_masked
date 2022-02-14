
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 struct sk_buff* FUNC_3 (void*,int) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct sk_buff*,int ,struct page*,void*,scalar_t__,int) ;
 int FUNC_6 (struct sk_buff*,void*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 struct page* FUNC_9 (void*) ;

__attribute__((used)) static struct sk_buff *
FUNC_10(void *VAR_3, int VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;

 if (FUNC_0(VAR_5) < VAR_1 + VAR_4) {
  struct page *VAR_7;




  VAR_6 = FUNC_2(VAR_2, VAR_0);
  if (!VAR_6)
   return ((void*)0);

  FUNC_6(VAR_6, VAR_3 + VAR_1, VAR_2);
  VAR_3 += (VAR_1 + VAR_2);
  VAR_7 = FUNC_9(VAR_3);
  FUNC_5(VAR_6, FUNC_8(VAR_6)->nr_frags,
    VAR_7, VAR_3 - FUNC_4(VAR_7),
    VAR_4 - VAR_2, VAR_5);

  return VAR_6;
 }


 VAR_6 = FUNC_3(VAR_3, VAR_5);
 if (!VAR_6)
  return ((void*)0);

 FUNC_7(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_4);

 return VAR_6;
}
