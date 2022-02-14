
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_tqps; } ;
struct hnae3_handle {TYPE_1__ kinfo; } ;
struct hclgevf_dev {scalar_t__ reset_type; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hclgevf_dev* FUNC_0 (struct hnae3_handle*) ;
 scalar_t__ FUNC_1 (struct hnae3_handle*,int) ;
 int FUNC_2 (struct hnae3_handle*) ;
 int FUNC_3 (struct hclgevf_dev*,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct hnae3_handle *VAR_2)
{
 struct hclgevf_dev *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_4(VAR_0, &VAR_3->state);

 if (VAR_3->reset_type != VAR_1)
  for (VAR_4 = 0; VAR_4 < VAR_2->kinfo.num_tqps; VAR_4++)
   if (FUNC_1(VAR_2, VAR_4))
    break;

 FUNC_2(VAR_2);
 FUNC_3(VAR_3, 0);
}
