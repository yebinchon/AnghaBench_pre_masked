
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_miro_aci {scalar_t__ aci_port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_miro_aci *VAR_2)
{
 u8 VAR_3;
 int VAR_4 = 2000;

 do {
  VAR_3 = FUNC_0(VAR_2->aci_port + VAR_0);
  VAR_4--;
 } while ((VAR_3 & VAR_1) && VAR_4);






 FUNC_1(1);
 return VAR_4 ? VAR_3 : -1;
}
