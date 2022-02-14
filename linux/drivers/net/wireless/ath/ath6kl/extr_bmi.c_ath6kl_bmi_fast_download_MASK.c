
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ath6kl {int dummy; } ;


 int FUNC_0 (struct ath6kl*,int *,int) ;
 int FUNC_1 (struct ath6kl*,int) ;
 int FUNC_2 (int*,int *,int) ;

int FUNC_3(struct ath6kl *VAR_0, u32 VAR_1, u8 *VAR_2, u32 VAR_3)
{
 int VAR_4;
 u32 VAR_5 = 0;
 u32 VAR_6 = VAR_3 & ~0x3;
 u32 VAR_7 = VAR_3 & 0x3;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_7) {

  FUNC_2(&VAR_5, &VAR_2[VAR_6], VAR_7);
 }

 VAR_4 = FUNC_0(VAR_0, VAR_2, VAR_6);
 if (VAR_4)
  return VAR_4;

 if (VAR_7)
  VAR_4 = FUNC_0(VAR_0, (u8 *)&VAR_5, 4);

 if (!VAR_4) {


  VAR_4 = FUNC_1(VAR_0, 0x00);
 }
 return VAR_4;
}
