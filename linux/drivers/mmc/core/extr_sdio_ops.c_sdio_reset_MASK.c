
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*,int,int ,int ,int,int*) ;

int FUNC_1(struct mmc_host *VAR_1)
{
 int VAR_2;
 u8 VAR_3;



 VAR_2 = FUNC_0(VAR_1, 0, 0, VAR_0, 0, &VAR_3);
 if (VAR_2)
  VAR_3 = 0x08;
 else
  VAR_3 |= 0x08;

 return FUNC_0(VAR_1, 1, 0, VAR_0, VAR_3, ((void*)0));
}
