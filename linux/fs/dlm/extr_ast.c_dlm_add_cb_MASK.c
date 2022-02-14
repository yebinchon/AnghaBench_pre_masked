
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct dlm_ls {int ls_callback_wq; int ls_cb_mutex; int ls_cb_delay; int ls_flags; } ;
struct dlm_lkb {int lkb_flags; int lkb_cb_mutex; int lkb_cb_work; int lkb_cb_list; int lkb_ref; TYPE_2__* lkb_callbacks; TYPE_1__* lkb_resource; } ;
struct TYPE_4__ {scalar_t__ seq; } ;
struct TYPE_3__ {struct dlm_ls* res_ls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_lkb*,int ,int,int,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dlm_lkb*,int ,int,int,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

void FUNC_10(struct dlm_lkb *VAR_4, uint32_t VAR_5, int VAR_6, int VAR_7,
  uint32_t VAR_8)
{
 struct dlm_ls *VAR_9 = VAR_4->lkb_resource->res_ls;
 uint64_t VAR_10, VAR_11;
 int VAR_12;

 FUNC_7(&VAR_3);
 VAR_10 = ++VAR_2;
 if (!VAR_2)
  VAR_10 = ++VAR_2;
 FUNC_8(&VAR_3);

 if (VAR_4->lkb_flags & VAR_0) {
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
  return;
 }

 FUNC_4(&VAR_4->lkb_cb_mutex);
 VAR_11 = VAR_4->lkb_callbacks[0].seq;

 VAR_12 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10);
 if (VAR_12 < 0)
  goto out;

 if (!VAR_11) {
  FUNC_2(&VAR_4->lkb_ref);

  if (FUNC_9(VAR_1, &VAR_9->ls_flags)) {
   FUNC_4(&VAR_9->ls_cb_mutex);
   FUNC_3(&VAR_4->lkb_cb_list, &VAR_9->ls_cb_delay);
   FUNC_5(&VAR_9->ls_cb_mutex);
  } else {
   FUNC_6(VAR_9->ls_callback_wq, &VAR_4->lkb_cb_work);
  }
 }
 out:
 FUNC_5(&VAR_4->lkb_cb_mutex);
}
