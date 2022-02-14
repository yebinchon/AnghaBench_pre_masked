
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct bnx2x_dcbx_cos_params {int pri_bitmask; } ;
struct TYPE_5__ {struct bnx2x_dcbx_cos_params* cos_params; } ;
struct TYPE_4__ {int* traffic_type_priority; } ;
struct TYPE_6__ {TYPE_2__ ets; TYPE_1__ app; } ;
struct bnx2x {TYPE_3__ dcbx_port_params; } ;


 int FUNC_0 (struct bnx2x_dcbx_cos_params*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,int) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_4)
{
 int VAR_5;
 u32 VAR_6 = (1 << VAR_3) - 1;
 u32 *VAR_7 = VAR_4->dcbx_port_params.app.traffic_type_priority;
 u32 VAR_8 = 1 << VAR_7[VAR_2];
 struct bnx2x_dcbx_cos_params *VAR_9 =
   VAR_4->dcbx_port_params.ets.cos_params;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_6 &= ~(1 << VAR_7[VAR_5]);


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->dcbx_port_params.ets.cos_params); VAR_5++) {
  if (VAR_9[VAR_5].pri_bitmask & VAR_8) {

   FUNC_1(VAR_0,
      "cos %d extended with 0x%08x\n", VAR_5, VAR_6);
   VAR_9[VAR_5].pri_bitmask |= VAR_6;
   break;
  }
 }
}
