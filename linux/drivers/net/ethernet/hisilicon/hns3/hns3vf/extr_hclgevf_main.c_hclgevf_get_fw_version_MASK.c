
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int fw_version; } ;


 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static u32 FUNC_1(struct hnae3_handle *VAR_0)
{
 struct hclgevf_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->fw_version;
}
