
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_miro_aci {int aci_version; } ;
struct pcm20 {struct snd_miro_aci* aci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_miro_aci*,int ,int *,int ) ;
 int FUNC_1 (struct snd_miro_aci*,int ,unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct pcm20 *VAR_2, unsigned long VAR_3)
{
 unsigned char VAR_4;
 unsigned char VAR_5;
 struct snd_miro_aci *VAR_6 = VAR_2->aci;

 VAR_3 /= 160;
 if (!(VAR_6->aci_version == 0x07 || VAR_6->aci_version >= 0xb0))
  VAR_3 /= 10;

 VAR_4 = VAR_3 & 0xff;
 VAR_5 = VAR_3 >> 8;

 FUNC_0(VAR_6, VAR_1, ((void*)0), 0);
 return FUNC_1(VAR_6, VAR_0, VAR_4, VAR_5);
}
