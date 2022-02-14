
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct snd_miro_aci {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (struct snd_miro_aci*) ;
 int FUNC_3 (struct snd_miro_aci*) ;
 scalar_t__ FUNC_4 (struct snd_miro_aci*) ;
 int FUNC_5 (struct snd_miro_aci*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct snd_miro_aci *VAR_2, u8 VAR_3, u8 VAR_4[], u8 VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_5(VAR_2, VAR_3);


 if (VAR_3 == VAR_1)
  return 0;
 if (FUNC_2(VAR_2))
  return -VAR_0;
 if (VAR_5 == 0)
  return 0;



 if (FUNC_4(VAR_2) < 0)
  return -1;

 FUNC_1(VAR_4, 0, VAR_5);

 for (VAR_6 = 0; VAR_6 < 8 * VAR_5; VAR_6++) {
  VAR_7 = FUNC_3(VAR_2);
  if (VAR_7 < 0)
   return -VAR_0;
  VAR_4[VAR_6 / 8] |= FUNC_0(VAR_7) << (7 - (VAR_6 % 8));
 }
 return 0;
}
