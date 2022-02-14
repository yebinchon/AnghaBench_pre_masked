
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct brcmf_core {void* base; int id; } ;
struct brcmf_core_priv {struct brcmf_core pub; int list; void* wrapbase; struct brcmf_chip_priv* chip; } ;
struct brcmf_chip_priv {int cores; } ;


 int VAR_0 ;
 struct brcmf_core* FUNC_0 (int ) ;
 int VAR_1 ;
 struct brcmf_core_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static struct brcmf_core *FUNC_3(struct brcmf_chip_priv *VAR_2,
           u16 VAR_3, u32 VAR_4,
           u32 VAR_5)
{
 struct brcmf_core_priv *VAR_6;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->pub.id = VAR_3;
 VAR_6->pub.base = VAR_4;
 VAR_6->chip = VAR_2;
 VAR_6->wrapbase = VAR_5;

 FUNC_2(&VAR_6->list, &VAR_2->cores);
 return &VAR_6->pub;
}
