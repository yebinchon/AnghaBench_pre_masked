
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int napi; scalar_t__ RxDescArray; struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct rtl8169_private*) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct rtl8169_private *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->dev;
 int VAR_3;

 FUNC_0(&VAR_1->napi);
 FUNC_2(VAR_2);
 FUNC_9();

 FUNC_4(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_6(VAR_1->RxDescArray + VAR_3);

 FUNC_7(VAR_1);
 FUNC_5(VAR_1);

 FUNC_1(&VAR_1->napi);
 FUNC_8(VAR_1);
 FUNC_3(VAR_2);
}
