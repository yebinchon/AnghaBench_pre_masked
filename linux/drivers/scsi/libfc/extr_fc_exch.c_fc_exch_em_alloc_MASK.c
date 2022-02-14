
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct fc_lport {int dummy; } ;
struct fc_exch_pool {scalar_t__ left; scalar_t__ right; int next_index; int lock; int total_exches; int ex_list; } ;
struct TYPE_2__ {int no_free_exch_xid; int no_free_exch; } ;
struct fc_exch_mgr {int pool_max_index; int ep_pool; TYPE_1__ stats; int class; scalar_t__ min_xid; int pool; } ;
struct fc_exch {int timeout_work; int resp_wq; scalar_t__ resp_active; int class; scalar_t__ rxid; int f_ctl; struct fc_lport* lp; struct fc_exch_pool* pool; struct fc_exch_mgr* em; scalar_t__ xid; scalar_t__ oxid; int seq_id; int ex_list; int ex_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct fc_exch*) ;
 scalar_t__ FUNC_4 (struct fc_exch_pool*,int) ;
 int FUNC_5 (struct fc_exch_pool*,int,struct fc_exch*) ;
 int VAR_4 ;
 int FUNC_6 (struct fc_exch*,int ) ;
 unsigned int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 struct fc_exch* FUNC_10 (int ,int ) ;
 int FUNC_11 (struct fc_exch*,int ) ;
 int FUNC_12 (struct fc_exch*,int ,int) ;
 struct fc_exch_pool* FUNC_13 (int ,unsigned int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static struct fc_exch *FUNC_18(struct fc_lport *VAR_5,
     struct fc_exch_mgr *VAR_6)
{
 struct fc_exch *VAR_7;
 unsigned int VAR_8;
 u16 VAR_9;
 struct fc_exch_pool *VAR_10;


 VAR_7 = FUNC_10(VAR_6->ep_pool, VAR_2);
 if (!VAR_7) {
  FUNC_2(&VAR_6->stats.no_free_exch);
  goto out;
 }
 FUNC_12(VAR_7, 0, sizeof(*VAR_7));

 VAR_8 = FUNC_7();
 VAR_10 = FUNC_13(VAR_6->pool, VAR_8);
 FUNC_15(&VAR_10->lock);
 FUNC_14();


 if (VAR_10->left != VAR_1) {
  if (!FUNC_1(FUNC_4(VAR_10, VAR_10->left))) {
   VAR_9 = VAR_10->left;
   VAR_10->left = VAR_1;
   goto hit;
  }
 }
 if (VAR_10->right != VAR_1) {
  if (!FUNC_1(FUNC_4(VAR_10, VAR_10->right))) {
   VAR_9 = VAR_10->right;
   VAR_10->right = VAR_1;
   goto hit;
  }
 }

 VAR_9 = VAR_10->next_index;

 while (FUNC_4(VAR_10, VAR_9)) {
  VAR_9 = VAR_9 == VAR_6->pool_max_index ? 0 : VAR_9 + 1;
  if (VAR_9 == VAR_10->next_index)
   goto err;
 }
 VAR_10->next_index = VAR_9 == VAR_6->pool_max_index ? 0 : VAR_9 + 1;
hit:
 FUNC_3(VAR_7);
 FUNC_16(&VAR_7->ex_lock);





 FUNC_15(&VAR_7->ex_lock);

 FUNC_5(VAR_10, VAR_9, VAR_7);
 FUNC_9(&VAR_7->ex_list, &VAR_10->ex_list);
 FUNC_6(VAR_7, VAR_7->seq_id++);
 VAR_10->total_exches++;
 FUNC_17(&VAR_10->lock);




 VAR_7->oxid = VAR_7->xid = (VAR_9 << VAR_3 | VAR_8) + VAR_6->min_xid;
 VAR_7->em = VAR_6;
 VAR_7->pool = VAR_10;
 VAR_7->lp = VAR_5;
 VAR_7->f_ctl = VAR_0;
 VAR_7->rxid = VAR_1;
 VAR_7->class = VAR_6->class;
 VAR_7->resp_active = 0;
 FUNC_8(&VAR_7->resp_wq);
 FUNC_0(&VAR_7->timeout_work, VAR_4);
out:
 return VAR_7;
err:
 FUNC_17(&VAR_10->lock);
 FUNC_2(&VAR_6->stats.no_free_exch_xid);
 FUNC_11(VAR_7, VAR_6->ep_pool);
 return ((void*)0);
}
