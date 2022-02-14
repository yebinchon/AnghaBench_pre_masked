
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct asd_seq_data {int num_edbs; TYPE_1__** edb_arr; } ;
struct asd_ha_struct {struct asd_seq_data seq; } ;
typedef int gfp_t ;
struct TYPE_5__ {int vaddr; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct asd_ha_struct*,int ,int ) ;
 int FUNC_2 (struct asd_ha_struct*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**) ;
 TYPE_1__** FUNC_4 (int,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct asd_ha_struct *VAR_2, gfp_t VAR_3)
{
 struct asd_seq_data *VAR_4 = &VAR_2->seq;
 int VAR_5;

 VAR_4->edb_arr = FUNC_4(VAR_4->num_edbs, sizeof(*VAR_4->edb_arr),
         VAR_3);
 if (!VAR_4->edb_arr)
  return -VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_edbs; VAR_5++) {
  VAR_4->edb_arr[VAR_5] = FUNC_1(VAR_2, VAR_0,
           VAR_3);
  if (!VAR_4->edb_arr[VAR_5])
   goto Err_unroll;
  FUNC_5(VAR_4->edb_arr[VAR_5]->vaddr, 0, VAR_0);
 }

 FUNC_0("num_edbs:%d\n", VAR_4->num_edbs);

 return 0;

Err_unroll:
 for (VAR_5-- ; VAR_5 >= 0; VAR_5--)
  FUNC_2(VAR_2, VAR_4->edb_arr[VAR_5]);
 FUNC_3(VAR_4->edb_arr);
 VAR_4->edb_arr = ((void*)0);

 return -VAR_1;
}
