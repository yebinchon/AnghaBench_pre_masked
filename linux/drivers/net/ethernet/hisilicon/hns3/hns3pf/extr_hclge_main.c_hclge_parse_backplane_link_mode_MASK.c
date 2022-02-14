
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct hclge_mac {int supported; } ;
struct TYPE_3__ {struct hclge_mac mac; } ;
struct hclge_dev {TYPE_2__* pdev; TYPE_1__ hw; } ;
struct TYPE_4__ {int revision; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hclge_mac*) ;
 int FUNC_1 (struct hclge_mac*,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hclge_dev *VAR_3,
         u8 VAR_4)
{
 struct hclge_mac *VAR_5 = &VAR_3->hw.mac;

 FUNC_1(VAR_5, VAR_4);
 if (VAR_3->pdev->revision >= 0x21)
  FUNC_0(VAR_5);
 FUNC_2(VAR_0, VAR_5->supported);
 FUNC_2(VAR_2, VAR_5->supported);
 FUNC_2(VAR_1, VAR_5->supported);
}
