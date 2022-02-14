
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_sdio {TYPE_1__* sdiodev; } ;
struct TYPE_2__ {int func1; } ;


 int FUNC_0 (struct brcmf_sdio*,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct brcmf_sdio *VAR_0, bool VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0->sdiodev->func1);
 VAR_2 = FUNC_0(VAR_0, VAR_1, 0);
 FUNC_2(VAR_0->sdiodev->func1);

 return VAR_2;
}
