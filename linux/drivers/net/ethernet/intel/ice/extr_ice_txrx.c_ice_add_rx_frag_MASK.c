
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ice_rx_buf {int page_offset; int page; } ;
struct TYPE_2__ {int nr_frags; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct ice_rx_buf*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ,unsigned int,unsigned int) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_4(struct ice_rx_buf *VAR_1, struct sk_buff *VAR_2,
  unsigned int VAR_3)
{



 unsigned int VAR_4 = VAR_0;


 if (!VAR_3)
  return;
 FUNC_2(VAR_2, FUNC_3(VAR_2)->nr_frags, VAR_1->page,
   VAR_1->page_offset, VAR_3, VAR_4);


 FUNC_1(VAR_1, VAR_4);
}
