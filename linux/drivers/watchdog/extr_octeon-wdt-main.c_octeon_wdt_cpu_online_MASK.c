
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mode; int len; } ;
union cvmx_ciu_wdogx {int u64; TYPE_1__ s; } ;
typedef scalar_t__ u64 ;
struct irq_domain {int dummy; } ;
typedef int cpumask_t ;
struct TYPE_4__ {scalar_t__ target_ptr; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned int,int *) ;
 int FUNC_6 (int,int ,int) ;
 unsigned int FUNC_7 (struct irq_domain*,int) ;
 int VAR_6 ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int,int *) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 struct irq_domain* FUNC_12 (int,int) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (char*,unsigned int) ;
 int * VAR_10 ;
 scalar_t__ FUNC_14 (unsigned int,int ,int ,char*,int ) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_15(unsigned int VAR_12)
{
 unsigned int VAR_13;
 unsigned int VAR_14;
 union cvmx_ciu_wdogx VAR_15;
 int VAR_16;
 struct irq_domain *VAR_17;
 int VAR_18;

 VAR_13 = FUNC_2(VAR_12);
 VAR_16 = FUNC_3(VAR_12);

 VAR_7[VAR_13].target_ptr = (u64)VAR_8;


 VAR_15.u64 = 0;
 FUNC_6(VAR_16, FUNC_1(VAR_13), VAR_15.u64);

 VAR_10[VAR_12] = VAR_5;

 if (FUNC_11(VAR_2)) {

  VAR_17 = FUNC_12(VAR_16, VAR_4);


  VAR_18 = VAR_4 << 12 | 0x200 | VAR_13;
  VAR_14 = FUNC_7(VAR_17, VAR_18);
  FUNC_10(FUNC_8(VAR_14),
          VAR_1);
 } else
  VAR_14 = VAR_3 + VAR_13;

 if (FUNC_14(VAR_14, VAR_9,
   VAR_0, "octeon_wdt", VAR_9))
  FUNC_13("octeon_wdt: Couldn't obtain irq %d", VAR_14);


 if (FUNC_11(VAR_2)) {
  cpumask_t VAR_19;

  FUNC_4(&VAR_19);
  FUNC_5(VAR_12, &VAR_19);
  FUNC_9(VAR_14, &VAR_19);
 }

 FUNC_5(VAR_12, &VAR_6);


 FUNC_6(VAR_16, FUNC_0(VAR_13), 1);


 VAR_15.u64 = 0;
 VAR_15.s.len = VAR_11;
 VAR_15.s.mode = 3;
 FUNC_6(VAR_16, FUNC_1(VAR_13), VAR_15.u64);

 return 0;
}
