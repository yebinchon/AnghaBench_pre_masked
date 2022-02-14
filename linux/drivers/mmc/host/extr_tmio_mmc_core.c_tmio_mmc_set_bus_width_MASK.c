
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tmio_mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct tmio_mmc_host*,int ) ;
 int FUNC_1 (struct tmio_mmc_host*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tmio_mmc_host *VAR_5,
       unsigned char VAR_6)
{
 u16 VAR_7 = FUNC_0(VAR_5, VAR_2)
    & ~(VAR_0 | VAR_1);


 if (VAR_6 == VAR_3)
  VAR_7 |= VAR_0;
 else if (VAR_6 == VAR_4)
  VAR_7 |= VAR_1;

 FUNC_1(VAR_5, VAR_2, VAR_7);
}
