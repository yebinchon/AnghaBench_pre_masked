
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdp_buff {unsigned int data_end; unsigned int data; } ;
struct sk_buff {int dev; } ;
struct i40e_rx_buffer {unsigned int page_offset; int pagecnt_bias; int page; } ;
struct i40e_ring {TYPE_1__* q_vector; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (int *,unsigned int,int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_4 (int ,unsigned int,unsigned int) ;
 int FUNC_5 (struct i40e_ring*) ;
 int FUNC_6 (int ,unsigned int,int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct sk_buff*,int ,int ,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct i40e_ring *VAR_4,
       struct i40e_rx_buffer *VAR_5,
       struct xdp_buff *VAR_6)
{
 unsigned int VAR_7 = VAR_6->data_end - VAR_6->data;

 unsigned int VAR_8 = FUNC_5(VAR_4) / 2;



 unsigned int VAR_9;
 struct sk_buff *VAR_10;


 FUNC_7(VAR_6->data);

 FUNC_7(VAR_6->data + VAR_2);
 VAR_10 = FUNC_2(&VAR_4->q_vector->napi,
          VAR_1,
          VAR_0 | VAR_3);
 if (FUNC_9(!VAR_10))
  return ((void*)0);


 VAR_9 = VAR_7;
 if (VAR_9 > VAR_1)
  VAR_9 = FUNC_4(VAR_10->dev, VAR_6->data,
       VAR_1);


 FUNC_6(FUNC_3(VAR_10, VAR_9), VAR_6->data,
        FUNC_0(VAR_9, sizeof(long)));


 VAR_7 -= VAR_9;
 if (VAR_7) {
  FUNC_8(VAR_10, 0, VAR_5->page,
    VAR_5->page_offset + VAR_9,
    VAR_7, VAR_8);



  VAR_5->page_offset ^= VAR_8;



 } else {

  VAR_5->pagecnt_bias++;
 }

 return VAR_10;
}
