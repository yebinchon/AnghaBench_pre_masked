
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {scalar_t__ len; } ;
struct net_device {int dummy; } ;
struct ehea_qp {int dummy; } ;
struct TYPE_8__ {int poll_receive_errors; } ;
struct TYPE_7__ {int len; struct sk_buff** arr; } ;
struct TYPE_6__ {int len; struct sk_buff** arr; } ;
struct TYPE_5__ {int len; struct sk_buff** arr; } ;
struct ehea_port_res {int rx_packets; int rx_bytes; TYPE_4__ p_stats; int napi; TYPE_3__ rq3_skba; TYPE_2__ rq2_skba; TYPE_1__ rq1_skba; struct ehea_qp* qp; struct ehea_port* port; } ;
struct ehea_port {int dummy; } ;
struct ehea_cqe {int status; int vlan_tag; scalar_t__ num_bytes_transfered; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct ehea_cqe*,int*) ;
 int FUNC_2 (struct ehea_cqe*,int,char*) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,struct ehea_cqe*,struct ehea_port_res*) ;
 int FUNC_4 (struct ehea_qp*) ;
 struct ehea_cqe* FUNC_5 (struct ehea_qp*,int*) ;
 int FUNC_6 (struct ehea_port_res*,int,int) ;
 int FUNC_7 (struct ehea_port_res*,int) ;
 int FUNC_8 (struct ehea_port_res*,int) ;
 int FUNC_9 (struct ehea_port_res*,int,struct ehea_cqe*,int*,int*) ;
 struct sk_buff* FUNC_10 (struct sk_buff**,int,struct ehea_cqe*) ;
 struct sk_buff* FUNC_11 (struct sk_buff**,int,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_14 (struct net_device*,int ) ;
 int FUNC_15 (struct ehea_port*,int ,struct net_device*,char*) ;
 int FUNC_16 (struct ehea_port*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_17 (struct ehea_port*) ;
 int FUNC_18 () ;
 int VAR_3 ;
 int FUNC_19 (struct sk_buff*,char*,scalar_t__) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct net_device *VAR_4,
      struct ehea_port_res *VAR_5,
      int VAR_6)
{
 struct ehea_port *VAR_7 = VAR_5->port;
 struct ehea_qp *VAR_8 = VAR_5->qp;
 struct ehea_cqe *VAR_9;
 struct sk_buff *VAR_10;
 struct sk_buff **VAR_11 = VAR_5->rq1_skba.arr;
 struct sk_buff **VAR_12 = VAR_5->rq2_skba.arr;
 struct sk_buff **VAR_13 = VAR_5->rq3_skba.arr;
 int VAR_14 = VAR_5->rq1_skba.len;
 int VAR_15 = VAR_5->rq2_skba.len;
 int VAR_16 = VAR_5->rq3_skba.len;
 int VAR_17, VAR_18, VAR_19, VAR_20;
 u64 VAR_21 = 0;
 int VAR_22, VAR_23, VAR_24, VAR_25;

 VAR_17 = VAR_18 = VAR_19 = VAR_20 = 0;
 VAR_23 = 0;

 VAR_9 = FUNC_5(VAR_8, &VAR_22);
 while ((VAR_17 < VAR_6) && VAR_9) {
  FUNC_4(VAR_8);
  VAR_18++;
  VAR_17++;
  if (FUNC_17(VAR_7))
   FUNC_2(VAR_9, sizeof(*VAR_9), "CQE");

  VAR_23 = VAR_22;
  FUNC_18();
  if (!FUNC_1(VAR_9, &VAR_24)) {
   if (VAR_24 == 1) {

    VAR_10 = FUNC_11(VAR_11,
         VAR_14,
         VAR_22);
    if (FUNC_20(!VAR_10)) {
     FUNC_16(VAR_7, VAR_3, VAR_4,
        "LL rq1: skb=NULL\n");

     VAR_10 = FUNC_14(VAR_4,
              VAR_1);
     if (!VAR_10)
      break;
    }
    FUNC_19(VAR_10, ((char *)VAR_9) + 64,
       VAR_9->num_bytes_transfered - 4);
    FUNC_3(VAR_4, VAR_10, VAR_9, VAR_5);
   } else if (VAR_24 == 2) {

    VAR_10 = FUNC_10(VAR_12,
             VAR_15, VAR_9);
    if (FUNC_20(!VAR_10)) {
     FUNC_15(VAR_7, VAR_3, VAR_4,
        "rq2: skb=NULL\n");
     break;
    }
    FUNC_3(VAR_4, VAR_10, VAR_9, VAR_5);
    VAR_19++;
   } else {

    VAR_10 = FUNC_10(VAR_13,
             VAR_16, VAR_9);
    if (FUNC_20(!VAR_10)) {
     FUNC_15(VAR_7, VAR_3, VAR_4,
        "rq3: skb=NULL\n");
     break;
    }
    FUNC_3(VAR_4, VAR_10, VAR_9, VAR_5);
    VAR_20++;
   }

   VAR_21 += VAR_10->len;

   if (VAR_9->status & VAR_0)
    FUNC_0(VAR_10, FUNC_12(VAR_2),
             VAR_9->vlan_tag);

   FUNC_13(&VAR_5->napi, VAR_10);
  } else {
   VAR_5->p_stats.poll_receive_errors++;
   VAR_25 = FUNC_9(VAR_5, VAR_24, VAR_9,
          &VAR_19,
          &VAR_20);
   if (VAR_25)
    break;
  }
  VAR_9 = FUNC_5(VAR_8, &VAR_22);
 }

 VAR_5->rx_packets += VAR_17;
 VAR_5->rx_bytes += VAR_21;

 FUNC_6(VAR_5, VAR_23, VAR_18);
 FUNC_7(VAR_5, VAR_19);
 FUNC_8(VAR_5, VAR_20);

 return VAR_17;
}
