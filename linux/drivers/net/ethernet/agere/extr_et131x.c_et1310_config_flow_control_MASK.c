
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ duplex; } ;
struct et131x_adapter {scalar_t__ flow; scalar_t__ wanted_flow; TYPE_1__* netdev; } ;
struct TYPE_2__ {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct et131x_adapter*,int,int,char*) ;

__attribute__((used)) static void FUNC_1(struct et131x_adapter *VAR_4)
{
 struct phy_device *VAR_5 = VAR_4->netdev->phydev;

 if (VAR_5->duplex == VAR_0) {
  VAR_4->flow = VAR_2;
 } else {
  char VAR_6, VAR_7;

  FUNC_0(VAR_4, 5, 10, &VAR_6);
  FUNC_0(VAR_4, 5, 11, &VAR_7);

  if (VAR_6 && VAR_7) {
   VAR_4->flow = VAR_4->wanted_flow;
  } else if (VAR_6 && !VAR_7) {
   if (VAR_4->wanted_flow == VAR_1)
    VAR_4->flow = VAR_1;
   else
    VAR_4->flow = VAR_2;
  } else if (!VAR_6 && !VAR_7) {
   VAR_4->flow = VAR_2;
  } else {
   if (VAR_4->wanted_flow == VAR_1)
    VAR_4->flow = VAR_3;
   else
    VAR_4->flow = VAR_2;
  }
 }
}
