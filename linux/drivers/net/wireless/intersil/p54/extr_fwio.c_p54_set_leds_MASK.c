
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_led {void** delay; void** mask; void* flags; } ;
struct p54_common {int softled_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;
 struct p54_led* FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct p54_common *VAR_4)
{
 struct sk_buff *VAR_5;
 struct p54_led *VAR_6;

 VAR_5 = FUNC_1(VAR_4, VAR_3, sizeof(*VAR_6),
       VAR_2, VAR_1);
 if (FUNC_4(!VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_5, sizeof(*VAR_6));
 VAR_6->flags = FUNC_0(0x0003);
 VAR_6->mask[0] = VAR_6->mask[1] = FUNC_0(VAR_4->softled_state);
 VAR_6->delay[0] = FUNC_0(1);
 VAR_6->delay[1] = FUNC_0(0);
 FUNC_2(VAR_4, VAR_5);
 return 0;
}
