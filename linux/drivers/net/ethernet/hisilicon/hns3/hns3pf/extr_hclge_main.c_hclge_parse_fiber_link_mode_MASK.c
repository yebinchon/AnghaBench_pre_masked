
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hclge_mac*,int) ;
 int FUNC_1 (struct hclge_mac*) ;
 int FUNC_2 (struct hclge_mac*,int) ;
 int FUNC_3 (struct hclge_mac*,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hclge_dev *VAR_5,
     u8 VAR_6)
{
 struct hclge_mac *VAR_7 = &VAR_5->hw.mac;

 if (VAR_6 & VAR_4)
  FUNC_4(VAR_0,
     VAR_7->supported);

 FUNC_3(VAR_7, VAR_6);
 FUNC_2(VAR_7, VAR_6);
 FUNC_0(VAR_7, VAR_6);
 if (VAR_5->pdev->revision >= 0x21)
  FUNC_1(VAR_7);

 FUNC_4(VAR_2, VAR_7->supported);
 FUNC_4(VAR_3, VAR_7->supported);
 FUNC_4(VAR_1, VAR_7->supported);
}
