
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct qdio_buffer_element {scalar_t__ addr; } ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned int nr_frags; } ;


 int FUNC_0 (struct page*) ;
 unsigned int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sk_buff*,unsigned int,struct page*,int,int,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__,unsigned int) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct page* FUNC_6 (scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct qdio_buffer_element *VAR_0,
     struct sk_buff *VAR_1, int VAR_2, int VAR_3)
{
 struct page *VAR_4 = FUNC_6(VAR_0->addr);
 unsigned int VAR_5;


 if (!VAR_1->len) {
  unsigned int VAR_6 = FUNC_1(VAR_3, FUNC_5(VAR_1));

  FUNC_3(VAR_1, VAR_0->addr + VAR_2, VAR_6);
  VAR_3 -= VAR_6;
  if (!VAR_3)
   return;
  VAR_2 += VAR_6;

 }

 VAR_5 = FUNC_4(VAR_1)->nr_frags;
 FUNC_0(VAR_4);
 FUNC_2(VAR_1, VAR_5, VAR_4, VAR_2, VAR_3, VAR_3);
}
