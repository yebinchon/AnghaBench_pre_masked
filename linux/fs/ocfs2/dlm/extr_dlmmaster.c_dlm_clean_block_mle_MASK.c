
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_master_list_entry {scalar_t__ type; int wq; int spinlock; int woken; int maybe_map; } ;
struct dlm_ctxt {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dlm_ctxt*,struct dlm_master_list_entry*) ;
 int FUNC_2 (struct dlm_master_list_entry*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct dlm_ctxt *VAR_2,
    struct dlm_master_list_entry *VAR_3, u8 VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3->type != VAR_0);

 FUNC_6(&VAR_3->spinlock);
 VAR_5 = FUNC_4(VAR_3->maybe_map, VAR_1, 0);
 if (VAR_5 != VAR_4) {
  FUNC_5(0, "mle found, but dead node %u would not have been "
       "master\n", VAR_4);
  FUNC_7(&VAR_3->spinlock);
 } else {




  FUNC_5(0, "node %u was expected master\n", VAR_4);
  FUNC_3(&VAR_3->woken, 1);
  FUNC_7(&VAR_3->spinlock);
  FUNC_8(&VAR_3->wq);


  FUNC_1(VAR_2, VAR_3);
  FUNC_2(VAR_3);
 }
}
