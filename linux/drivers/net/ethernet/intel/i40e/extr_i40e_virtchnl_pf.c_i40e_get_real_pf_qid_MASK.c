
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct i40e_vf {int num_tc; TYPE_1__* ch; scalar_t__ adq_enabled; } ;
struct TYPE_2__ {scalar_t__ num_qps; scalar_t__ vsi_id; } ;


 scalar_t__ FUNC_0 (struct i40e_vf*,scalar_t__,scalar_t__) ;

__attribute__((used)) static u16 FUNC_1(struct i40e_vf *VAR_0, u16 VAR_1, u16 VAR_2)
{
 int VAR_3;

 if (VAR_0->adq_enabled) {




  for (VAR_3 = 0; VAR_3 < VAR_0->num_tc; VAR_3++) {
   if (VAR_2 < VAR_0->ch[VAR_3].num_qps) {
    VAR_1 = VAR_0->ch[VAR_3].vsi_id;
    break;
   }



   VAR_2 -= VAR_0->ch[VAR_3].num_qps;
   }
  }

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
