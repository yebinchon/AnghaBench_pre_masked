
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int rtl8150_t ;


 int VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (int *,int ,int,short*) ;
 int * FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 rtl8150_t *VAR_3 = FUNC_1(VAR_2);
 short VAR_4;

 FUNC_0(VAR_3, VAR_0, 2, &VAR_4);
 if (VAR_4 & VAR_1)
  FUNC_3(VAR_2);
 else
  FUNC_2(VAR_2);
}
