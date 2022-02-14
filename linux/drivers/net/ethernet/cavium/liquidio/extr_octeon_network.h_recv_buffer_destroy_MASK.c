
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct octeon_skb_page_info {scalar_t__ page_offset; int * page; scalar_t__ dma; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void
FUNC_2(void *VAR_0, struct octeon_skb_page_info *VAR_1)
{
 struct sk_buff *VAR_2 = (struct sk_buff *)VAR_0;

 FUNC_1(VAR_1->page);
 VAR_1->dma = 0;
 VAR_1->page = ((void*)0);
 VAR_1->page_offset = 0;

 if (VAR_2)
  FUNC_0(VAR_2);
}
