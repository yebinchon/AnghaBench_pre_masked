
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_miro_aci {scalar_t__ aci_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct snd_miro_aci*) ;

__attribute__((used)) static int FUNC_2(struct snd_miro_aci *VAR_1, u8 VAR_2)
{
 if (FUNC_1(VAR_1) >= 0) {
  FUNC_0(VAR_2, VAR_1->aci_port + VAR_0);
  return 0;
 }
 return -1;
}
