
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timespec64 {int tv_nsec; int tv_sec; } ;
struct system_counterval_t {unsigned long cycles; int * cs; } ;
struct pvclock_vcpu_time_info {int dummy; } ;
typedef int ktime_t ;
struct TYPE_4__ {int tsc; int nsec; int sec; } ;
struct TYPE_3__ {struct pvclock_vcpu_time_info pvti; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct pvclock_vcpu_time_info*,int ) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 unsigned long FUNC_1 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (struct pvclock_vcpu_time_info*) ;
 scalar_t__ FUNC_6 (struct pvclock_vcpu_time_info*,unsigned int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct timespec64) ;

__attribute__((used)) static int FUNC_11(ktime_t *VAR_8,
          struct system_counterval_t *VAR_9,
          void *VAR_10)
{
 unsigned long VAR_11;
 struct timespec64 VAR_12;
 unsigned VAR_13;
 int VAR_14;
 struct pvclock_vcpu_time_info *VAR_15;

 FUNC_8(&VAR_7);

 FUNC_3();
 VAR_14 = FUNC_7();
 VAR_15 = &VAR_5[VAR_14].pvti;

 do {







  VAR_13 = FUNC_5(VAR_15);

  VAR_11 = FUNC_1(VAR_2,
         VAR_4,
         VAR_1);
  if (VAR_11 != 0) {
   FUNC_2("clock pairing hypercall ret %lu\n", VAR_11);
   FUNC_9(&VAR_7);
   FUNC_4();
   return -VAR_0;
  }

  VAR_12.tv_sec = VAR_3.sec;
  VAR_12.tv_nsec = VAR_3.nsec;
  VAR_11 = FUNC_0(VAR_15, VAR_3.tsc);
 } while (FUNC_6(VAR_15, VAR_13));

 FUNC_4();

 VAR_9->cycles = VAR_11;
 VAR_9->cs = &VAR_6;

 *VAR_8 = FUNC_10(VAR_12);

 FUNC_9(&VAR_7);

 return 0;
}
