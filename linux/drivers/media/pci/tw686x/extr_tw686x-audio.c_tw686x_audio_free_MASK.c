
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tw686x_dev {int * snd_card; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tw686x_dev*,int ) ;
 int FUNC_1 (struct tw686x_dev*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct tw686x_dev *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 FUNC_3(&VAR_2->lock, VAR_3);
 VAR_5 = FUNC_0(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_0);
 FUNC_1(VAR_2, VAR_1, VAR_5 & ~0xff00);
 FUNC_1(VAR_2, VAR_0, VAR_4 & ~0xff00);
 FUNC_4(&VAR_2->lock, VAR_3);

 if (!VAR_2->snd_card)
  return;
 FUNC_2(VAR_2->snd_card);
 VAR_2->snd_card = ((void*)0);
}
