
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef void* u32 ;
typedef int u16 ;
struct priority_cos {int priority; size_t cos; } ;
struct bnx2x_func_tx_start_params {int dcb_enabled; int dont_add_pri_0_en; void** dcb_outer_pri; scalar_t__ dcb_version; struct priority_cos* traffic_type_to_priority_cos; } ;
struct TYPE_7__ {size_t num_of_cos; TYPE_2__* cos_params; } ;
struct TYPE_5__ {void** traffic_type_priority; } ;
struct TYPE_8__ {TYPE_3__ ets; TYPE_1__ app; } ;
struct bnx2x {int dcbx_error; TYPE_4__ dcbx_port_params; scalar_t__ dcb_version; } ;
struct TYPE_6__ {int pri_bitmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_func_tx_start_params*) ;
 int VAR_3 ;
 int FUNC_4 (struct bnx2x_func_tx_start_params*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct bnx2x *VAR_4,
     struct bnx2x_func_tx_start_params *VAR_5)
{
 u16 VAR_6 = 0;
 u8 VAR_7 = 0, VAR_8 = 0;
 struct priority_cos *VAR_9;
 u32 *VAR_10 = VAR_4->dcbx_port_params.app.traffic_type_priority;
 int VAR_11 = FUNC_1(VAR_4, VAR_3) &&
        FUNC_0(FUNC_2(VAR_4, VAR_3),
           1 << VAR_1);

 FUNC_4(VAR_5, 0, sizeof(*VAR_5));


 if ((VAR_4->dcbx_error & VAR_0) && !VAR_11)
  return;


 VAR_9 = VAR_5->traffic_type_to_priority_cos;


 VAR_5->dcb_version = ++VAR_4->dcb_version;
 VAR_5->dcb_enabled = 1;


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9[VAR_8].priority = VAR_10[VAR_8];
  VAR_6 = 1 << VAR_9[VAR_8].priority;



  for (VAR_7 = 0; VAR_7 < VAR_4->dcbx_port_params.ets.num_of_cos; VAR_7++)
   if (VAR_4->dcbx_port_params.ets.cos_params[VAR_7].
      pri_bitmask & VAR_6)
     VAR_9[VAR_8].cos = VAR_7;

  VAR_5->dcb_outer_pri[VAR_8] = VAR_10[VAR_8];
 }


 VAR_5->dont_add_pri_0_en = 1;

 FUNC_3(VAR_4, VAR_5);
}
