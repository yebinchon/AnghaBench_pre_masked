
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asd_seq_data {int num_escbs; TYPE_1__** escb_arr; } ;
struct asd_ha_struct {struct asd_seq_data seq; } ;
struct TYPE_2__ {int tasklet_complete; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct asd_ha_struct*,TYPE_1__*,int) ;
 int VAR_0 ;

int FUNC_2(struct asd_ha_struct *VAR_1)
{
 struct asd_seq_data *VAR_2 = &VAR_1->seq;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_escbs; VAR_3++)
  VAR_2->escb_arr[VAR_3]->tasklet_complete = VAR_0;

 FUNC_0("posting %d escbs\n", VAR_3);
 return FUNC_1(VAR_1, VAR_2->escb_arr[0], VAR_2->num_escbs);
}
