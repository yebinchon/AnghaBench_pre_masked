
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct timer_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ sli_intr; scalar_t__ sli_prev_intr; scalar_t__ sli_ips; } ;
struct TYPE_4__ {TYPE_1__ slistat; } ;
struct lpfc_hba {int eratt_poll_interval; int eratt_poll; TYPE_2__ sli; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 struct lpfc_hba* FUNC_1 (struct lpfc_hba*,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct lpfc_hba*) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct timer_list *VAR_2)
{
 struct lpfc_hba *VAR_3;
 uint32_t VAR_4 = 0;
 uint64_t VAR_5, VAR_6;

 VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);


 VAR_5 = VAR_3->sli.slistat.sli_intr;

 if (VAR_3->sli.slistat.sli_prev_intr > VAR_5)
  VAR_6 = (((uint64_t)(-1) - VAR_3->sli.slistat.sli_prev_intr) +
   VAR_5);
 else
  VAR_6 = (VAR_5 - VAR_3->sli.slistat.sli_prev_intr);


 FUNC_0(VAR_6, VAR_3->eratt_poll_interval);
 VAR_3->sli.slistat.sli_ips = VAR_6;

 VAR_3->sli.slistat.sli_prev_intr = VAR_5;


 VAR_4 = FUNC_2(VAR_3);

 if (VAR_4)

  FUNC_3(VAR_3);
 else

  FUNC_4(&VAR_3->eratt_poll,
     VAR_1 +
     FUNC_5(1000 * VAR_3->eratt_poll_interval));
 return;
}
