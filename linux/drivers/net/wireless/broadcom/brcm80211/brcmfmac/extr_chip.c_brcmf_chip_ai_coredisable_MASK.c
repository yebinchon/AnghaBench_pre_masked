
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_core_priv {scalar_t__ wrapbase; struct brcmf_chip_priv* chip; } ;
struct brcmf_chip_priv {int ctx; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read32 ) (int ,scalar_t__) ;int (* write32 ) (int ,scalar_t__,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,scalar_t__,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct brcmf_core_priv *VAR_5,
          u32 VAR_6, u32 VAR_7)
{
 struct brcmf_chip_priv *VAR_8;
 u32 VAR_9;

 VAR_8 = VAR_5->chip;


 VAR_9 = VAR_8->ops->read32(VAR_8->ctx, VAR_5->wrapbase + VAR_3);
 if ((VAR_9 & VAR_4) != 0)
  goto in_reset_configure;


 VAR_8->ops->write32(VAR_8->ctx, VAR_5->wrapbase + VAR_0,
    VAR_6 | VAR_2 | VAR_1);
 VAR_8->ops->read32(VAR_8->ctx, VAR_5->wrapbase + VAR_0);


 VAR_8->ops->write32(VAR_8->ctx, VAR_5->wrapbase + VAR_3,
    VAR_4);
 FUNC_8(10, 20);


 FUNC_0(VAR_8->ops->read32(VAR_8->ctx, VAR_5->wrapbase + VAR_3) !=
   VAR_4, 300);

in_reset_configure:

 VAR_8->ops->write32(VAR_8->ctx, VAR_5->wrapbase + VAR_0,
    VAR_7 | VAR_2 | VAR_1);
 VAR_8->ops->read32(VAR_8->ctx, VAR_5->wrapbase + VAR_0);
}
