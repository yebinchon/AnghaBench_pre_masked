
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct p54_xbow_synth {int padding; void* freq; void* magic2; void* magic1; } ;
struct p54_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 struct sk_buff* FUNC_2 (struct p54_common*,int ,int,int ,int ) ;
 int FUNC_3 (struct p54_common*,struct sk_buff*) ;
 struct p54_xbow_synth* FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct p54_common *VAR_4)
{
 struct sk_buff *VAR_5;
 struct p54_xbow_synth *VAR_6;

 VAR_5 = FUNC_2(VAR_4, VAR_3, sizeof(*VAR_6),
       VAR_2, VAR_1);
 if (FUNC_5(!VAR_5))
  return -VAR_0;

 VAR_6 = FUNC_4(VAR_5, sizeof(*VAR_6));
 VAR_6->magic1 = FUNC_0(0x1);
 VAR_6->magic2 = FUNC_0(0x2);
 VAR_6->freq = FUNC_0(5390);
 FUNC_1(VAR_6->padding, 0, sizeof(VAR_6->padding));
 FUNC_3(VAR_4, VAR_5);
 return 0;
}
