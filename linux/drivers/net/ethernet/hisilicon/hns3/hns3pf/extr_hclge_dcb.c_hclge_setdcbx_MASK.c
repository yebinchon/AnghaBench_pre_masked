
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct net_device* netdev; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int dcbx_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hnae3_handle*,int ,struct net_device*,char*,int) ;

__attribute__((used)) static u8 FUNC_2(struct hnae3_handle *VAR_4, u8 VAR_5)
{
 struct hclge_vport *VAR_6 = FUNC_0(VAR_4);
 struct net_device *VAR_7 = VAR_4->kinfo.netdev;
 struct hclge_dev *VAR_8 = VAR_6->back;

 FUNC_1(VAR_4, VAR_3, VAR_7, "set dcbx: mode=%u\n", VAR_5);


 if ((VAR_5 & VAR_1) ||
     (VAR_5 & VAR_2) ||
     !(VAR_5 & VAR_0))
  return 1;

 VAR_8->dcbx_cap = VAR_5;

 return 0;
}
