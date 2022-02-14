
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct brcmf_sdio_dev {TYPE_1__* bus; } ;
struct brcmf_core {scalar_t__ base; } ;
struct brcmf_chip {int dummy; } ;
typedef int rstvec ;
struct TYPE_2__ {struct brcmf_core* sdio_core; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct brcmf_sdio_dev*,int,int ,void*,int) ;
 int FUNC_2 (struct brcmf_sdio_dev*,scalar_t__,int,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1, struct brcmf_chip *VAR_2,
     u32 VAR_3)
{
 struct brcmf_sdio_dev *VAR_4 = VAR_1;
 struct brcmf_core *VAR_5 = VAR_4->bus->sdio_core;
 u32 VAR_6;


 VAR_6 = VAR_5->base + FUNC_0(VAR_0);
 FUNC_2(VAR_4, VAR_6, 0xFFFFFFFF, ((void*)0));

 if (VAR_3)

  FUNC_1(VAR_4, 1, 0, (void *)&VAR_3,
      sizeof(VAR_3));
}
