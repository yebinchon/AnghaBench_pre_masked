
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; } ;
struct brcmf_sdio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int ,int ,int *) ;

int FUNC_2(struct brcmf_sdio_dev *VAR_2, struct sdio_func *VAR_3)
{
 FUNC_0(VAR_0, "Enter\n");


 FUNC_1(VAR_2, VAR_1, VAR_3->num, ((void*)0));

 FUNC_0(VAR_0, "Exit\n");
 return 0;
}
