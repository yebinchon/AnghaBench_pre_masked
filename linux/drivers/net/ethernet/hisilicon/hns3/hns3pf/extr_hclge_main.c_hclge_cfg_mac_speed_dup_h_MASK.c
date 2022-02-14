
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int dummy; } ;


 int FUNC_0 (struct hclge_dev*,int,int ) ;
 struct hclge_vport* FUNC_1 (struct hnae3_handle*) ;

__attribute__((used)) static int FUNC_2(struct hnae3_handle *VAR_0, int VAR_1,
         u8 VAR_2)
{
 struct hclge_vport *VAR_3 = FUNC_1(VAR_0);
 struct hclge_dev *VAR_4 = VAR_3->back;

 return FUNC_0(VAR_4, VAR_1, VAR_2);
}
