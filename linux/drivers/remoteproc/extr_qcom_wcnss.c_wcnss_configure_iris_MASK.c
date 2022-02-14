
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qcom_wcnss {int pmu_cfg; scalar_t__ use_48mhz_xo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct qcom_wcnss *VAR_9)
{
 u32 VAR_10;


 FUNC_3(0, VAR_9->pmu_cfg);

 VAR_10 = VAR_0 | VAR_5;
 FUNC_3(VAR_10, VAR_9->pmu_cfg);


 VAR_10 &= ~VAR_8;
 if (VAR_9->use_48mhz_xo)
  VAR_10 |= VAR_7 << 1;
 else
  VAR_10 |= VAR_6 << 1;
 FUNC_3(VAR_10, VAR_9->pmu_cfg);


 VAR_10 |= VAR_1;
 FUNC_3(VAR_10, VAR_9->pmu_cfg);


 while (FUNC_2(VAR_9->pmu_cfg) & VAR_2)
  FUNC_0();


 VAR_10 &= ~VAR_1;
 FUNC_3(VAR_10, VAR_9->pmu_cfg);


 VAR_10 |= VAR_3;
 FUNC_3(VAR_10, VAR_9->pmu_cfg);


 while (FUNC_2(VAR_9->pmu_cfg) & VAR_4)
  FUNC_0();


 VAR_10 &= ~VAR_0;
 VAR_10 &= ~VAR_3;
 FUNC_3(VAR_10, VAR_9->pmu_cfg);


 FUNC_1(20);
}
