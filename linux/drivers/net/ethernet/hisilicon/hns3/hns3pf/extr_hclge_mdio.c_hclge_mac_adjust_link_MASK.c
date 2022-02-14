
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* phydev; } ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ link; int speed; int duplex; } ;


 int FUNC_0 (struct hclge_dev*) ;
 int FUNC_1 (struct hclge_dev*,int,int) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct net_device*,char*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct hnae3_handle *VAR_1 = *((void **)FUNC_4(VAR_0));
 struct hclge_vport *VAR_2 = FUNC_2(VAR_1);
 struct hclge_dev *VAR_3 = VAR_2->back;
 int VAR_4, VAR_5;
 int VAR_6;


 if (VAR_0->phydev->link == 0)
  return;

 VAR_5 = VAR_0->phydev->speed;
 VAR_4 = VAR_0->phydev->duplex;

 VAR_6 = FUNC_1(VAR_3, VAR_5, VAR_4);
 if (VAR_6)
  FUNC_3(VAR_0, "failed to adjust link.\n");

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  FUNC_3(VAR_0, "failed to configure flow control.\n");
}
