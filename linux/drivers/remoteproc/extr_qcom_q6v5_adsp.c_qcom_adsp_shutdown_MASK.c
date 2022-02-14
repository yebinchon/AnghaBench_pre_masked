
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_adsp {int restart; int pdc_sync_reset; scalar_t__ halt_lpass; int halt_map; int dev; int clks; int num_clks; scalar_t__ qdsp6ss_base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned long VAR_6 ;
 unsigned long FUNC_2 (int ) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,unsigned int*) ;
 int FUNC_5 (int ,scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (unsigned long,unsigned long) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct qcom_adsp *VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9;
 int VAR_10;


 VAR_9 = FUNC_3(VAR_7->qdsp6ss_base + VAR_5);
 VAR_9 |= 0x1;
 FUNC_10(VAR_9, VAR_7->qdsp6ss_base + VAR_5);

 FUNC_0(VAR_7->num_clks, VAR_7->clks);


 VAR_10 = FUNC_4(VAR_7->halt_map,
   VAR_7->halt_lpass + VAR_4, &VAR_9);
 if (VAR_10 || !VAR_9)
  goto reset;

 VAR_10 = FUNC_4(VAR_7->halt_map,
   VAR_7->halt_lpass + VAR_3,
   &VAR_9);
 if (VAR_10 || VAR_9)
  goto reset;

 FUNC_5(VAR_7->halt_map,
   VAR_7->halt_lpass + VAR_2, 1);


 VAR_8 = VAR_6 + FUNC_2(VAR_0);
 for (;;) {
  VAR_10 = FUNC_4(VAR_7->halt_map,
   VAR_7->halt_lpass + VAR_1, &VAR_9);
  if (VAR_10 || VAR_9 || FUNC_8(VAR_6, VAR_8))
   break;

  FUNC_9(1000, 1100);
 }

 VAR_10 = FUNC_4(VAR_7->halt_map,
   VAR_7->halt_lpass + VAR_3, &VAR_9);
 if (VAR_10 || !VAR_9)
  FUNC_1(VAR_7->dev, "port failed halt\n");

reset:

 FUNC_6(VAR_7->pdc_sync_reset);

 FUNC_6(VAR_7->restart);

 FUNC_9(200, 300);


 FUNC_5(VAR_7->halt_map, VAR_7->halt_lpass + VAR_2, 0);


 FUNC_7(VAR_7->pdc_sync_reset);

 FUNC_7(VAR_7->restart);

 FUNC_9(200, 300);

 return 0;
}
