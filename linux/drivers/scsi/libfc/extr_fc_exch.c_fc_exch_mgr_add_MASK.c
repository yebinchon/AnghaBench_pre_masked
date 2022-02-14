
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_lport {int ema_list; } ;
struct fc_exch_mgr_anchor {int (* match ) (struct fc_frame*) ;int ema_list; struct fc_exch_mgr* mp; } ;
struct fc_exch_mgr {int kref; } ;


 int VAR_0 ;
 struct fc_exch_mgr_anchor* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

struct fc_exch_mgr_anchor *FUNC_3(struct fc_lport *VAR_1,
        struct fc_exch_mgr *VAR_2,
        bool (*VAR_3)(struct fc_frame *))
{
 struct fc_exch_mgr_anchor *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return VAR_4;

 VAR_4->mp = VAR_2;
 VAR_4->match = VAR_3;

 FUNC_2(&VAR_4->ema_list, &VAR_1->ema_list);
 FUNC_1(&VAR_2->kref);
 return VAR_4;
}
