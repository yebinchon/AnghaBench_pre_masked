
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_2__ {int p; } ;
struct snd_kcontrol_new {int private_value; char* name; TYPE_1__ tlv; int info; int put; int get; void* iface; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct em28xx {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_kcontrol_new*,int ,int) ;
 int FUNC_2 (struct snd_card*,struct snd_kcontrol*) ;
 int VAR_7 ;
 struct snd_kcontrol* FUNC_3 (struct snd_kcontrol_new*,struct em28xx*) ;
 int FUNC_4 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_8, struct em28xx *VAR_9,
      char *VAR_10, int VAR_11)
{
 int VAR_12;
 char VAR_13[44];
 struct snd_kcontrol *VAR_14;
 struct snd_kcontrol_new VAR_15;

 FUNC_1(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.iface = VAR_0,
 VAR_15.private_value = VAR_11,
 VAR_15.name = VAR_13,


 FUNC_4(VAR_13, "%s Switch", VAR_10);
 VAR_15.get = VAR_3;
 VAR_15.put = VAR_6;
 VAR_15.info = VAR_7;
 VAR_14 = FUNC_3(&VAR_15, VAR_9);
 VAR_12 = FUNC_2(VAR_8, VAR_14);
 if (VAR_12 < 0)
  return VAR_12;
 FUNC_0("Added control %s for ac97 volume control 0x%04x\n",
  VAR_13, VAR_11);

 FUNC_1(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.iface = VAR_0,
 VAR_15.private_value = VAR_11,
 VAR_15.name = VAR_13,


 FUNC_4(VAR_13, "%s Volume", VAR_10);
 VAR_15.get = VAR_2;
 VAR_15.put = VAR_5;
 VAR_15.info = VAR_4;
 VAR_15.tlv.p = VAR_1,
 VAR_14 = FUNC_3(&VAR_15, VAR_9);
 VAR_12 = FUNC_2(VAR_8, VAR_14);
 if (VAR_12 < 0)
  return VAR_12;
 FUNC_0("Added control %s for ac97 volume control 0x%04x\n",
  VAR_13, VAR_11);

 return 0;
}
