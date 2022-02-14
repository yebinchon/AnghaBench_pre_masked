
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mtk_hsdam_engine {TYPE_1__ ddev; } ;


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
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,...) ;
 int FUNC_1 (struct mtk_hsdam_engine*,int ) ;

__attribute__((used)) static void FUNC_2(struct mtk_hsdam_engine *VAR_13)
{
 FUNC_0(VAR_13->ddev.dev, "tbase %08x, tcnt %08x, " "tctx %08x, tdtx: %08x, rbase %08x, " "rcnt %08x, rctx %08x, rdtx %08x\n",


   FUNC_1(VAR_13, VAR_9),
   FUNC_1(VAR_13, VAR_10),
   FUNC_1(VAR_13, VAR_11),
   FUNC_1(VAR_13, VAR_12),
   FUNC_1(VAR_13, VAR_5),
   FUNC_1(VAR_13, VAR_6),
   FUNC_1(VAR_13, VAR_7),
   FUNC_1(VAR_13, VAR_8));

 FUNC_0(VAR_13->ddev.dev, "info %08x, glo %08x, delay %08x, " "intr_stat %08x, intr_mask %08x\n",

   FUNC_1(VAR_13, VAR_2),
   FUNC_1(VAR_13, VAR_1),
   FUNC_1(VAR_13, VAR_0),
   FUNC_1(VAR_13, VAR_4),
   FUNC_1(VAR_13, VAR_3));
}
