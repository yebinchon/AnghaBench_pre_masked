
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcmf_core_priv*,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct brcmf_core_priv *VAR_4, u32 VAR_5,
        u32 VAR_6, u32 VAR_7)
{
 struct brcmf_chip_priv *VAR_8;
 int VAR_9;

 VAR_8 = VAR_4->chip;


 FUNC_0(VAR_4, VAR_5, VAR_6);

 VAR_9 = 0;
 while (VAR_8->ops->read32(VAR_8->ctx, VAR_4->wrapbase + VAR_2) &
        VAR_3) {
  VAR_8->ops->write32(VAR_8->ctx, VAR_4->wrapbase + VAR_2, 0);
  VAR_9++;
  if (VAR_9 > 50)
   break;
  FUNC_5(40, 60);
 }

 VAR_8->ops->write32(VAR_8->ctx, VAR_4->wrapbase + VAR_0,
    VAR_7 | VAR_1);
 VAR_8->ops->read32(VAR_8->ctx, VAR_4->wrapbase + VAR_0);
}
