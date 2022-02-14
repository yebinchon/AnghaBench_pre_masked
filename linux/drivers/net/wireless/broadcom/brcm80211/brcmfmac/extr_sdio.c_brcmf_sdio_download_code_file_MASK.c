
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct firmware {scalar_t__ size; scalar_t__ data; } ;
struct brcmf_sdio {TYPE_1__* ci; int sdiodev; } ;
struct TYPE_2__ {int rambase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int,int,int ) ;
 int FUNC_2 (int ,int ,int *,scalar_t__) ;
 int FUNC_3 (int ,int,int ,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct brcmf_sdio *VAR_2,
      const struct firmware *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_1, "Enter\n");

 VAR_4 = FUNC_3(VAR_2->sdiodev, 1, VAR_2->ci->rambase,
    (u8 *)VAR_3->data, VAR_3->size);
 if (VAR_4)
  FUNC_1("error %d on writing %d membytes at 0x%08x\n",
     VAR_4, (int)VAR_3->size, VAR_2->ci->rambase);
 else if (!FUNC_2(VAR_2->sdiodev, VAR_2->ci->rambase,
       (u8 *)VAR_3->data, VAR_3->size))
  VAR_4 = -VAR_0;

 return VAR_4;
}
