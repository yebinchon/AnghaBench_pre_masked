
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct dlm_lock_data {int dummy; } ;


 int VAR_0 ;
 struct dlm_lock_data* FUNC_0 (struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ,int) ;

__attribute__((used)) static struct dlm_lock_data *FUNC_2(struct sk_buff *VAR_1)
{
 struct nlattr *VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0, sizeof(struct dlm_lock_data));
 if (!VAR_2)
  return ((void*)0);
 return FUNC_0(VAR_2);
}
