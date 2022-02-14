
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {struct ath6kl* ar; } ;
struct ath6kl {int wiphy; } ;


 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ath6kl_vif *VAR_0)
{
 struct ath6kl *VAR_1 = VAR_0->ar;
 bool VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2)
  return;

 FUNC_1(VAR_1->wiphy, 0);
}
