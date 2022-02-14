
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct recv_priv {int free_recv_skb_queue; int rx_skb_queue; struct recv_buf* precv_buf; int free_recv_buf_queue; int recv_tasklet; } ;
struct recv_buf {struct adapter* adapter; } ;
struct adapter {int pnetdev; struct recv_priv recvpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 struct recv_buf* FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct adapter*,struct recv_buf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int *,void (*) (unsigned long),unsigned long) ;

int FUNC_9(struct adapter *VAR_9)
{
 struct recv_priv *VAR_10 = &VAR_9->recvpriv;
 int VAR_11, VAR_12 = VAR_5;
 struct recv_buf *VAR_13;

 FUNC_8(&VAR_10->recv_tasklet,
       (void(*)(unsigned long))VAR_8,
       (unsigned long)VAR_9);


 FUNC_2(&VAR_10->free_recv_buf_queue);

 VAR_10->precv_buf =
  FUNC_3(VAR_3, sizeof(struct recv_buf), VAR_0);
 if (!VAR_10->precv_buf) {
  VAR_12 = VAR_4;
  FUNC_0(VAR_7, VAR_6,
    ("alloc recv_buf fail!\n"));
  goto exit;
 }
 VAR_13 = VAR_10->precv_buf;

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_12 = FUNC_5(VAR_9, VAR_13);
  if (VAR_12 == VAR_4)
   break;
  VAR_13->adapter = VAR_9;
  VAR_13++;
 }
 FUNC_6(&VAR_10->rx_skb_queue);
 {
  int VAR_14;
  struct sk_buff *VAR_15 = ((void*)0);

  FUNC_6(&VAR_10->free_recv_skb_queue);

  for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) {
   VAR_15 = FUNC_1(VAR_9->pnetdev,
     VAR_1, VAR_0);
   if (VAR_15) {
    FUNC_4(VAR_15);
    FUNC_7(&VAR_10->free_recv_skb_queue,
      VAR_15);
   }
   VAR_15 = ((void*)0);
  }
 }
exit:
 return VAR_12;
}
