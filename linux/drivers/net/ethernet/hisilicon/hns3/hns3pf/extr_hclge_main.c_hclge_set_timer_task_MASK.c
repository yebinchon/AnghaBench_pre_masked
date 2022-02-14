
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {int state; int service_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 struct hclge_vport* FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclge_dev*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct hnae3_handle *VAR_3, bool VAR_4)
{
 struct hclge_vport *VAR_5 = FUNC_2(VAR_3);
 struct hclge_dev *VAR_6 = VAR_5->back;

 if (VAR_4) {
  FUNC_3(VAR_6, FUNC_4(VAR_2));
 } else {



  FUNC_5(VAR_0, &VAR_6->state);
  FUNC_0(&VAR_6->service_task);
  FUNC_1(VAR_1, &VAR_6->state);
 }
}
