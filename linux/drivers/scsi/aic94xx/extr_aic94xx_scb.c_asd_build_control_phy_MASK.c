
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int opcode; } ;
struct control_phy {int phy_id; int sub_func; int port_type; int link_reset_retries; int conn_handle; int func_mask; int speed_mask; int hot_plug_delay; } ;
struct scb {TYPE_2__ header; struct control_phy control_phy; } ;
struct TYPE_7__ {int role; } ;
struct asd_phy {TYPE_4__* phy_desc; TYPE_3__ sas_phy; } ;
struct asd_ascb {int tasklet_complete; struct scb* scb; TYPE_1__* ha; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_5__ {struct asd_phy* phys; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_4__*) ;

void FUNC_2(struct asd_ascb *VAR_9, int VAR_10, u8 VAR_11)
{
 struct asd_phy *VAR_12 = &VAR_9->ha->phys[VAR_10];
 struct scb *VAR_13 = VAR_9->scb;
 struct control_phy *VAR_14 = &VAR_13->control_phy;

 VAR_13->header.opcode = VAR_1;
 VAR_14->phy_id = (u8) VAR_10;
 VAR_14->sub_func = VAR_11;

 switch (VAR_11) {
 case 129:
 case 130:

  VAR_14->hot_plug_delay = VAR_3;


  FUNC_1(&VAR_14->speed_mask, VAR_12->phy_desc);


  if (VAR_12->sas_phy.role == VAR_4)
   VAR_14->port_type = VAR_6 << 4;
  else if (VAR_12->sas_phy.role == VAR_5)
   VAR_14->port_type = VAR_6;
  else
   VAR_14->port_type =
    (VAR_6 << 4) | VAR_6;


  VAR_14->link_reset_retries = 10;


 case 128:

  VAR_14->func_mask = VAR_2;
  if (VAR_12->phy_desc->flags & VAR_0)
   VAR_14->func_mask &= ~VAR_7;
  else
   VAR_14->func_mask |= VAR_7;
 }

 VAR_14->conn_handle = FUNC_0(0xFFFF);

 VAR_9->tasklet_complete = VAR_8;
}
