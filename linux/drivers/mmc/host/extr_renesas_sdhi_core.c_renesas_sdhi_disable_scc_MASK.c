
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;
struct renesas_sdhi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct renesas_sdhi* FUNC_0 (struct tmio_mmc_host*) ;
 int FUNC_1 (struct tmio_mmc_host*,struct renesas_sdhi*) ;
 int FUNC_2 (struct tmio_mmc_host*,int ) ;
 int FUNC_3 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_4 (struct tmio_mmc_host*,struct renesas_sdhi*,int ) ;
 int FUNC_5 (struct tmio_mmc_host*,struct renesas_sdhi*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct tmio_mmc_host *VAR_4)
{
 struct renesas_sdhi *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_4, VAR_5);

 FUNC_5(VAR_4, VAR_5, VAR_2,
         ~VAR_3 &
         FUNC_4(VAR_4, VAR_5,
         VAR_2));

 FUNC_3(VAR_4, VAR_1, VAR_0 |
   FUNC_2(VAR_4, VAR_1));
}
