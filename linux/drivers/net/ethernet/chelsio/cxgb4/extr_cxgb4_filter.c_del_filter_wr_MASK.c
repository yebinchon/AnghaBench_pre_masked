
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fw_filter_wr {int dummy; } ;
struct filter_entry {int pending; int tid; } ;
struct TYPE_4__ {int abs_id; } ;
struct TYPE_5__ {TYPE_1__ fw_evtq; } ;
struct TYPE_6__ {struct filter_entry* ftid_tab; } ;
struct adapter {TYPE_2__ sge; TYPE_3__ tids; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fw_filter_wr* FUNC_0 (struct sk_buff*,unsigned int) ;
 struct sk_buff* FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct adapter*,struct sk_buff*) ;
 int FUNC_3 (int ,struct fw_filter_wr*,int ) ;

__attribute__((used)) static int FUNC_4(struct adapter *VAR_2, int VAR_3)
{
 struct filter_entry *VAR_4 = &VAR_2->tids.ftid_tab[VAR_3];
 struct fw_filter_wr *VAR_5;
 struct sk_buff *VAR_6;
 unsigned int VAR_7;

 VAR_7 = sizeof(*VAR_5);

 VAR_6 = FUNC_1(VAR_7, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_6, VAR_7);
 FUNC_3(VAR_4->tid, VAR_5, VAR_2->sge.fw_evtq.abs_id);




 VAR_4->pending = 1;
 FUNC_2(VAR_2, VAR_6);
 return 0;
}
