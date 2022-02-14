
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct htc_target {int htc_flags; } ;
struct htc_setup_comp_ext_msg {int msg_id; } ;
struct htc_packet {struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct htc_target*,struct htc_packet*) ;
 int FUNC_3 (int ) ;
 struct htc_packet* FUNC_4 (struct htc_target*) ;
 int FUNC_5 (struct htc_target*) ;
 int FUNC_6 (struct htc_setup_comp_ext_msg*,int ,int) ;
 int FUNC_7 (struct htc_packet*,int *,int *,int,int ,int ) ;
 struct htc_setup_comp_ext_msg* FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct htc_target *VAR_6)
{
 struct sk_buff *VAR_7;
 struct htc_setup_comp_ext_msg *VAR_8;
 struct htc_packet *VAR_9;

 FUNC_5(VAR_6);


 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9 == ((void*)0)) {
  FUNC_0(1);
  return -VAR_2;
 }

 VAR_7 = VAR_9->skb;


 VAR_8 = FUNC_8(VAR_7, sizeof(*VAR_8));
 FUNC_6(VAR_8, 0, sizeof(struct htc_setup_comp_ext_msg));
 VAR_8->msg_id = FUNC_3(VAR_3);

 FUNC_1(VAR_0, "HTC using TX credit flow control\n");

 FUNC_7(VAR_9, ((void*)0), (u8 *) VAR_8,
    sizeof(struct htc_setup_comp_ext_msg),
    VAR_1, VAR_5);

 VAR_6->htc_flags |= VAR_4;

 return FUNC_2(VAR_6, VAR_9);
}
