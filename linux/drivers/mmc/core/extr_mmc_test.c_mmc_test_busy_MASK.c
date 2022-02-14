
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_command {int* resp; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct mmc_command *VAR_2)
{
 return !(VAR_2->resp[0] & VAR_0) ||
  (FUNC_0(VAR_2->resp[0]) == VAR_1);
}
