
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct htc_target {int hif_dev; TYPE_1__* hif; struct htc_endpoint* endpoint; } ;
struct htc_frame_hdr {size_t endpoint_id; size_t flags; int payload_len; } ;
struct htc_endpoint {int ul_pipeid; } ;
struct TYPE_2__ {int (* send ) (int ,int ,struct sk_buff*) ;} ;


 int FUNC_0 (int ) ;
 struct htc_frame_hdr* FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct htc_target *VAR_0, struct sk_buff* VAR_1,
     u16 VAR_2, u8 VAR_3, u8 VAR_4)

{
 struct htc_frame_hdr *VAR_5;
 struct htc_endpoint *VAR_6 = &VAR_0->endpoint[VAR_4];
 int VAR_7;

 VAR_5 = FUNC_1(VAR_1, sizeof(struct htc_frame_hdr));
 VAR_5->endpoint_id = VAR_4;
 VAR_5->flags = VAR_3;
 VAR_5->payload_len = FUNC_0(VAR_2);

 VAR_7 = VAR_0->hif->send(VAR_0->hif_dev, VAR_6->ul_pipeid, VAR_1);

 return VAR_7;
}
