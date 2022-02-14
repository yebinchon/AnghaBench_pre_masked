
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
struct TYPE_8__ {TYPE_2__ revoke_recv_buf; } ;
struct TYPE_9__ {TYPE_3__ v1_msg; } ;
struct TYPE_6__ {int msg_type; } ;
struct nvsp_message {TYPE_4__ msg; TYPE_1__ hdr; } ;
struct netvsc_device {scalar_t__ recv_section_cnt; struct nvsp_message revoke_packet; } ;
struct net_device {int dummy; } ;
struct hv_device {TYPE_5__* channel; } ;
struct TYPE_10__ {scalar_t__ rescind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nvsp_message*,int ,int) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (struct net_device*,struct nvsp_message*) ;
 int FUNC_3 (TYPE_5__*,struct nvsp_message*,int,unsigned long,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hv_device *VAR_3,
       struct netvsc_device *VAR_4,
       struct net_device *VAR_5)
{
 struct nvsp_message *VAR_6;
 int VAR_7;







 if (VAR_4->recv_section_cnt) {

  VAR_6 = &VAR_4->revoke_packet;
  FUNC_0(VAR_6, 0, sizeof(struct nvsp_message));

  VAR_6->hdr.msg_type =
   VAR_1;
  VAR_6->msg.v1_msg.
  revoke_recv_buf.id = VAR_0;

  FUNC_2(VAR_5, VAR_6);

  VAR_7 = FUNC_3(VAR_3->channel,
           VAR_6,
           sizeof(struct nvsp_message),
           (unsigned long)VAR_6,
           VAR_2, 0);





  if (VAR_3->channel->rescind)
   VAR_7 = 0;




  if (VAR_7 != 0) {
   FUNC_1(VAR_5, "unable to send "
    "revoke receive buffer to netvsp\n");
   return;
  }
  VAR_4->recv_section_cnt = 0;
 }
}
