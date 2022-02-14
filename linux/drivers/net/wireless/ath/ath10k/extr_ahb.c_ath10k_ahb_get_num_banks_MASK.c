
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {scalar_t__ hw_rev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ath10k*,char*) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1)
{
 if (VAR_1->hw_rev == VAR_0)
  return 1;

 FUNC_0(VAR_1, "unknown number of banks, assuming 1\n");
 return 1;
}
