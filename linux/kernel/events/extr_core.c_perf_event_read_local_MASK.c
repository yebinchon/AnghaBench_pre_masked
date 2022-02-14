
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {scalar_t__ pinned; scalar_t__ inherit; } ;
struct TYPE_4__ {scalar_t__ target; } ;
struct perf_event {int attach_state; scalar_t__ cpu; scalar_t__ oncpu; scalar_t__ shadow_ctx_time; int count; TYPE_3__* pmu; TYPE_2__ attr; TYPE_1__ hw; } ;
struct TYPE_6__ {int (* read ) (struct perf_event*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_event*,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct perf_event*) ;

int FUNC_7(struct perf_event *VAR_5, u64 *VAR_6,
     u64 *VAR_7, u64 *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10 = 0;





 FUNC_3(VAR_9);





 if (VAR_5->attr.inherit) {
  VAR_10 = -VAR_2;
  goto out;
 }


 if ((VAR_5->attach_state & VAR_3) &&
     VAR_5->hw.target != VAR_4) {
  VAR_10 = -VAR_1;
  goto out;
 }


 if (!(VAR_5->attach_state & VAR_3) &&
     VAR_5->cpu != FUNC_5()) {
  VAR_10 = -VAR_1;
  goto out;
 }


 if (VAR_5->attr.pinned && VAR_5->oncpu != FUNC_5()) {
  VAR_10 = -VAR_0;
  goto out;
 }






 if (VAR_5->oncpu == FUNC_5())
  VAR_5->pmu->read(VAR_5);

 *VAR_6 = FUNC_1(&VAR_5->count);
 if (VAR_7 || VAR_8) {
  u64 VAR_11 = VAR_5->shadow_ctx_time + FUNC_4();
  u64 VAR_12, VAR_13;

  FUNC_0(VAR_5, VAR_11, &VAR_12, &VAR_13);
  if (VAR_7)
   *VAR_7 = VAR_12;
  if (VAR_8)
   *VAR_8 = VAR_13;
 }
out:
 FUNC_2(VAR_9);

 return VAR_10;
}
