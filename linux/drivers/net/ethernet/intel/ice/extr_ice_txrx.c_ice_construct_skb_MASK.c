
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void u8 ;
struct sk_buff {int dev; } ;
struct ice_rx_buf {int page_offset; int pagecnt_bias; int page; } ;
struct ice_ring {int q_index; TYPE_1__* q_vector; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 struct sk_buff* FUNC_2 (int *,unsigned int,int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_4 (int ,void*,unsigned int) ;
 int FUNC_5 (struct ice_rx_buf*,unsigned int) ;
 int FUNC_6 (int ,void*,int ) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct sk_buff*,int ,int ,int,unsigned int,unsigned int) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static struct sk_buff *
FUNC_12(struct ice_ring *VAR_5, struct ice_rx_buf *VAR_6,
    unsigned int VAR_7)
{
 void *VAR_8 = FUNC_7(VAR_6->page) + VAR_6->page_offset;
 unsigned int VAR_9;
 struct sk_buff *VAR_10;


 FUNC_8(VAR_8);

 FUNC_8((u8 *)VAR_8 + VAR_3);



 VAR_10 = FUNC_2(&VAR_5->q_vector->napi, VAR_2,
          VAR_0 | VAR_4);
 if (FUNC_11(!VAR_10))
  return ((void*)0);

 FUNC_10(VAR_10, VAR_5->q_index);

 VAR_9 = VAR_7;
 if (VAR_9 > VAR_2)
  VAR_9 = FUNC_4(VAR_10->dev, VAR_8, VAR_2);


 FUNC_6(FUNC_3(VAR_10, VAR_9), VAR_8, FUNC_0(VAR_9, sizeof(long)));


 VAR_7 -= VAR_9;
 if (VAR_7) {



  unsigned int VAR_11 = VAR_1;

  FUNC_9(VAR_10, 0, VAR_6->page,
    VAR_6->page_offset + VAR_9, VAR_7, VAR_11);

  FUNC_5(VAR_6, VAR_11);
 } else {




  VAR_6->pagecnt_bias++;
 }

 return VAR_10;
}
