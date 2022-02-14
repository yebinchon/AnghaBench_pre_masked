
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct brcmf_sdio_dev {int func1; struct brcmf_sdio* bus; } ;
struct brcmf_sdio {TYPE_2__* ci; } ;
struct TYPE_3__ {struct brcmf_sdio_dev* sdio; } ;
struct brcmf_bus {TYPE_1__ bus_priv; } ;
struct TYPE_4__ {int rambase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,size_t) ;
 int FUNC_1 (char*,int,int,int) ;
 int FUNC_2 (struct brcmf_sdio_dev*,int,int,void*,int) ;
 struct brcmf_bus* FUNC_3 (struct device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, void *VAR_3,
          size_t VAR_4)
{
 struct brcmf_bus *VAR_5 = FUNC_3(VAR_2);
 struct brcmf_sdio_dev *VAR_6 = VAR_5->bus_priv.sdio;
 struct brcmf_sdio *VAR_7 = VAR_6->bus;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_0(VAR_0, "dump at 0x%08x: size=%zu\n", VAR_7->ci->rambase,
    VAR_4);

 VAR_9 = VAR_7->ci->rambase;
 VAR_10 = VAR_8 = 0;
 FUNC_4(VAR_6->func1);
 while (VAR_10 < VAR_4) {
  VAR_11 = ((VAR_10 + VAR_1) < VAR_4) ? VAR_1 :
        VAR_4 - VAR_10;
  VAR_8 = FUNC_2(VAR_6, 0, VAR_9, VAR_3, VAR_11);
  if (VAR_8) {
   FUNC_1("error %d on reading %d membytes at 0x%08x\n",
      VAR_8, VAR_11, VAR_9);
   goto done;
  }
  VAR_3 += VAR_11;
  VAR_10 += VAR_11;
  VAR_9 += VAR_11;
 }

done:
 FUNC_5(VAR_6->func1);
 return VAR_8;
}
