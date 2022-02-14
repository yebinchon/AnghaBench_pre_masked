
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmio_mmc_host {int bus_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tmio_mmc_host*,int) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_2, bool VAR_3)
{

 int VAR_4 = (VAR_2->bus_shift == 2) ? 64 : 32;

 FUNC_1(VAR_2, VAR_0, VAR_3 ? VAR_1 : 0);
 FUNC_0(VAR_2, VAR_3 ? VAR_4 : 16);
}
