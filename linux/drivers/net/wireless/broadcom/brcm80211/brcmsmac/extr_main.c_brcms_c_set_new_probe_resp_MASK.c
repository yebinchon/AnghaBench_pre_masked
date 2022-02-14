
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct brcms_c_info {struct sk_buff* probe_resp; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcms_c_info*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;

void FUNC_3(struct brcms_c_info *VAR_1,
    struct sk_buff *VAR_2)
{
 if (!VAR_2)
  return;
 if (VAR_1->probe_resp)
  FUNC_1(VAR_1->probe_resp);
 VAR_1->probe_resp = VAR_2;


 FUNC_2(VAR_1->probe_resp, VAR_0);
 FUNC_0(VAR_1, 0);
}
