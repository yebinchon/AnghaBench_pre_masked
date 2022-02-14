
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_6__ {int* advertising; size_t* link_config; int* supported; } ;
struct TYPE_5__ {int num_phys; size_t* req_flow_ctrl; void** req_duplex; void** req_line_speed; int * speed_cap_mask; TYPE_1__* phy; } ;
struct bnx2x {TYPE_3__ port; TYPE_2__ link_params; } ;
struct TYPE_4__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,void*,void*,size_t,int) ;
 int FUNC_1 (char*,size_t,...) ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_2 (struct bnx2x*) ;

__attribute__((used)) static void FUNC_3(struct bnx2x *VAR_36)
{
 u32 VAR_37, VAR_38, VAR_39 = 0;
 VAR_36->port.advertising[0] = 0;
 VAR_36->port.advertising[1] = 0;
 switch (VAR_36->link_params.num_phys) {
 case 1:
 case 2:
  VAR_39 = 1;
  break;
 case 3:
  VAR_39 = 2;
  break;
 }
 for (VAR_38 = 0; VAR_38 < VAR_39; VAR_38++) {
  VAR_36->link_params.req_duplex[VAR_38] = VAR_13;
  VAR_37 = VAR_36->port.link_config[VAR_38];
  switch (VAR_37 & VAR_17) {
  case 128:
   if (VAR_36->port.supported[VAR_38] & VAR_35) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_25;
    VAR_36->port.advertising[VAR_38] |=
     VAR_36->port.supported[VAR_38];
    if (VAR_36->link_params.phy[VAR_15].type ==
        VAR_18)
     VAR_36->port.advertising[VAR_38] |=
     (VAR_31 |
      VAR_30);
   } else {

    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_22;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_1 |
      VAR_9);
    continue;
   }
   break;

  case 133:
   if (VAR_36->port.supported[VAR_38] & VAR_32) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_19;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_6 |
      VAR_10);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
         VAR_37,
        VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;

  case 132:
   if (VAR_36->port.supported[VAR_38] & VAR_33) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_19;
    VAR_36->link_params.req_duplex[VAR_38] =
     VAR_14;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_7 |
      VAR_10);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
         VAR_37,
       VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;

  case 136:
   if (VAR_36->port.supported[VAR_38] &
       VAR_30) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_20;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_4 |
      VAR_10);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
         VAR_37,
       VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;

  case 135:
   if (VAR_36->port.supported[VAR_38] &
       VAR_31) {
    VAR_36->link_params.req_line_speed[VAR_38] =
        VAR_20;
    VAR_36->link_params.req_duplex[VAR_38] =
        VAR_14;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_5 |
      VAR_10);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_37,
        VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;

  case 131:
   if (VAR_36->port.supported[VAR_38] &
       VAR_29) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_21;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_3 |
      VAR_10);
   } else if (VAR_36->port.supported[VAR_38] &
       VAR_28) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_21;
    VAR_36->port.advertising[VAR_38] |=
     VAR_2;
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_37,
        VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;

  case 129:
   if (VAR_36->port.supported[VAR_38] &
       VAR_34) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_24;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_8 |
      VAR_10);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_37,
        VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;

  case 134:
   if (VAR_36->port.supported[VAR_38] &
       VAR_27) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_22;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_1 |
      VAR_9);
   } else if (VAR_36->port.supported[VAR_38] &
       VAR_26) {
    VAR_36->link_params.req_line_speed[VAR_38] =
     VAR_22;
    VAR_36->port.advertising[VAR_38] |=
     (VAR_0 |
      VAR_9);
   } else {
    FUNC_1("NVRAM config error. Invalid link_config 0x%x  speed_cap_mask 0x%x\n",
        VAR_37,
        VAR_36->link_params.speed_cap_mask[VAR_38]);
    return;
   }
   break;
  case 130:
   VAR_36->link_params.req_line_speed[VAR_38] = VAR_23;

   break;
  default:
   FUNC_1("NVRAM config error. BAD link speed link_config 0x%x\n",
      VAR_37);
    VAR_36->link_params.req_line_speed[VAR_38] =
       VAR_25;
    VAR_36->port.advertising[VAR_38] =
      VAR_36->port.supported[VAR_38];
   break;
  }

  VAR_36->link_params.req_flow_ctrl[VAR_38] = (VAR_37 &
      VAR_16);
  if (VAR_36->link_params.req_flow_ctrl[VAR_38] ==
      VAR_11) {
   if (!(VAR_36->port.supported[VAR_38] & VAR_35))
    VAR_36->link_params.req_flow_ctrl[VAR_38] =
       VAR_12;
   else
    FUNC_2(VAR_36);
  }

  FUNC_0("req_line_speed %d  req_duplex %d req_flow_ctrl 0x%x advertising 0x%x\n",
          VAR_36->link_params.req_line_speed[VAR_38],
          VAR_36->link_params.req_duplex[VAR_38],
          VAR_36->link_params.req_flow_ctrl[VAR_38],
          VAR_36->port.advertising[VAR_38]);
 }
}
