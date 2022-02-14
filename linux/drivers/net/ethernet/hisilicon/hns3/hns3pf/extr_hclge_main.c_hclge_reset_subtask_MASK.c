
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae3_ae_dev {int dummy; } ;
struct hclge_dev {scalar_t__ reset_type; int reset_request; int reset_pending; int last_reset_time; int pdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hclge_dev*) ;
 void* FUNC_1 (struct hnae3_ae_dev*,int *) ;
 int FUNC_2 (struct hclge_dev*) ;
 int VAR_1 ;
 struct hnae3_ae_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hclge_dev *VAR_2)
{
 struct hnae3_ae_dev *VAR_3 = FUNC_3(VAR_2->pdev);
 VAR_2->last_reset_time = VAR_1;
 VAR_2->reset_type = FUNC_1(VAR_3, &VAR_2->reset_pending);
 if (VAR_2->reset_type != VAR_0)
  FUNC_2(VAR_2);


 VAR_2->reset_type = FUNC_1(VAR_3, &VAR_2->reset_request);
 if (VAR_2->reset_type != VAR_0)
  FUNC_0(VAR_2);

 VAR_2->reset_type = VAR_0;
}
