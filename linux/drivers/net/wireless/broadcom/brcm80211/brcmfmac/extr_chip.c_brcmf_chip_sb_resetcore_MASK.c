
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int base; } ;
struct brcmf_core_priv {TYPE_1__ pub; struct brcmf_chip_priv* chip; } ;
struct brcmf_chip_priv {int ctx; TYPE_2__* ops; } ;
struct TYPE_4__ {int (* read32 ) (int ,int ) ;int (* write32 ) (int ,int ,int) ;} ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct brcmf_core_priv*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct brcmf_core_priv *VAR_9, u32 VAR_10,
        u32 VAR_11, u32 VAR_12)
{
 struct brcmf_chip_priv *VAR_13;
 u32 VAR_14;
 u32 VAR_15;

 VAR_13 = VAR_9->chip;
 VAR_15 = VAR_9->pub.base;




 FUNC_1(VAR_9, 0, 0);






 VAR_13->ops->write32(VAR_13->ctx, FUNC_0(VAR_15, VAR_8),
    VAR_4 | VAR_3 |
    VAR_5);
 VAR_14 = VAR_13->ops->read32(VAR_13->ctx, FUNC_0(VAR_15, VAR_8));
 FUNC_12(1);


 VAR_14 = VAR_13->ops->read32(VAR_13->ctx, FUNC_0(VAR_15, VAR_7));
 if (VAR_14 & VAR_2)
  VAR_13->ops->write32(VAR_13->ctx, FUNC_0(VAR_15, VAR_7), 0);

 VAR_14 = VAR_13->ops->read32(VAR_13->ctx, FUNC_0(VAR_15, VAR_6));
 if (VAR_14 & (VAR_0 | VAR_1)) {
  VAR_14 &= ~(VAR_0 | VAR_1);
  VAR_13->ops->write32(VAR_13->ctx, FUNC_0(VAR_15, VAR_6), VAR_14);
 }


 VAR_13->ops->write32(VAR_13->ctx, FUNC_0(VAR_15, VAR_8),
    VAR_4 | VAR_3);
 VAR_14 = VAR_13->ops->read32(VAR_13->ctx, FUNC_0(VAR_15, VAR_8));
 FUNC_12(1);


 VAR_13->ops->write32(VAR_13->ctx, FUNC_0(VAR_15, VAR_8),
    VAR_3);
 VAR_14 = VAR_13->ops->read32(VAR_13->ctx, FUNC_0(VAR_15, VAR_8));
 FUNC_12(1);
}
