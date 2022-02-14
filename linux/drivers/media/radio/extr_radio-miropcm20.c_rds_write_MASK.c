
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_miro_aci {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_miro_aci*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_miro_aci *VAR_2, u8 VAR_3)
{
 u8 VAR_4[8];
 int VAR_5;

 for (VAR_5 = 7; VAR_5 >= 0; VAR_5--)
  VAR_4[7 - VAR_5] = (VAR_3 & (1 << VAR_5)) ? VAR_1 : 0;
 VAR_4[0] |= VAR_0;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  FUNC_0(VAR_2, VAR_4[VAR_5]);
 return 0;
}
