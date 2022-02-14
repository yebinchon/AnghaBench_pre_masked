
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {struct net_device* netdev; TYPE_1__* ahw; } ;
struct qlc_83xx_idc {int delay; int status; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct qlc_83xx_idc idc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct qlcnic_adapter*,int ,int ) ;
 int FUNC_5 (struct qlcnic_adapter*,int) ;
 int FUNC_6 (struct qlcnic_adapter*,int ) ;
 int VAR_3 ;
 int FUNC_7 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct qlcnic_adapter *VAR_4)
{
 struct qlc_83xx_idc *VAR_5 = &VAR_4->ahw->idc;
 struct net_device *VAR_6 = VAR_4->netdev;
 int VAR_7;

 FUNC_8(VAR_2, &VAR_5->status);
 FUNC_2(VAR_4);
 VAR_7 = FUNC_5(VAR_4, 1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_4, VAR_1);
 if (!VAR_7) {
  if (FUNC_1(VAR_6)) {
   VAR_7 = FUNC_7(VAR_4, VAR_6);
   if (!VAR_7)
    FUNC_3(VAR_6, VAR_0);
  }
 }

 FUNC_0(VAR_6);
 FUNC_4(VAR_4, VAR_3,
        VAR_5->delay);
 return VAR_7;
}
