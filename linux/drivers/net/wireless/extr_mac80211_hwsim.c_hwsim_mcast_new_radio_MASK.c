
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hwsim_new_radio_params {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int,struct hwsim_new_radio_params*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_2 (int ,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct sk_buff*,struct genl_info*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(int VAR_4, struct genl_info *VAR_5,
      struct hwsim_new_radio_params *VAR_6)
{
 struct sk_buff *VAR_7;
 void *VAR_8;

 VAR_7 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_7)
  return;

 VAR_8 = FUNC_3(VAR_7, 0, 0, &VAR_3, 0,
      VAR_2);
 if (!VAR_8)
  goto out_err;

 if (FUNC_0(VAR_7, VAR_4, VAR_6) < 0)
  goto out_err;

 FUNC_1(VAR_7, VAR_8);

 FUNC_4(VAR_7, VAR_5);
 return;

out_err:
 FUNC_5(VAR_7);
}
