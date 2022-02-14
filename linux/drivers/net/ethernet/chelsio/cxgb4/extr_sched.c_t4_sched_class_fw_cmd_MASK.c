
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sched_table {struct sched_class* tab; } ;
struct sched_class {int idx; } ;
struct port_info {struct sched_table* sched_tbl; struct adapter* adapter; } ;
struct TYPE_3__ {size_t class; int pktsize; int weight; int maxrate; int minrate; int channel; int ratemode; int rateunit; int mode; int level; } ;
struct TYPE_4__ {TYPE_1__ params; } ;
struct ch_sched_params {TYPE_2__ u; int type; } ;
struct adapter {int dummy; } ;
typedef enum sched_fw_ops { ____Placeholder_sched_fw_ops } sched_fw_ops ;


 int VAR_0 ;

 int FUNC_0 (struct adapter*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct port_info *VAR_1,
     struct ch_sched_params *VAR_2,
     enum sched_fw_ops VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adapter;
 struct sched_table *VAR_5 = VAR_1->sched_tbl;
 struct sched_class *VAR_6;
 int VAR_7 = 0;

 VAR_6 = &VAR_5->tab[VAR_2->u.params.class];
 switch (VAR_3) {
 case 128:
  VAR_7 = FUNC_0(VAR_4, VAR_2->type,
          VAR_2->u.params.level, VAR_2->u.params.mode,
          VAR_2->u.params.rateunit,
          VAR_2->u.params.ratemode,
          VAR_2->u.params.channel, VAR_6->idx,
          VAR_2->u.params.minrate, VAR_2->u.params.maxrate,
          VAR_2->u.params.weight, VAR_2->u.params.pktsize);
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 return VAR_7;
}
