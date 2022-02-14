
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {size_t* data; } ;
struct htc_target {struct htc_endpoint* endpoint; } ;
struct htc_packet {scalar_t__ status; } ;
struct htc_frame_hdr {size_t eid; } ;
struct TYPE_2__ {int tx_credit_flow_enabled; } ;
struct htc_endpoint {TYPE_1__ pipe; } ;
struct ath6kl {struct htc_target* htc_target; } ;


 int FUNC_0 (char*) ;
 struct htc_packet* FUNC_1 (struct htc_target*,struct htc_endpoint*,struct sk_buff*) ;
 int FUNC_2 (struct htc_target*,struct htc_endpoint*,int *) ;
 int FUNC_3 (struct htc_target*,struct htc_packet*) ;

__attribute__((used)) static int FUNC_4(struct ath6kl *VAR_0, struct sk_buff *VAR_1)
{
 struct htc_target *VAR_2 = VAR_0->htc_target;
 struct htc_frame_hdr *VAR_3;
 struct htc_endpoint *VAR_4;
 struct htc_packet *VAR_5;
 u8 VAR_6, *VAR_7;

 VAR_7 = VAR_1->data;

 VAR_3 = (struct htc_frame_hdr *) VAR_7;

 VAR_6 = VAR_3->eid;
 VAR_4 = &VAR_2->endpoint[VAR_6];

 VAR_5 = FUNC_1(VAR_2, VAR_4, VAR_1);
 if (VAR_5 == ((void*)0)) {

  FUNC_0("HTC TX lookup failed!\n");
 } else {

  VAR_5->status = 0;
  FUNC_3(VAR_2, VAR_5);
 }
 VAR_1 = ((void*)0);

 if (!VAR_4->pipe.tx_credit_flow_enabled) {





  FUNC_2(VAR_2, VAR_4, ((void*)0));
 }

 return 0;
}
