
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct ehea_rwqe {int wr_id; int data_segments; TYPE_3__* sg_list; } ;
struct ehea_qp {int dummy; } ;
struct ehea_q_skb_arr {int os_skbs; int index; int len; struct sk_buff** arr; } ;
struct TYPE_5__ {int lkey; } ;
struct ehea_port_res {struct ehea_qp* qp; TYPE_2__ recv_mr; TYPE_1__* port; } ;
struct TYPE_6__ {int vaddr; int len; int l_key; } ;
struct TYPE_4__ {struct net_device* netdev; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 struct ehea_rwqe* FUNC_2 (struct ehea_qp*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ehea_qp*,int) ;
 int FUNC_5 (struct ehea_qp*,int) ;
 int FUNC_6 () ;
 struct sk_buff* FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct net_device*,char*,int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct ehea_port_res *VAR_5,
         struct ehea_q_skb_arr *VAR_6, int VAR_7,
         int VAR_8, int VAR_9, int VAR_10)
{
 struct net_device *VAR_11 = VAR_5->port->netdev;
 struct ehea_qp *VAR_12 = VAR_5->qp;
 struct sk_buff **VAR_13 = VAR_6->arr;
 struct ehea_rwqe *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;

 VAR_18 = VAR_6->os_skbs + VAR_8;
 VAR_6->os_skbs = 0;

 if (FUNC_10(FUNC_9(VAR_3, &VAR_4))) {
  VAR_6->os_skbs = VAR_18;
  return VAR_20;
 }

 VAR_16 = VAR_6->index;
 VAR_17 = VAR_6->len - 1;
 for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
  u64 VAR_21;
  struct sk_buff *VAR_22;

  VAR_22 = FUNC_7(VAR_11, VAR_10);
  if (!VAR_22) {
   VAR_6->os_skbs = VAR_18 - VAR_15;
   if (VAR_6->os_skbs == VAR_6->len - 2) {
    FUNC_8(VAR_5->port->netdev,
         "rq%i ran dry - no mem for skb\n",
         VAR_7);
    VAR_20 = -VAR_2;
   }
   break;
  }

  VAR_13[VAR_16] = VAR_22;
  VAR_21 = FUNC_3(VAR_22->data);
  if (VAR_21 == -1) {
   FUNC_1(VAR_22);
   VAR_6->os_skbs = VAR_18 - VAR_15;
   VAR_20 = 0;
   break;
  }

  VAR_14 = FUNC_2(VAR_12, VAR_7);
  VAR_14->wr_id = FUNC_0(VAR_1, VAR_9)
       | FUNC_0(VAR_0, VAR_16);
  VAR_14->sg_list[0].l_key = VAR_5->recv_mr.lkey;
  VAR_14->sg_list[0].vaddr = VAR_21;
  VAR_14->sg_list[0].len = VAR_10;
  VAR_14->data_segments = 1;

  VAR_16++;
  VAR_16 &= VAR_17;
  VAR_19++;
 }

 VAR_6->index = VAR_16;
 if (VAR_19 == 0)
  goto out;


 FUNC_6();
 if (VAR_7 == 2)
  FUNC_4(VAR_5->qp, VAR_19);
 else
  FUNC_5(VAR_5->qp, VAR_19);
out:
 return VAR_20;
}
