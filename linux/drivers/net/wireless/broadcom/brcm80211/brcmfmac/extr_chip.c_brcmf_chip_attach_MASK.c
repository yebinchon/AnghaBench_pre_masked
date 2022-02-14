
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_chip {int dummy; } ;
struct brcmf_chip_priv {struct brcmf_chip pub; void* ctx; struct brcmf_buscore_ops const* ops; scalar_t__ num_cores; int cores; } ;
struct brcmf_buscore_ops {int (* prepare ) (void*) ;int activate; int write32; int read32; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct brcmf_chip* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct brcmf_chip*) ;
 int FUNC_4 (struct brcmf_chip_priv*) ;
 int FUNC_5 (struct brcmf_chip_priv*) ;
 struct brcmf_chip_priv* FUNC_6 (int,int ) ;
 int FUNC_7 (void*) ;

struct brcmf_chip *FUNC_8(void *VAR_3,
         const struct brcmf_buscore_ops *VAR_4)
{
 struct brcmf_chip_priv *VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(!VAR_4->read32))
  VAR_6 = -VAR_0;
 if (FUNC_2(!VAR_4->write32))
  VAR_6 = -VAR_0;
 if (FUNC_2(!VAR_4->prepare))
  VAR_6 = -VAR_0;
 if (FUNC_2(!VAR_4->activate))
  VAR_6 = -VAR_0;
 if (VAR_6 < 0)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_1(&VAR_5->cores);
 VAR_5->num_cores = 0;
 VAR_5->ops = VAR_4;
 VAR_5->ctx = VAR_3;

 VAR_6 = VAR_4->prepare(VAR_3);
 if (VAR_6 < 0)
  goto fail;

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6 < 0)
  goto fail;

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 < 0)
  goto fail;

 return &VAR_5->pub;

fail:
 FUNC_3(&VAR_5->pub);
 return FUNC_0(VAR_6);
}
