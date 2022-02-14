
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device** VAR_1 ;
 int FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1[VAR_3]) {
   struct net_device *VAR_4 = VAR_1[VAR_3];

   FUNC_0(VAR_4);
  }
 }
}
