
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int dummy; } ;
struct renesas_sdhi {int scc_tappos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct tmio_mmc_host*,int ) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int) ;
 int FUNC_2 (struct tmio_mmc_host*,struct renesas_sdhi*,int ) ;
 int FUNC_3 (struct tmio_mmc_host*,struct renesas_sdhi*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct tmio_mmc_host *VAR_7,
       struct renesas_sdhi *VAR_8)
{
 FUNC_1(VAR_7, VAR_2, ~VAR_0 &
   FUNC_0(VAR_7, VAR_2));


 FUNC_1(VAR_7, VAR_1, ~0x0001 &
   FUNC_0(VAR_7, VAR_1));

 FUNC_3(VAR_7, VAR_8, VAR_3, VAR_8->scc_tappos);

 FUNC_3(VAR_7, VAR_8, VAR_4,
         ~(VAR_5 |
    VAR_6) &
   FUNC_2(VAR_7, VAR_8, VAR_4));

 FUNC_1(VAR_7, VAR_2, VAR_0 |
   FUNC_0(VAR_7, VAR_2));
}
