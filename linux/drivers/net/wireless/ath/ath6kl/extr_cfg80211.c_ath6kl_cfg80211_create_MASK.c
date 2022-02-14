
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct ath6kl {struct wiphy* wiphy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct wiphy* FUNC_1 (int *,int) ;
 struct ath6kl* FUNC_2 (struct wiphy*) ;

struct ath6kl *FUNC_3(void)
{
 struct ath6kl *VAR_1;
 struct wiphy *VAR_2;


 VAR_2 = FUNC_1(&VAR_0, sizeof(struct ath6kl));

 if (!VAR_2) {
  FUNC_0("couldn't allocate wiphy device\n");
  return ((void*)0);
 }

 VAR_1 = FUNC_2(VAR_2);
 VAR_1->wiphy = VAR_2;

 return VAR_1;
}
