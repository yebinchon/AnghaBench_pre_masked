
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mt76_dev {int macaddr; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (struct device_node*) ;

void
FUNC_6(struct mt76_dev *VAR_0)
{
 if (!FUNC_4(VAR_0->macaddr)) {
  FUNC_2(VAR_0->macaddr);
  FUNC_1(VAR_0->dev,
    "Invalid MAC address, using random address %pM\n",
    VAR_0->macaddr);
 }
}
