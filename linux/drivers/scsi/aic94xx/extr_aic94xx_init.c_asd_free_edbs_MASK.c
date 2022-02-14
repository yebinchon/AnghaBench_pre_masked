
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asd_seq_data {int num_edbs; int * edb_arr; } ;
struct asd_ha_struct {struct asd_seq_data seq; } ;


 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct asd_ha_struct *VAR_0)
{
 struct asd_seq_data *VAR_1 = &VAR_0->seq;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_edbs; VAR_2++)
  FUNC_0(VAR_0, VAR_1->edb_arr[VAR_2]);
 FUNC_1(VAR_1->edb_arr);
 VAR_1->edb_arr = ((void*)0);
}
