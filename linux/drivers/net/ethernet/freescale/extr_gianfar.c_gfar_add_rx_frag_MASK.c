
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct page {int dummy; } ;
struct gfar_rx_buff {scalar_t__ page_offset; struct page* page; } ;
struct TYPE_2__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct sk_buff*,int ,struct page*,scalar_t__,int,scalar_t__) ;
 int FUNC_6 (struct sk_buff*,int) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(struct gfar_rx_buff *VAR_4, u32 VAR_5,
        struct sk_buff *VAR_6, bool VAR_7)
{
 int VAR_8 = VAR_5 & VAR_0;
 struct page *VAR_9 = VAR_4->page;

 if (FUNC_1(VAR_7)) {
  FUNC_6(VAR_6, VAR_8);
 } else {

  if (VAR_5 & FUNC_0(VAR_2))
   VAR_8 -= VAR_6->len;

  FUNC_5(VAR_6, FUNC_7(VAR_6)->nr_frags, VAR_9,
    VAR_4->page_offset + VAR_3,
    VAR_8, VAR_1);
 }


 if (FUNC_8(FUNC_2(VAR_9) != 1 || FUNC_3(VAR_9)))
  return 0;


 VAR_4->page_offset ^= VAR_1;

 FUNC_4(VAR_9);

 return 1;
}
