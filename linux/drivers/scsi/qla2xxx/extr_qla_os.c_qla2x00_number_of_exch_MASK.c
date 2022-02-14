
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct init_cb_81xx {void* exchange_count; } ;
struct TYPE_8__ {scalar_t__ ql2xiniexchg; scalar_t__ ql2xexchoffld; TYPE_1__* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_7__ {scalar_t__ max_exchg; int init_cb; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(scsi_qla_host_t *VAR_1, u32 *VAR_2, u16 VAR_3)
{
 u32 VAR_4;
 struct init_cb_81xx *VAR_5 = (struct init_cb_81xx *)&VAR_1->hw->init_cb;
 *VAR_2 = VAR_0;

 if (VAR_3 > VAR_1->hw->max_exchg)
  VAR_3 = VAR_1->hw->max_exchg;

 if (FUNC_2(VAR_1)) {
  if (VAR_1->ql2xiniexchg > VAR_3)
   VAR_1->ql2xiniexchg = VAR_3;

  if (VAR_1->ql2xiniexchg > VAR_0)
   *VAR_2 = VAR_1->ql2xiniexchg;

 } else if (FUNC_3(VAR_1)) {
  if (VAR_1->ql2xexchoffld > VAR_3) {
   VAR_1->ql2xexchoffld = VAR_3;
   VAR_5->exchange_count = FUNC_0(VAR_1->ql2xexchoffld);
  }

  if (VAR_1->ql2xexchoffld > VAR_0)
   *VAR_2 = VAR_1->ql2xexchoffld;
 } else if (FUNC_1(VAR_1)) {
  VAR_4 = VAR_1->ql2xiniexchg + VAR_1->ql2xexchoffld;
  if (VAR_4 > VAR_3) {
   VAR_1->ql2xiniexchg -= (VAR_4 - VAR_3)/2;
   VAR_1->ql2xexchoffld -= (((VAR_4 - VAR_3)/2) + 1);
   VAR_4 = VAR_3;
   VAR_5->exchange_count = FUNC_0(VAR_1->ql2xexchoffld);
  }

  if (VAR_4 > VAR_0)
   *VAR_2 = VAR_4;
 }
}
