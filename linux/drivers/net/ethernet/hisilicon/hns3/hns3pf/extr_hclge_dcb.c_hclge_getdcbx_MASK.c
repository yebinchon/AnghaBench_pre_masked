
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int flag; int dcbx_cap; } ;


 int VAR_0 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static u8 FUNC_1(struct hnae3_handle *VAR_1)
{
 struct hclge_vport *VAR_2 = FUNC_0(VAR_1);
 struct hclge_dev *VAR_3 = VAR_2->back;

 if (VAR_3->flag & VAR_0)
  return 0;

 return VAR_3->dcbx_cap;
}
