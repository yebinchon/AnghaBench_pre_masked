
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int cntxt_id; } ;
struct sge_eth_txq {TYPE_2__ q; } ;
struct sched_table {struct sched_class* tab; } ;
struct TYPE_6__ {size_t class; } ;
struct sched_queue_entry {unsigned int cntxt_id; int list; TYPE_3__ param; } ;
struct sched_class {int refcnt; int queue_list; } ;
struct port_info {size_t nqsets; size_t first_qset; struct sched_table* sched_tbl; struct adapter* adapter; } ;
struct ch_sched_queue {size_t queue; } ;
struct TYPE_4__ {struct sge_eth_txq* ethtxq; } ;
struct adapter {TYPE_1__ sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sched_queue_entry*) ;
 struct sched_queue_entry* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,struct ch_sched_queue*,int) ;
 int FUNC_5 (struct port_info*,void*,int ,int) ;
 int FUNC_6 (struct port_info*,struct ch_sched_queue*) ;

__attribute__((used)) static int FUNC_7(struct port_info *VAR_4, struct ch_sched_queue *VAR_5)
{
 struct adapter *VAR_6 = VAR_4->adapter;
 struct sched_table *VAR_7 = VAR_4->sched_tbl;
 struct sched_class *VAR_8;
 struct sched_queue_entry *VAR_9 = ((void*)0);
 struct sge_eth_txq *VAR_10;
 unsigned int VAR_11;
 int VAR_12 = 0;

 if (VAR_5->queue < 0 || VAR_5->queue >= VAR_4->nqsets)
  return -VAR_1;

 VAR_9 = FUNC_2(sizeof(struct sched_queue_entry), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = &VAR_6->sge.ethtxq[VAR_4->first_qset + VAR_5->queue];
 VAR_11 = VAR_10->q.cntxt_id;


 VAR_12 = FUNC_6(VAR_4, VAR_5);
 if (VAR_12)
  goto out_err;


 VAR_9->cntxt_id = VAR_11;
 FUNC_4(&VAR_9->param, VAR_5, sizeof(VAR_9->param));

 VAR_8 = &VAR_7->tab[VAR_9->param.class];
 VAR_12 = FUNC_5(VAR_4, (void *)VAR_9, VAR_3, 1);
 if (VAR_12)
  goto out_err;

 FUNC_3(&VAR_9->list, &VAR_8->queue_list);
 FUNC_0(&VAR_8->refcnt);
 return VAR_12;

out_err:
 FUNC_1(VAR_9);
 return VAR_12;
}
