
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdio_func {int num; int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,unsigned int,int ,int *) ;

void FUNC_1(struct sdio_func *VAR_1, u8 VAR_2, unsigned int VAR_3, int *VAR_4)
{
 int VAR_5;

 if (!VAR_1) {
  if (VAR_4)
   *VAR_4 = -VAR_0;
  return;
 }

 VAR_5 = FUNC_0(VAR_1->card, 1, VAR_1->num, VAR_3, VAR_2, ((void*)0));
 if (VAR_4)
  *VAR_4 = VAR_5;
}
