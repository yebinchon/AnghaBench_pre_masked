
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_8__ {int len; int arr; } ;
struct TYPE_7__ {int len; int arr; } ;
struct TYPE_6__ {int err_frame_crc; int err_ip_cksum; int err_tcp_cksum; } ;
struct ehea_port_res {int port; TYPE_5__* qp; TYPE_3__ rq3_skba; TYPE_2__ rq2_skba; TYPE_1__ p_stats; } ;
struct ehea_cqe {int status; } ;
struct TYPE_9__ {int qp_nr; } ;
struct TYPE_10__ {TYPE_4__ init_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ehea_cqe*,int,char*) ;
 int FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int ,int ,struct ehea_cqe*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct ehea_port_res *VAR_4, int VAR_5,
     struct ehea_cqe *VAR_6, int *VAR_7,
     int *VAR_8)
{
 struct sk_buff *VAR_9;

 if (VAR_6->status & VAR_2)
  VAR_4->p_stats.err_tcp_cksum++;
 if (VAR_6->status & VAR_1)
  VAR_4->p_stats.err_ip_cksum++;
 if (VAR_6->status & VAR_0)
  VAR_4->p_stats.err_frame_crc++;

 if (VAR_5 == 2) {
  *VAR_7 += 1;
  VAR_9 = FUNC_3(VAR_4->rq2_skba.arr, VAR_4->rq2_skba.len, VAR_6);
  FUNC_0(VAR_9);
 } else if (VAR_5 == 3) {
  *VAR_8 += 1;
  VAR_9 = FUNC_3(VAR_4->rq3_skba.arr, VAR_4->rq3_skba.len, VAR_6);
  FUNC_0(VAR_9);
 }

 if (VAR_6->status & VAR_3) {
  if (FUNC_4(VAR_4->port)) {
   FUNC_5("Critical receive error for QP %d. Resetting port.\n",
          VAR_4->qp->init_attr.qp_nr);
   FUNC_1(VAR_6, sizeof(*VAR_6), "CQE");
  }
  FUNC_2(VAR_4->port);
  return 1;
 }

 return 0;
}
