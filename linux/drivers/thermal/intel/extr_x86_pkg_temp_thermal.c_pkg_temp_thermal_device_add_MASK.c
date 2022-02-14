
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zone_device {unsigned int cpu; int tj_max; int cpumask; int msr_pkg_therm_high; int msr_pkg_therm_low; int tzone; int work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int,int*,int*,int*,int*) ;
 int FUNC_5 (unsigned int,int *) ;
 int FUNC_6 (unsigned int,int*) ;
 int FUNC_7 (struct zone_device*) ;
 struct zone_device* FUNC_8 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int,int,struct zone_device*,int *,int *,int ,int ) ;
 int FUNC_13 (unsigned int) ;
 int VAR_9 ;
 struct zone_device** VAR_10 ;

__attribute__((used)) static int FUNC_14(unsigned int VAR_11)
{
 int VAR_12 = FUNC_13(VAR_11);
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct zone_device *VAR_18;
 int VAR_19, VAR_20;

 if (VAR_12 >= VAR_5)
  return -VAR_1;

 FUNC_4(6, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
 VAR_19 = VAR_15 & 0x07;
 if (!VAR_19)
  return -VAR_0;

 VAR_19 = FUNC_3(VAR_19, 0, VAR_3);

 VAR_20 = FUNC_6(VAR_11, &VAR_13);
 if (VAR_20)
  return VAR_20;

 VAR_18 = FUNC_8(sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 FUNC_0(&VAR_18->work, VAR_7);
 VAR_18->cpu = VAR_11;
 VAR_18->tj_max = VAR_13;
 VAR_18->tzone = FUNC_12("x86_pkg_temp",
   VAR_19,
   (VAR_19 == VAR_3) ? 0x03 : 0x01,
   VAR_18, &VAR_9, &VAR_8, 0, 0);
 if (FUNC_1(VAR_18->tzone)) {
  VAR_20 = FUNC_2(VAR_18->tzone);
  FUNC_7(VAR_18);
  return VAR_20;
 }

 FUNC_9(VAR_4, VAR_18->msr_pkg_therm_low,
       VAR_18->msr_pkg_therm_high);

 FUNC_5(VAR_11, &VAR_18->cpumask);
 FUNC_10(&VAR_6);
 VAR_10[VAR_12] = VAR_18;
 FUNC_11(&VAR_6);
 return 0;
}
