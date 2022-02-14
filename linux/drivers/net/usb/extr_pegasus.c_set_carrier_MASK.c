
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int phy; } ;
typedef TYPE_1__ pegasus_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 pegasus_t *VAR_3 = FUNC_0(VAR_2);
 u16 VAR_4;

 if (FUNC_3(VAR_3, VAR_3->phy, VAR_1, &VAR_4))
  return;

 if (VAR_4 & VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);
}
