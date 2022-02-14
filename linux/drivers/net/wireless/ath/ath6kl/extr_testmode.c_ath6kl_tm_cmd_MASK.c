
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct nlattr {int dummy; } ;
struct ath6kl {int wmi; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void*,int) ;
 void* FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,void*,int,int ,int *) ;
 struct ath6kl* FUNC_5 (struct wiphy*) ;

int FUNC_6(struct wiphy *VAR_6, struct wireless_dev *VAR_7,
    void *VAR_8, int VAR_9)
{
 struct ath6kl *VAR_10 = FUNC_5(VAR_6);
 struct nlattr *VAR_11[VAR_2 + 1];
 int VAR_12, VAR_13;
 void *VAR_14;

 VAR_12 = FUNC_4(VAR_11, VAR_2, VAR_8, VAR_9,
       VAR_5, ((void*)0));
 if (VAR_12)
  return VAR_12;

 if (!VAR_11[VAR_0])
  return -VAR_3;

 switch (FUNC_2(VAR_11[VAR_0])) {
 case 128:
  if (!VAR_11[VAR_1])
   return -VAR_3;

  VAR_14 = FUNC_1(VAR_11[VAR_1]);
  VAR_13 = FUNC_3(VAR_11[VAR_1]);

  FUNC_0(VAR_10->wmi, VAR_14, VAR_13);

  return 0;

  break;
 case 129:
 default:
  return -VAR_4;
 }
}
