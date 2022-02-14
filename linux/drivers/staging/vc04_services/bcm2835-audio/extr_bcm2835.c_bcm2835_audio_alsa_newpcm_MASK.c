
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bcm2835_chip {int dummy; } ;
typedef enum snd_bcm2835_route { ____Placeholder_snd_bcm2835_route } snd_bcm2835_route ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_chip*,char*,int,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct bcm2835_chip *VAR_1,
         const char *VAR_2,
         enum snd_bcm2835_route VAR_3,
         u32 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, "bcm2835 ALSA", 0, VAR_0,
      VAR_4 - 1, 0);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_1, "bcm2835 IEC958/HDMI", 1, 0, 1, 1);
 if (VAR_5)
  return VAR_5;

 return 0;
}
