
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_handle {int dummy; } ;
struct hclgevf_dev {int state; int service_task; int service_timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 struct hclgevf_dev* FUNC_3 (struct hnae3_handle*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hnae3_handle *VAR_3, bool VAR_4)
{
 struct hclgevf_dev *VAR_5 = FUNC_3(VAR_3);

 if (VAR_4) {
  FUNC_4(&VAR_5->service_timer, VAR_2 + VAR_1);
 } else {
  FUNC_2(&VAR_5->service_timer);
  FUNC_0(&VAR_5->service_task);
  FUNC_1(VAR_0, &VAR_5->state);
 }
}
