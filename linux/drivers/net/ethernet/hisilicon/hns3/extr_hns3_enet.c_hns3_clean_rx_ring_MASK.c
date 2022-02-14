
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct sk_buff sk_buff ;
struct hns3_enet_ring {struct sk_buff* skb; int pending_buf; TYPE_1__* tqp; } ;
struct TYPE_2__ {scalar_t__ io_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hns3_enet_ring*) ;
 int FUNC_1 (struct hns3_enet_ring*,struct sk_buff**) ;
 int FUNC_2 (struct hns3_enet_ring*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct hns3_enet_ring *VAR_3, int VAR_4,
         void (*VAR_5)(struct hns3_enet_ring *, struct sk_buff *))
{

 int VAR_6 = FUNC_0(VAR_3);
 struct sk_buff *VAR_7 = VAR_3->skb;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_3(VAR_3->tqp->io_base + VAR_1);
 FUNC_4();

 VAR_11 -= VAR_6;
 VAR_6 -= VAR_3->pending_buf;

 while (VAR_8 < VAR_4 && VAR_9 < VAR_11) {

  if (VAR_6 >= 16) {
   FUNC_2(VAR_3, VAR_6);
   VAR_6 = FUNC_0(VAR_3) -
     VAR_3->pending_buf;
  }


  VAR_10 = FUNC_1(VAR_3, &VAR_7);
  if (FUNC_5(!VAR_7))
   goto out;

  if (VAR_10 == -VAR_0) {
   goto out;
  } else if (FUNC_5(VAR_10)) {
   VAR_9 += VAR_3->pending_buf;
   VAR_6 += VAR_3->pending_buf;
   VAR_3->skb = ((void*)0);
   VAR_3->pending_buf = 0;
   continue;
  }

  VAR_5(VAR_3, VAR_7);
  VAR_9 += VAR_3->pending_buf;
  VAR_6 += VAR_3->pending_buf;
  VAR_3->skb = ((void*)0);
  VAR_3->pending_buf = 0;

  VAR_8++;
 }

out:

 if (VAR_6 > 0)
  FUNC_2(VAR_3, VAR_6);

 return VAR_8;
}
