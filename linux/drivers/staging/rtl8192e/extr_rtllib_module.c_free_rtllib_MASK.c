
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {int crypt_info; int * pHTInfo; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct rtllib_device*) ;
 int FUNC_5 (struct rtllib_device*) ;

void FUNC_6(struct net_device *VAR_0)
{
 struct rtllib_device *VAR_1 = (struct rtllib_device *)
          FUNC_3(VAR_0);

 FUNC_1(VAR_1->pHTInfo);
 VAR_1->pHTInfo = ((void*)0);
 FUNC_5(VAR_1);

 FUNC_2(&VAR_1->crypt_info);

 FUNC_4(VAR_1);
 FUNC_0(VAR_0);
}
