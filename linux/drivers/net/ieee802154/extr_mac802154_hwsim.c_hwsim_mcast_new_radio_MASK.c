
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct hwsim_phy {int dummy; } ;
struct genl_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct hwsim_phy*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 struct sk_buff* FUNC_3 (int ,int ) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct sk_buff*,struct genl_info*) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_7(struct genl_info *VAR_4, struct hwsim_phy *VAR_5)
{
 struct sk_buff *VAR_6;
 void *VAR_7;

 VAR_6 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_4(VAR_6, 0, 0, &VAR_3, 0,
      VAR_2);
 if (!VAR_7)
  goto out_err;

 if (FUNC_0(VAR_6, VAR_5) < 0)
  goto out_err;

 FUNC_2(VAR_6, VAR_7);

 FUNC_5(VAR_6, VAR_4);
 return;

out_err:
 FUNC_1(VAR_6, VAR_7);
 FUNC_6(VAR_6);
}
