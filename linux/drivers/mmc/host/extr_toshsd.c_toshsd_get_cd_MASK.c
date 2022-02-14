
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshsd_host {scalar_t__ ioaddr; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct toshsd_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct toshsd_host *VAR_3 = FUNC_1(VAR_2);

 return !!(FUNC_0(VAR_3->ioaddr + VAR_0) & VAR_1);
}
