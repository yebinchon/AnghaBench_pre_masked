
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* cmd_req_virt; int group_prom; int ind_group_prom; } ;
struct TYPE_8__ {TYPE_1__* item; } ;
struct TYPE_9__ {TYPE_2__ filter_set; int cmd_type; } ;
struct TYPE_7__ {int item_code; int value; } ;
typedef TYPE_4__ DFX_board_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(DFX_board_t *VAR_8)
 {
 int VAR_9 = 0;



 VAR_8->cmd_req_virt->cmd_type = VAR_2;



 VAR_8->cmd_req_virt->filter_set.item[VAR_9].item_code = VAR_4;
 VAR_8->cmd_req_virt->filter_set.item[VAR_9++].value = VAR_3;



 VAR_8->cmd_req_virt->filter_set.item[VAR_9].item_code = VAR_7;
 VAR_8->cmd_req_virt->filter_set.item[VAR_9++].value = VAR_8->ind_group_prom;



 VAR_8->cmd_req_virt->filter_set.item[VAR_9].item_code = VAR_6;
 VAR_8->cmd_req_virt->filter_set.item[VAR_9++].value = VAR_8->group_prom;



 VAR_8->cmd_req_virt->filter_set.item[VAR_9].item_code = VAR_5;



 if (FUNC_0(VAR_8) != VAR_1)
  return VAR_0;
 return VAR_1;
 }
