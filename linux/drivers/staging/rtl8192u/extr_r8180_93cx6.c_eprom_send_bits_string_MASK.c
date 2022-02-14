
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,short) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, short VAR_1[], int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_1(VAR_0, VAR_1[VAR_3]);
  FUNC_0(VAR_0);
 }
}
