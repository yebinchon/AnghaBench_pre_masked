
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmio_mmc_host {TYPE_1__* pdata; } ;
struct renesas_sdhi {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*,struct renesas_sdhi*) ;
 int FUNC_2 (struct tmio_mmc_host*,struct renesas_sdhi*) ;
 int FUNC_3 (struct tmio_mmc_host*,int ) ;
 int FUNC_4 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_5 (struct tmio_mmc_host*,int ,int ) ;
 int FUNC_6 (struct tmio_mmc_host*,struct renesas_sdhi*,int ) ;
 int FUNC_7 (struct tmio_mmc_host*,struct renesas_sdhi*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct tmio_mmc_host *VAR_7)
{
 struct renesas_sdhi *VAR_8;

 VAR_8 = FUNC_0(VAR_7);

 FUNC_2(VAR_7, VAR_8);
 FUNC_1(VAR_7, VAR_8);

 FUNC_4(VAR_7, VAR_2, VAR_0 |
   FUNC_3(VAR_7, VAR_2));

 FUNC_7(VAR_7, VAR_8, VAR_3,
         ~VAR_4 &
         FUNC_6(VAR_7, VAR_8, VAR_3));

 FUNC_7(VAR_7, VAR_8, VAR_3,
         ~VAR_4 &
         FUNC_6(VAR_7, VAR_8, VAR_3));

 if (VAR_7->pdata->flags & VAR_6)
  FUNC_5(VAR_7, VAR_1,
          VAR_5);
}
