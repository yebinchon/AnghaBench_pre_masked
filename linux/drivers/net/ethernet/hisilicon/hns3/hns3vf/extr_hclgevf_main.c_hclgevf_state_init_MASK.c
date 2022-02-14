
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mbx_mutex; } ;
struct hclgevf_dev {int state; TYPE_1__ mbx_resp; int rst_service_task; int service_task; int service_timer; int mbx_service_task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hclgevf_dev *VAR_8)
{

 FUNC_0(&VAR_8->mbx_service_task, VAR_4);
 FUNC_1(VAR_2, &VAR_8->state);
 FUNC_1(VAR_1, &VAR_8->state);


 FUNC_4(&VAR_8->service_timer, VAR_7, 0);

 FUNC_0(&VAR_8->service_task, VAR_6);
 FUNC_1(VAR_3, &VAR_8->state);

 FUNC_0(&VAR_8->rst_service_task, VAR_5);

 FUNC_2(&VAR_8->mbx_resp.mbx_mutex);


 FUNC_3(VAR_0, &VAR_8->state);
}
