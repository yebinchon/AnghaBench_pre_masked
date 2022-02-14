
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int card; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,unsigned int,int ,unsigned char*) ;

unsigned char FUNC_1(struct sdio_func *VAR_1, unsigned int VAR_2,
 int *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 if (!VAR_1) {
  if (VAR_3)
   *VAR_3 = -VAR_0;
  return 0xFF;
 }

 VAR_4 = FUNC_0(VAR_1->card, 0, 0, VAR_2, 0, &VAR_5);
 if (VAR_3)
  *VAR_3 = VAR_4;
 if (VAR_4)
  return 0xFF;

 return VAR_5;
}
