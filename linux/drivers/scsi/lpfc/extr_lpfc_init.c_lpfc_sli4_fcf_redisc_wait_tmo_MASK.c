
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {int fcf_flag; } ;
struct lpfc_hba {int hbalock; TYPE_1__ fcf; } ;
struct TYPE_4__ {int redisc_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 struct lpfc_hba* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 struct lpfc_hba* VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct timer_list *VAR_6)
{
 struct lpfc_hba *VAR_7 = FUNC_0(VAR_7, VAR_6, VAR_4.redisc_wait);


 FUNC_3(&VAR_7->hbalock);
 if (!(VAR_7->fcf.fcf_flag & VAR_1)) {
  FUNC_4(&VAR_7->hbalock);
  return;
 }

 VAR_7->fcf.fcf_flag &= ~VAR_1;

 VAR_7->fcf.fcf_flag |= VAR_0;
 FUNC_4(&VAR_7->hbalock);
 FUNC_1(VAR_7, VAR_2, VAR_3,
   "2776 FCF rediscover quiescent timer expired\n");

 FUNC_2(VAR_7);
}
