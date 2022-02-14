
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct imgu_css_pipe {TYPE_1__* rect; } ;
struct imgu_css {struct imgu_css_pipe* pipes; } ;
struct TYPE_13__ {TYPE_5__* grd_config; } ;
struct TYPE_11__ {TYPE_3__* ops; TYPE_2__* process_lines_data; } ;
struct TYPE_14__ {TYPE_6__ cfg; TYPE_4__ operations_data; } ;
struct imgu_abi_acc_param {TYPE_7__ dvs_stat; } ;
struct TYPE_12__ {scalar_t__ enable; } ;
struct TYPE_10__ {int op_indicator; int op_type; } ;
struct TYPE_9__ {scalar_t__ cfg_set; int lines; } ;
struct TYPE_8__ {int height; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(struct imgu_css *VAR_4,
     struct imgu_abi_acc_param *VAR_5,
     unsigned int VAR_6)
{
 unsigned int VAR_7;
 struct imgu_css_pipe *VAR_8 = &VAR_4->pipes[VAR_6];


 VAR_5->dvs_stat.operations_data.process_lines_data[0].lines =
    VAR_8->rect[VAR_3].height;
 VAR_5->dvs_stat.operations_data.process_lines_data[0].cfg_set = 0;
 VAR_5->dvs_stat.operations_data.ops[0].op_type =
  VAR_0;
 VAR_5->dvs_stat.operations_data.ops[0].op_indicator =
  VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_5->dvs_stat.cfg.grd_config[VAR_7].enable = 0;
}
