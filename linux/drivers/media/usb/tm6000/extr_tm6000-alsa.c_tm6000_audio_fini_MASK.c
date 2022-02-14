
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {struct snd_tm6000_card* adev; } ;
struct snd_tm6000_card {int * card; } ;


 int FUNC_0 (struct snd_tm6000_card*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct tm6000_core *VAR_0)
{
 struct snd_tm6000_card *VAR_1;

 if (!VAR_0)
  return 0;
 VAR_1 = VAR_0->adev;

 if (!VAR_1)
  return 0;

 if (!VAR_1->card)
  return 0;

 FUNC_1(VAR_1->card);
 VAR_1->card = ((void*)0);
 FUNC_0(VAR_1);
 VAR_0->adev = ((void*)0);

 return 0;
}
