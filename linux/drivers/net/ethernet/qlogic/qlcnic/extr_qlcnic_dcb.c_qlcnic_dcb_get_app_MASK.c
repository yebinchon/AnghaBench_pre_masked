
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct qlcnic_adapter {TYPE_1__* dcb; } ;
struct net_device {int dummy; } ;
struct dcb_app {int protocol; int selector; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct dcb_app*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_2);
 struct dcb_app VAR_6 = {
    .selector = VAR_3,
    .protocol = VAR_4,
        };

 if (!FUNC_2(VAR_1, &VAR_5->dcb->state))
  return -VAR_0;

 return FUNC_0(VAR_2, &VAR_6);
}
