
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct target_core_fabric_ops {int fabric_drop_tpg; int fabric_make_tpg; int fabric_drop_wwn; int fabric_make_wwn; int check_stop_free; int aborted_task; int queue_tm_rsp; int queue_status; int queue_data_in; int get_cmd_state; int set_default_node_attributes; int write_pending; int sess_get_index; int release_cmd; int tpg_get_inst_index; int tpg_check_prod_mode_write_protect; int tpg_check_demo_mode_write_protect; int tpg_check_demo_mode_cache; int tpg_check_demo_mode; int tpg_get_tag; int tpg_get_wwn; scalar_t__ fabric_name; scalar_t__ fabric_alias; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(const struct target_core_fabric_ops *VAR_2)
{
 if (VAR_2->fabric_alias) {
  if (FUNC_1(VAR_2->fabric_alias) >= VAR_1) {
   FUNC_0("Passed alias: %s exceeds "
    "TARGET_FABRIC_NAME_SIZE\n", VAR_2->fabric_alias);
   return -VAR_0;
  }
 }
 if (!VAR_2->fabric_name) {
  FUNC_0("Missing tfo->fabric_name\n");
  return -VAR_0;
 }
 if (FUNC_1(VAR_2->fabric_name) >= VAR_1) {
  FUNC_0("Passed name: %s exceeds "
   "TARGET_FABRIC_NAME_SIZE\n", VAR_2->fabric_name);
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_wwn) {
  FUNC_0("Missing tfo->tpg_get_wwn()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_tag) {
  FUNC_0("Missing tfo->tpg_get_tag()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_demo_mode) {
  FUNC_0("Missing tfo->tpg_check_demo_mode()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_demo_mode_cache) {
  FUNC_0("Missing tfo->tpg_check_demo_mode_cache()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_demo_mode_write_protect) {
  FUNC_0("Missing tfo->tpg_check_demo_mode_write_protect()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_check_prod_mode_write_protect) {
  FUNC_0("Missing tfo->tpg_check_prod_mode_write_protect()\n");
  return -VAR_0;
 }
 if (!VAR_2->tpg_get_inst_index) {
  FUNC_0("Missing tfo->tpg_get_inst_index()\n");
  return -VAR_0;
 }
 if (!VAR_2->release_cmd) {
  FUNC_0("Missing tfo->release_cmd()\n");
  return -VAR_0;
 }
 if (!VAR_2->sess_get_index) {
  FUNC_0("Missing tfo->sess_get_index()\n");
  return -VAR_0;
 }
 if (!VAR_2->write_pending) {
  FUNC_0("Missing tfo->write_pending()\n");
  return -VAR_0;
 }
 if (!VAR_2->set_default_node_attributes) {
  FUNC_0("Missing tfo->set_default_node_attributes()\n");
  return -VAR_0;
 }
 if (!VAR_2->get_cmd_state) {
  FUNC_0("Missing tfo->get_cmd_state()\n");
  return -VAR_0;
 }
 if (!VAR_2->queue_data_in) {
  FUNC_0("Missing tfo->queue_data_in()\n");
  return -VAR_0;
 }
 if (!VAR_2->queue_status) {
  FUNC_0("Missing tfo->queue_status()\n");
  return -VAR_0;
 }
 if (!VAR_2->queue_tm_rsp) {
  FUNC_0("Missing tfo->queue_tm_rsp()\n");
  return -VAR_0;
 }
 if (!VAR_2->aborted_task) {
  FUNC_0("Missing tfo->aborted_task()\n");
  return -VAR_0;
 }
 if (!VAR_2->check_stop_free) {
  FUNC_0("Missing tfo->check_stop_free()\n");
  return -VAR_0;
 }





 if (!VAR_2->fabric_make_wwn) {
  FUNC_0("Missing tfo->fabric_make_wwn()\n");
  return -VAR_0;
 }
 if (!VAR_2->fabric_drop_wwn) {
  FUNC_0("Missing tfo->fabric_drop_wwn()\n");
  return -VAR_0;
 }
 if (!VAR_2->fabric_make_tpg) {
  FUNC_0("Missing tfo->fabric_make_tpg()\n");
  return -VAR_0;
 }
 if (!VAR_2->fabric_drop_tpg) {
  FUNC_0("Missing tfo->fabric_drop_tpg()\n");
  return -VAR_0;
 }

 return 0;
}
