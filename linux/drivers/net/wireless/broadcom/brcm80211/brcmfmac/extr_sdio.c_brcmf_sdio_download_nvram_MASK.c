
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_sdio {int sdiodev; TYPE_1__* ci; } ;
struct TYPE_2__ {int ramsize; int rambase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (int ,int,void*,int) ;
 int FUNC_3 (int ,int,int,void*,int) ;

__attribute__((used)) static int FUNC_4(struct brcmf_sdio *VAR_2,
         void *VAR_3, u32 VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_0(VAR_1, "Enter\n");

 VAR_5 = VAR_2->ci->ramsize - VAR_4 + VAR_2->ci->rambase;
 VAR_6 = FUNC_3(VAR_2->sdiodev, 1, VAR_5, VAR_3, VAR_4);
 if (VAR_6)
  FUNC_1("error %d on writing %d nvram bytes at 0x%08x\n",
     VAR_6, VAR_4, VAR_5);
 else if (!FUNC_2(VAR_2->sdiodev, VAR_5, VAR_3, VAR_4))
  VAR_6 = -VAR_0;

 return VAR_6;
}
