
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wsm_update_ie {int count; int* ies; int length; int what; } ;
struct sk_buff {int* data; } ;
struct cw1200_common {int vif; int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cw1200_common*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int ,int ,int*,int*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct cw1200_common*) ;
 int FUNC_5 (struct cw1200_common*,struct wsm_update_ie*) ;

__attribute__((used)) static int FUNC_6(struct cw1200_common *VAR_2, bool VAR_3)
{
 struct sk_buff *VAR_4;
 struct wsm_update_ie VAR_5 = {
  .what = VAR_1,
  .count = 1,
 };
 u16 VAR_6, VAR_7;

 FUNC_3("[AP] mcast: %s.\n", VAR_3 ? "ena" : "dis");

 VAR_4 = FUNC_2(VAR_2->hw, VAR_2->vif,
   &VAR_6, &VAR_7);
 if (!VAR_4) {
  if (!FUNC_0(VAR_2, 1))
   FUNC_4(VAR_2);
  return -VAR_0;
 }

 if (VAR_6 && VAR_7 >= 6) {



  VAR_4->data[VAR_6 + 2] = 0;


  if (VAR_3)
   VAR_4->data[VAR_6 + 4] |= 1;
  else
   VAR_4->data[VAR_6 + 4] &= ~1;
 }

 VAR_5.ies = &VAR_4->data[VAR_6];
 VAR_5.length = VAR_7;
 FUNC_5(VAR_2, &VAR_5);

 FUNC_1(VAR_4);

 return 0;
}
