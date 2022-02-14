
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data_len; int truesize; scalar_t__ len; int tail; int data; } ;
struct be_rx_page_info {scalar_t__ page_offset; int * page; } ;
struct be_rx_obj {int dummy; } ;
struct be_rx_compl_info {scalar_t__ pkt_size; int num_rcvd; } ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct be_rx_page_info* FUNC_1 (struct be_rx_obj*) ;
 int FUNC_2 (int ,int *,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__,int *) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_12(struct be_rx_obj *VAR_4, struct sk_buff *VAR_5,
        struct be_rx_compl_info *VAR_6)
{
 struct be_rx_page_info *VAR_7;
 u16 VAR_8, VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 u8 *VAR_13;

 VAR_7 = FUNC_1(VAR_4);
 VAR_13 = FUNC_4(VAR_7->page) + VAR_7->page_offset;
 FUNC_5(VAR_13);


 VAR_11 = FUNC_3(VAR_6->pkt_size, VAR_3);

 VAR_5->len = VAR_11;
 if (VAR_11 <= VAR_0) {
  FUNC_2(VAR_5->data, VAR_13, VAR_11);

  FUNC_6(VAR_7->page);
  VAR_5->data_len = 0;
  VAR_5->tail += VAR_11;
 } else {
  VAR_10 = VAR_1;
  FUNC_2(VAR_5->data, VAR_13, VAR_10);
  FUNC_11(VAR_5)->nr_frags = 1;
  FUNC_8(VAR_5, 0, VAR_7->page);
  FUNC_7(&FUNC_11(VAR_5)->frags[0],
     VAR_7->page_offset + VAR_10);
  FUNC_10(&FUNC_11(VAR_5)->frags[0],
      VAR_11 - VAR_10);
  VAR_5->data_len = VAR_11 - VAR_10;
  VAR_5->truesize += VAR_3;
  VAR_5->tail += VAR_10;
 }
 VAR_7->page = ((void*)0);

 if (VAR_6->pkt_size <= VAR_3) {
  FUNC_0(VAR_6->num_rcvd != 1);
  return;
 }


 VAR_12 = VAR_6->pkt_size - VAR_11;
 for (VAR_8 = 1, VAR_9 = 0; VAR_8 < VAR_6->num_rcvd; VAR_8++) {
  VAR_7 = FUNC_1(VAR_4);
  VAR_11 = FUNC_3(VAR_12, VAR_3);


  if (VAR_7->page_offset == 0) {

   VAR_9++;
   FUNC_8(VAR_5, VAR_9, VAR_7->page);
   FUNC_7(&FUNC_11(VAR_5)->frags[VAR_9],
      VAR_7->page_offset);
   FUNC_10(&FUNC_11(VAR_5)->frags[VAR_9], 0);
   FUNC_11(VAR_5)->nr_frags++;
  } else {
   FUNC_6(VAR_7->page);
  }

  FUNC_9(&FUNC_11(VAR_5)->frags[VAR_9], VAR_11);
  VAR_5->len += VAR_11;
  VAR_5->data_len += VAR_11;
  VAR_5->truesize += VAR_3;
  VAR_12 -= VAR_11;
  VAR_7->page = ((void*)0);
 }
 FUNC_0(VAR_9 > VAR_2);
}
