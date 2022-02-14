
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {int info0; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct htt_rx_desc {TYPE_2__ msdu_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff_head*) ;
 scalar_t__ FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (struct sk_buff_head*,struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff_head *VAR_4,
           struct sk_buff_head *VAR_5)
{
 struct sk_buff *VAR_6;
 struct htt_rx_desc *VAR_7;

 if (FUNC_5(VAR_4))
  return -VAR_2;

 if (FUNC_0(!FUNC_5(VAR_5)))
  return -VAR_1;

 while ((VAR_6 = FUNC_2(VAR_4))) {
  FUNC_3(VAR_5, VAR_6);

  VAR_7 = (void *)VAR_6->data - sizeof(*VAR_7);
  if (VAR_7->msdu_end.common.info0 &
      FUNC_1(VAR_3))
   break;
 }

 VAR_6 = FUNC_4(VAR_5);
 VAR_7 = (void *)VAR_6->data - sizeof(*VAR_7);
 if (!(VAR_7->msdu_end.common.info0 &
       FUNC_1(VAR_3))) {
  FUNC_6(VAR_5, VAR_4);
  return -VAR_0;
 }

 return 0;
}
