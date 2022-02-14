
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hclge_firmware_compat_cmd {int compat; } ;
struct hclge_dev {int hw; } ;
struct hclge_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct hclge_desc*,int) ;
 int FUNC_2 (struct hclge_desc*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hclge_dev *VAR_3)
{
 struct hclge_firmware_compat_cmd *VAR_4;
 struct hclge_desc VAR_5;
 u32 VAR_6 = 0;

 FUNC_2(&VAR_5, VAR_2, 0);

 VAR_4 = (struct hclge_firmware_compat_cmd *)VAR_5.data;

 FUNC_3(VAR_6, VAR_0, 1);
 FUNC_3(VAR_6, VAR_1, 1);
 VAR_4->compat = FUNC_0(VAR_6);

 return FUNC_1(&VAR_3->hw, &VAR_5, 1);
}
