
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int dummy; } ;
struct bcm2835_chip {int card; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct snd_kcontrol_new const*,struct bcm2835_chip*) ;

__attribute__((used)) static int FUNC_2(struct bcm2835_chip *VAR_0, size_t VAR_1,
         const struct snd_kcontrol_new *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_0(VAR_0->card, FUNC_1(&VAR_2[VAR_3], VAR_0));
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
