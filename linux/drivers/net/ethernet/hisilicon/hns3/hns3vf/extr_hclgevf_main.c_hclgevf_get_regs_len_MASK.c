
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tqp_intr_reg_addr_list ;
struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int num_tqps; int num_msi_used; } ;
typedef int ring_reg_addr_list ;
typedef int common_reg_addr_list ;
typedef int cmdq_reg_addr_list ;


 int VAR_0 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_1(struct hnae3_handle *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 struct hclgevf_dev *VAR_6 = FUNC_0(VAR_1);

 VAR_2 = sizeof(cmdq_reg_addr_list) / VAR_0 + 1;
 VAR_3 = sizeof(common_reg_addr_list) / VAR_0 + 1;
 VAR_4 = sizeof(ring_reg_addr_list) / VAR_0 + 1;
 VAR_5 = sizeof(tqp_intr_reg_addr_list) / VAR_0 + 1;

 return (VAR_2 + VAR_3 + VAR_4 * VAR_6->num_tqps +
  VAR_5 * (VAR_6->num_msi_used - 1)) * VAR_0;
}
