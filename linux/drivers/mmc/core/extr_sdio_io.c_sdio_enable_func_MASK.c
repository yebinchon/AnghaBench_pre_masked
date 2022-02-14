
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; int enable_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sdio_func*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct sdio_func *VAR_5)
{
 int VAR_6;
 unsigned char VAR_7;
 unsigned long VAR_8;

 if (!VAR_5)
  return -VAR_0;

 FUNC_2("SDIO: Enabling device %s...\n", FUNC_3(VAR_5));

 VAR_6 = FUNC_0(VAR_5->card, 0, 0, VAR_2, 0, &VAR_7);
 if (VAR_6)
  goto err;

 VAR_7 |= 1 << VAR_5->num;

 VAR_6 = FUNC_0(VAR_5->card, 1, 0, VAR_2, VAR_7, ((void*)0));
 if (VAR_6)
  goto err;

 VAR_8 = VAR_4 + FUNC_1(VAR_5->enable_timeout);

 while (1) {
  VAR_6 = FUNC_0(VAR_5->card, 0, 0, VAR_3, 0, &VAR_7);
  if (VAR_6)
   goto err;
  if (VAR_7 & (1 << VAR_5->num))
   break;
  VAR_6 = -VAR_1;
  if (FUNC_4(VAR_4, VAR_8))
   goto err;
 }

 FUNC_2("SDIO: Enabled device %s\n", FUNC_3(VAR_5));

 return 0;

err:
 FUNC_2("SDIO: Failed to enable device %s\n", FUNC_3(VAR_5));
 return VAR_6;
}
