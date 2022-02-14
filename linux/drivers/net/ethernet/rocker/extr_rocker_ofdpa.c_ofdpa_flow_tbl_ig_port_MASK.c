
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct ofdpa_port {int dummy; } ;
struct TYPE_3__ {int goto_tbl; void* in_pport_mask; void* in_pport; } ;
struct TYPE_4__ {TYPE_1__ ig_port; int tbl_id; int priority; } ;
struct ofdpa_flow_tbl_entry {TYPE_2__ key; } ;
typedef enum rocker_of_dpa_table_id { ____Placeholder_rocker_of_dpa_table_id } rocker_of_dpa_table_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ofdpa_flow_tbl_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ofdpa_port*,int,struct ofdpa_flow_tbl_entry*) ;

__attribute__((used)) static int FUNC_2(struct ofdpa_port *VAR_4, int VAR_5,
      u32 VAR_6, u32 VAR_7,
      enum rocker_of_dpa_table_id VAR_8)
{
 struct ofdpa_flow_tbl_entry *VAR_9;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->key.priority = VAR_2;
 VAR_9->key.tbl_id = VAR_3;
 VAR_9->key.ig_port.in_pport = VAR_6;
 VAR_9->key.ig_port.in_pport_mask = VAR_7;
 VAR_9->key.ig_port.goto_tbl = VAR_8;

 return FUNC_1(VAR_4, VAR_5, VAR_9);
}
