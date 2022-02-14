
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rx_pkt_attrib {int seq_num; } ;
struct TYPE_3__ {int list; struct rx_pkt_attrib attrib; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
struct __queue {int dummy; } ;
struct recv_reorder_ctrl {struct __queue pending_recvframe_queue; } ;
struct list_head {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct list_head* FUNC_2 (struct __queue*) ;
 struct list_head* FUNC_3 (struct list_head*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct recv_reorder_ctrl *VAR_0, union recv_frame *VAR_1)
{
 struct rx_pkt_attrib *VAR_2 = &VAR_1->u.hdr.attrib;
 struct __queue *VAR_3 = &VAR_0->pending_recvframe_queue;
 struct list_head *VAR_4, *VAR_5;
 union recv_frame *VAR_6;
 struct rx_pkt_attrib *VAR_7;







 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_4);

 while (VAR_4 != VAR_5) {
  VAR_6 = (union recv_frame *)VAR_5;
  VAR_7 = &VAR_6->u.hdr.attrib;

  if (FUNC_1(VAR_7->seq_num, VAR_2->seq_num))
   VAR_5 = FUNC_3(VAR_5);
  else if (FUNC_0(VAR_7->seq_num, VAR_2->seq_num))



   return 0;
  else
   break;



 }





 FUNC_5(&(VAR_1->u.hdr.list));

 FUNC_4(&(VAR_1->u.hdr.list), VAR_5);






 return 1;

}
