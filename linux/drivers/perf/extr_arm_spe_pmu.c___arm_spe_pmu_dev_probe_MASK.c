
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct device {int dummy; } ;
struct arm_spe_pmu {int align; int min_period; int max_record_sz; int counter_sz; int features; int supported_cpus; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*,char*,int ,int,int,int ) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(void *VAR_27)
{
 int VAR_28;
 u64 VAR_29;
 struct arm_spe_pmu *VAR_30 = VAR_27;
 struct device *VAR_31 = &VAR_30->pdev->dev;

 VAR_28 = FUNC_1(FUNC_6(VAR_0),
         VAR_1);
 if (!VAR_28) {
  FUNC_3(VAR_31,
   "unsupported ID_AA64DFR0_EL1.PMSVer [%d] on CPU %d\n",
   VAR_28, FUNC_8());
  return;
 }


 VAR_29 = FUNC_7(VAR_9);
 if (VAR_29 & FUNC_0(VAR_12)) {
  FUNC_3(VAR_31,
   "profiling buffer owned by higher exception level\n");
  return;
 }


 VAR_28 = VAR_29 >> VAR_11 & VAR_10;
 VAR_30->align = 1 << VAR_28;
 if (VAR_30->align > VAR_26) {
  FUNC_3(VAR_31, "unsupported PMBIDR.Align [%d] on CPU %d\n",
   VAR_28, FUNC_8());
  return;
 }


 VAR_29 = FUNC_7(VAR_13);
 if (VAR_29 & FUNC_0(VAR_18))
  VAR_30->features |= VAR_5;

 if (VAR_29 & FUNC_0(VAR_20))
  VAR_30->features |= VAR_7;

 if (VAR_29 & FUNC_0(VAR_19))
  VAR_30->features |= VAR_6;

 if (VAR_29 & FUNC_0(VAR_14))
  VAR_30->features |= VAR_2;

 if (VAR_29 & FUNC_0(VAR_23))
  VAR_30->features |= VAR_8;

 if (VAR_29 & FUNC_0(VAR_17))
  VAR_30->features |= VAR_4;


 VAR_28 = VAR_29 >> VAR_22 & VAR_21;
 switch (VAR_28) {
 case 0:
  VAR_30->min_period = 256;
  break;
 case 2:
  VAR_30->min_period = 512;
  break;
 case 3:
  VAR_30->min_period = 768;
  break;
 case 4:
  VAR_30->min_period = 1024;
  break;
 case 5:
  VAR_30->min_period = 1536;
  break;
 case 6:
  VAR_30->min_period = 2048;
  break;
 case 7:
  VAR_30->min_period = 3072;
  break;
 default:
  FUNC_5(VAR_31, "unknown PMSIDR_EL1.Interval [%d]; assuming 8\n",
    VAR_28);

 case 8:
  VAR_30->min_period = 4096;
 }


 VAR_28 = VAR_29 >> VAR_25 & VAR_24;
 VAR_30->max_record_sz = 1 << VAR_28;
 if (VAR_30->max_record_sz > VAR_26 || VAR_30->max_record_sz < 16) {
  FUNC_3(VAR_31, "unsupported PMSIDR_EL1.MaxSize [%d] on CPU %d\n",
   VAR_28, FUNC_8());
  return;
 }

 VAR_28 = VAR_29 >> VAR_16 & VAR_15;
 switch (VAR_28) {
 default:
  FUNC_5(VAR_31, "unknown PMSIDR_EL1.CountSize [%d]; assuming 2\n",
    VAR_28);

 case 2:
  VAR_30->counter_sz = 12;
 }

 FUNC_4(VAR_31,
   "probed for CPUs %*pbl [max_record_sz %u, align %u, features 0x%llx]\n",
   FUNC_2(&VAR_30->supported_cpus),
   VAR_30->max_record_sz, VAR_30->align, VAR_30->features);

 VAR_30->features |= VAR_3;
 return;
}
