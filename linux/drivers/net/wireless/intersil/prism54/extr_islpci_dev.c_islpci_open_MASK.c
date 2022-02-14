
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ iw_mode; } ;
typedef TYPE_1__ islpci_private ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2)
{
 u32 VAR_3;
 islpci_private *VAR_4 = FUNC_1(VAR_2);


 VAR_3 = FUNC_0(VAR_4,1);
 if (VAR_3) {
  FUNC_5(VAR_4);
  return VAR_3;
 }

 FUNC_4(VAR_2);






 if (VAR_4->iw_mode == VAR_1 || VAR_4->iw_mode == VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_3(VAR_2);

 return 0;
}
