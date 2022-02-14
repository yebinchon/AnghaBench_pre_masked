
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hclge_mac {int mac_addr; } ;
struct TYPE_2__ {struct hclge_mac mac; } ;
struct hclge_dev {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclge_dev*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_2)
{
 struct hclge_mac *VAR_3 = &VAR_2->hw.mac;

 return FUNC_0(VAR_2, VAR_3->mac_addr,
         VAR_0,
         VAR_1);
}
