
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct sk_buff {int dummy; } ;
struct brcms_c_info {void* beacon_dtim_period; void* beacon_tim_offset; struct sk_buff* beacon; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_c_info*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

void FUNC_3(struct brcms_c_info *VAR_1, struct sk_buff *VAR_2,
       u16 VAR_3, u16 VAR_4)
{
 if (!VAR_2)
  return;
 if (VAR_1->beacon)
  FUNC_1(VAR_1->beacon);
 VAR_1->beacon = VAR_2;


 FUNC_2(VAR_1->beacon, VAR_0);
 VAR_1->beacon_tim_offset = VAR_3;
 VAR_1->beacon_dtim_period = VAR_4;
 FUNC_0(VAR_1);
}
