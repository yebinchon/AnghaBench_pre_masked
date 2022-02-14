
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {int tap_set; TYPE_1__* pdata; } ;
struct renesas_sdhi {int scc_tappos_hs400; } ;
struct TYPE_2__ {int flags; } ;


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
 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_3 (struct tmio_mmc_host*,struct renesas_sdhi*,int ) ;
 int FUNC_4 (struct tmio_mmc_host*,struct renesas_sdhi*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct tmio_mmc_host *VAR_14)
{
 struct renesas_sdhi *VAR_15 = FUNC_0(VAR_14);

 FUNC_2(VAR_14, VAR_2, ~VAR_0 &
  FUNC_1(VAR_14, VAR_2));


 FUNC_2(VAR_14, VAR_1, 0x0001 |
   FUNC_1(VAR_14, VAR_1));

 FUNC_4(VAR_14, VAR_15, VAR_5,
         VAR_15->scc_tappos_hs400);

 FUNC_4(VAR_14, VAR_15, VAR_10,
         (VAR_11 |
   VAR_12) |
   FUNC_3(VAR_14, VAR_15, VAR_10));


 FUNC_4(VAR_14, VAR_15, VAR_6,
         VAR_7 |
         0x4 << VAR_8);


 if (VAR_14->pdata->flags & VAR_13)
  FUNC_4(VAR_14, VAR_15, VAR_9,
          VAR_14->tap_set / 2);

 FUNC_4(VAR_14, VAR_15, VAR_3,
         VAR_4 |
         FUNC_3(VAR_14, VAR_15, VAR_3));

 FUNC_2(VAR_14, VAR_2, VAR_0 |
   FUNC_1(VAR_14, VAR_2));
}
