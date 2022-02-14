
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_q6v5 {int stop_bit; int state; int stop_done; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int) ;

int FUNC_3(struct qcom_q6v5 *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2->state,
        FUNC_0(VAR_2->stop_bit), FUNC_0(VAR_2->stop_bit));

 VAR_3 = FUNC_2(&VAR_2->stop_done, 5 * VAR_1);

 FUNC_1(VAR_2->state, FUNC_0(VAR_2->stop_bit), 0);

 return VAR_3 == 0 ? -VAR_0 : 0;
}
