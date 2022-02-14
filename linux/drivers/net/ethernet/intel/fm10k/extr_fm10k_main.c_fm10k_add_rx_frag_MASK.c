
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union fm10k_rx_desc {int dummy; } fm10k_rx_desc ;
struct sk_buff {int dev; } ;
struct page {int dummy; } ;
struct fm10k_rx_buffer {int page_offset; struct page* page; } ;
struct TYPE_2__ {int nr_frags; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_3 (int ,unsigned char*,unsigned int) ;
 int FUNC_4 (struct fm10k_rx_buffer*,struct page*,unsigned int) ;
 int FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,unsigned char*,unsigned int) ;
 unsigned char* FUNC_8 (struct page*) ;
 int FUNC_9 (struct sk_buff*,int ,struct page*,unsigned long,unsigned int,unsigned int) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static bool FUNC_13(struct fm10k_rx_buffer *VAR_3,
         unsigned int VAR_4,
         union fm10k_rx_desc *VAR_5,
         struct sk_buff *VAR_6)
{
 struct page *VAR_7 = VAR_3->page;
 unsigned char *VAR_8 = FUNC_8(VAR_7) + VAR_3->page_offset;

 unsigned int VAR_9 = VAR_0;



 unsigned int VAR_10;

 if (FUNC_12(FUNC_10(VAR_6)))
  goto add_tail_frag;

 if (FUNC_6(VAR_4 <= VAR_1)) {
  FUNC_7(FUNC_2(VAR_6, VAR_4), VAR_8, FUNC_0(VAR_4, sizeof(long)));


  if (FUNC_6(!FUNC_5(VAR_7)))
   return 1;


  FUNC_1(VAR_7);
  return 0;
 }




 VAR_10 = FUNC_3(VAR_6->dev, VAR_8, VAR_1);


 FUNC_7(FUNC_2(VAR_6, VAR_10), VAR_8, FUNC_0(VAR_10, sizeof(long)));


 VAR_8 += VAR_10;
 VAR_4 -= VAR_10;

add_tail_frag:
 FUNC_9(VAR_6, FUNC_11(VAR_6)->nr_frags, VAR_7,
   (unsigned long)VAR_8 & ~VAR_2, VAR_4, VAR_9);

 return FUNC_4(VAR_3, VAR_7, VAR_9);
}
