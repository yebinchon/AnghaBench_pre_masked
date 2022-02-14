
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ,unsigned int,unsigned char,int *) ;

void FUNC_2(struct sdio_func *VAR_1, unsigned char VAR_2, unsigned int VAR_3,
 int *VAR_4)
{
 int VAR_5;

 if (!VAR_1) {
  if (VAR_4)
   *VAR_4 = -VAR_0;
  return;
 }

 if ((VAR_3 < 0xF0 || VAR_3 > 0xFF) && (!FUNC_0(VAR_1->card))) {
  if (VAR_4)
   *VAR_4 = -VAR_0;
  return;
 }

 VAR_5 = FUNC_1(VAR_1->card, 1, 0, VAR_3, VAR_2, ((void*)0));
 if (VAR_4)
  *VAR_4 = VAR_5;
}
