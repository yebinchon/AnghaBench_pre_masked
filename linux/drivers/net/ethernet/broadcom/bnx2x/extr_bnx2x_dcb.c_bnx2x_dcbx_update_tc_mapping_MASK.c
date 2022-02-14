
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {size_t num_of_cos; TYPE_3__* cos_params; } ;
struct TYPE_4__ {TYPE_2__ ets; } ;
struct bnx2x {size_t* prio_to_cos; TYPE_1__ dcbx_port_params; } ;
struct TYPE_6__ {int pri_bitmask; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,size_t,size_t) ;
 int FUNC_1 (struct bnx2x*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct bnx2x *VAR_3)
{
 u8 VAR_4, VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3->dcbx_port_params.ets.num_of_cos; VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   if (VAR_3->dcbx_port_params.ets.cos_params[VAR_5].pri_bitmask
       & (1 << VAR_4)) {
    VAR_3->prio_to_cos[VAR_4] = VAR_5;
    FUNC_0(VAR_1,
       "tx_mapping %d --> %d\n", VAR_4, VAR_5);
   }
  }
 }





 FUNC_1(VAR_3, VAR_2, 0);
}
