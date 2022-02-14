
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath6kl {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath6kl*,int,int*) ;

int FUNC_2(struct ath6kl *VAR_1, u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 u32 VAR_5, *VAR_6 = VAR_3;
 int VAR_7;

 if (FUNC_0(VAR_4 % 4))
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4 / 4; VAR_5++, VAR_2 += 4) {
  VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_6[VAR_5]);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
