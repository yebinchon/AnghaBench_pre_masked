
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {int linkok; scalar_t__ PHYType; int * phys; scalar_t__ mem; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)



{
 struct netdev_private *VAR_6 = FUNC_2(VAR_5);
 unsigned int VAR_7, VAR_8 = 0x1000;

 VAR_6->linkok = 0;

 if (VAR_6->PHYType == VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
   if (FUNC_0(VAR_6->mem + VAR_0) & VAR_2) {
    VAR_6->linkok = 1;
    return;
   }
   FUNC_3(100);
  }
 } else {
  for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7) {
   if (FUNC_1(VAR_5, VAR_6->phys[0], VAR_3) & VAR_1) {
    VAR_6->linkok = 1;
    return;
   }
   FUNC_3(100);
  }
 }
}
