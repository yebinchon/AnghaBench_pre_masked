
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct page {int dummy; } ;
struct atl1c_adapter {scalar_t__ rx_frag_size; scalar_t__ rx_page_offset; struct page* rx_page; int rx_buffer_len; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct page* FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct atl1c_adapter *VAR_3)
{
 struct sk_buff *VAR_4;
 struct page *VAR_5;

 if (VAR_3->rx_frag_size > VAR_2)
  return FUNC_4(VAR_3->netdev,
     VAR_3->rx_buffer_len);

 VAR_5 = VAR_3->rx_page;
 if (!VAR_5) {
  VAR_3->rx_page = VAR_5 = FUNC_0(VAR_0);
  if (FUNC_7(!VAR_5))
   return ((void*)0);
  VAR_3->rx_page_offset = 0;
 }

 VAR_4 = FUNC_1(FUNC_5(VAR_5) + VAR_3->rx_page_offset,
   VAR_3->rx_frag_size);
 if (FUNC_3(VAR_4)) {
  FUNC_6(VAR_4, VAR_1);
  VAR_3->rx_page_offset += VAR_3->rx_frag_size;
  if (VAR_3->rx_page_offset >= VAR_2)
   VAR_3->rx_page = ((void*)0);
  else
   FUNC_2(VAR_5);
 }
 return VAR_4;
}
