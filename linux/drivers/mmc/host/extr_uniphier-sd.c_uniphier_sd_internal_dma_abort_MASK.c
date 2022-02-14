
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tmio_mmc_host {scalar_t__ ctl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tmio_mmc_host*,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tmio_mmc_host *VAR_3)
{
 u32 VAR_4;

 FUNC_1(VAR_3, 0);

 VAR_4 = FUNC_0(VAR_3->ctl + VAR_0);
 VAR_4 &= ~(VAR_2 | VAR_1);
 FUNC_2(VAR_4, VAR_3->ctl + VAR_0);

 VAR_4 |= VAR_2 | VAR_1;
 FUNC_2(VAR_4, VAR_3->ctl + VAR_0);
}
