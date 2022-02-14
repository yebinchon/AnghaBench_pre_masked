
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {int * snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct solo_dev*,int ) ;
 int FUNC_2 (struct solo_dev*,int ,int ) ;

void FUNC_3(struct solo_dev *VAR_2)
{
 if (!VAR_2->snd_card)
  return;

 FUNC_2(VAR_2, VAR_0, 0);
 FUNC_1(VAR_2, VAR_1);

 FUNC_0(VAR_2->snd_card);
 VAR_2->snd_card = ((void*)0);
}
