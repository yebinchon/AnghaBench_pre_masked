
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct asd_seq_data {int num_escbs; TYPE_1__** escb_arr; } ;
struct asd_ha_struct {struct asd_seq_data seq; } ;
struct TYPE_3__ {int list; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct asd_ha_struct *VAR_0)
{
 struct asd_seq_data *VAR_1 = &VAR_0->seq;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_escbs; VAR_2++) {
  if (!FUNC_3(&VAR_1->escb_arr[VAR_2]->list))
   FUNC_2(&VAR_1->escb_arr[VAR_2]->list);

  FUNC_0(VAR_1->escb_arr[VAR_2]);
 }
 FUNC_1(VAR_1->escb_arr);
 VAR_1->escb_arr = ((void*)0);
}
