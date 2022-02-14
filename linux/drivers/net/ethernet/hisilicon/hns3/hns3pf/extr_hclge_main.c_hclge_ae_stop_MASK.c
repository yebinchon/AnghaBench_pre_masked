
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tqps; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hclge_vport {struct hclge_dev* back; } ;
struct hclge_dev {scalar_t__ reset_type; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hclge_dev*,int) ;
 int FUNC_1 (struct hnae3_handle*) ;
 int FUNC_2 (struct hclge_dev*,int) ;
 struct hclge_vport* FUNC_3 (struct hnae3_handle*) ;
 int FUNC_4 (struct hclge_dev*) ;
 int FUNC_5 (struct hnae3_handle*,int) ;
 int FUNC_6 (struct hnae3_handle*) ;
 int FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct hnae3_handle *VAR_3)
{
 struct hclge_vport *VAR_4 = FUNC_3(VAR_3);
 struct hclge_dev *VAR_5 = VAR_4->back;
 int VAR_6;

 FUNC_8(VAR_0, &VAR_5->state);

 FUNC_1(VAR_3);




 if (FUNC_9(VAR_1, &VAR_5->state) &&
     VAR_5->reset_type != VAR_2) {
  FUNC_4(VAR_5);
  FUNC_7(VAR_5);
  return;
 }

 for (VAR_6 = 0; VAR_6 < VAR_3->kinfo.num_tqps; VAR_6++)
  FUNC_5(VAR_3, VAR_6);

 FUNC_2(VAR_5, 0);


 FUNC_0(VAR_5, 0);

 FUNC_4(VAR_5);


 FUNC_6(VAR_3);
 FUNC_7(VAR_5);
}
