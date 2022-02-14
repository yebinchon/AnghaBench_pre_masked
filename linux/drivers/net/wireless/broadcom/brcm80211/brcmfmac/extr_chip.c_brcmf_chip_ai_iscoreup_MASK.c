
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_core_priv {scalar_t__ wrapbase; struct brcmf_chip_priv* chip; } ;
struct brcmf_chip_priv {int ctx; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read32 ) (int ,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_2(struct brcmf_core_priv *VAR_5)
{
 struct brcmf_chip_priv *VAR_6;
 u32 VAR_7;
 bool VAR_8;

 VAR_6 = VAR_5->chip;
 VAR_7 = VAR_6->ops->read32(VAR_6->ctx, VAR_5->wrapbase + VAR_0);
 VAR_8 = (VAR_7 & (VAR_2 | VAR_1)) == VAR_1;

 VAR_7 = VAR_6->ops->read32(VAR_6->ctx, VAR_5->wrapbase + VAR_3);
 VAR_8 = VAR_8 && ((VAR_7 & VAR_4) == 0);

 return VAR_8;
}
