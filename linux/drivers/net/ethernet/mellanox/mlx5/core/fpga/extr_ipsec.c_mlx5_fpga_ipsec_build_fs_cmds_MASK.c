
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int update_root_ft; int delete_fte; int update_fte; int create_fte; int destroy_flow_group; int create_flow_group; int modify_flow_table; int destroy_flow_table; int create_flow_table; } ;
struct TYPE_5__ {int update_root_ft; int delete_fte; int update_fte; int create_fte; int destroy_flow_group; int create_flow_group; int modify_flow_table; int destroy_flow_table; int create_flow_table; } ;
struct TYPE_4__ {int update_root_ft; int destroy_flow_group; int modify_flow_table; int destroy_flow_table; int create_flow_table; } ;


 int FUNC_0 (int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_1 (int ) ;

void FUNC_2(void)
{

 VAR_1.create_flow_table =
  FUNC_1(FUNC_0(0))->create_flow_table;
 VAR_1.destroy_flow_table =
  FUNC_1(FUNC_0(0))->destroy_flow_table;
 VAR_1.modify_flow_table =
  FUNC_1(FUNC_0(0))->modify_flow_table;
 VAR_1.create_flow_group =
  VAR_3;
 VAR_1.destroy_flow_group =
   FUNC_1(FUNC_0(0))->destroy_flow_group;
 VAR_1.create_fte =
  VAR_5;
 VAR_1.update_fte =
  VAR_9;
 VAR_1.delete_fte =
  VAR_7;
 VAR_1.update_root_ft =
  FUNC_1(FUNC_0(0))->update_root_ft;


 VAR_0.create_flow_table =
  FUNC_1(FUNC_0(1))->create_flow_table;
 VAR_0.destroy_flow_table =
  FUNC_1(FUNC_0(1))->destroy_flow_table;
 VAR_0.modify_flow_table =
  FUNC_1(FUNC_0(1))->modify_flow_table;
 VAR_0.create_flow_group =
  VAR_2;
 VAR_0.destroy_flow_group =
  FUNC_1(FUNC_0(1))->destroy_flow_group;
 VAR_0.create_fte =
  VAR_4;
 VAR_0.update_fte =
  VAR_8;
 VAR_0.delete_fte =
  VAR_6;
 VAR_0.update_root_ft =
  FUNC_1(FUNC_0(1))->update_root_ft;
}
