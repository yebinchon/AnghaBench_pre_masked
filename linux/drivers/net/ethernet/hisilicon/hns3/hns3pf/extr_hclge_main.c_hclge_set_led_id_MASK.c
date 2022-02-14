
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct hclge_vport* FUNC_0 (struct hnae3_handle*) ;
 int FUNC_1 (struct hclge_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_3,
       enum ethtool_phys_id_state VAR_4)
{
 struct hclge_vport *VAR_5 = FUNC_0(VAR_3);
 struct hclge_dev *VAR_6 = VAR_5->back;

 switch (VAR_4) {
 case 129:
  return FUNC_1(VAR_6, VAR_2);
 case 128:
  return FUNC_1(VAR_6, VAR_1);
 default:
  return -VAR_0;
 }
}
