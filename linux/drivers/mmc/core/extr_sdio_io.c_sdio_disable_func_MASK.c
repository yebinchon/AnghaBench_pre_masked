
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sdio_func*) ;

int FUNC_3(struct sdio_func *VAR_3)
{
 int VAR_4;
 unsigned char VAR_5;

 if (!VAR_3)
  return -VAR_0;

 FUNC_1("SDIO: Disabling device %s...\n", FUNC_2(VAR_3));

 VAR_4 = FUNC_0(VAR_3->card, 0, 0, VAR_2, 0, &VAR_5);
 if (VAR_4)
  goto err;

 VAR_5 &= ~(1 << VAR_3->num);

 VAR_4 = FUNC_0(VAR_3->card, 1, 0, VAR_2, VAR_5, ((void*)0));
 if (VAR_4)
  goto err;

 FUNC_1("SDIO: Disabled device %s\n", FUNC_2(VAR_3));

 return 0;

err:
 FUNC_1("SDIO: Failed to disable device %s\n", FUNC_2(VAR_3));
 return -VAR_1;
}
