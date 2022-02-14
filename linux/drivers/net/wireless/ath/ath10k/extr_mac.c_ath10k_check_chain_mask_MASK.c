
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,char*,char const*,int) ;

__attribute__((used)) static void FUNC_1(struct ath10k *VAR_0, u32 VAR_1, const char *VAR_2)
{




 if (VAR_1 == 15 || VAR_1 == 7 || VAR_1 == 3 || VAR_1 == 1 || VAR_1 == 0)
  return;

 FUNC_0(VAR_0, "mac %s antenna chainmask may be invalid: 0x%x.  Suggested values: 15, 7, 3, 1 or 0.\n",
      VAR_2, VAR_1);
}
