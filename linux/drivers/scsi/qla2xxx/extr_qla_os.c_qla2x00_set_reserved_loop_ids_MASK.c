
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int loop_id_map; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct qla_hw_data *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_3))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_1(VAR_4, VAR_3->loop_id_map);
 FUNC_1(VAR_1, VAR_3->loop_id_map);
 FUNC_1(VAR_0, VAR_3->loop_id_map);
}
