
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
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int) ;

__attribute__((used)) static void FUNC_22(struct brcmf_core_priv *VAR_12,
          u32 VAR_13, u32 VAR_14)
{
 struct brcmf_chip_priv *VAR_15;
 u32 VAR_16, VAR_17;

 VAR_15 = VAR_12->chip;
 VAR_17 = VAR_12->pub.base;
 VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11));
 if (VAR_16 & VAR_7)
  return;

 VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11));
 if ((VAR_16 & VAR_4) != 0) {




  VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11));
  VAR_15->ops->write32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11),
      VAR_16 | VAR_6);

  VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11));
  FUNC_21(1);
  FUNC_1((VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_10))
     & VAR_3), 100000);

  VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_10));
  if (VAR_16 & VAR_3)
   FUNC_2("core state still busy\n");

  VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_8));
  if (VAR_16 & VAR_0) {
   VAR_16 = VAR_15->ops->read32(VAR_15->ctx,
           FUNC_0(VAR_17, VAR_9));
   VAR_16 |= VAR_2;
   VAR_15->ops->write32(VAR_15->ctx,
      FUNC_0(VAR_17, VAR_9), VAR_16);
   VAR_16 = VAR_15->ops->read32(VAR_15->ctx,
           FUNC_0(VAR_17, VAR_9));
   FUNC_21(1);
   FUNC_1((VAR_15->ops->read32(VAR_15->ctx,
        FUNC_0(VAR_17, VAR_9)) &
      VAR_1), 100000);
  }


  VAR_16 = VAR_5 | VAR_4 |
        VAR_6 | VAR_7;
  VAR_15->ops->write32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11), VAR_16);
  VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11));
  FUNC_21(10);


  VAR_16 = VAR_15->ops->read32(VAR_15->ctx, FUNC_0(VAR_17, VAR_8));
  if (VAR_16 & VAR_0) {
   VAR_16 = VAR_15->ops->read32(VAR_15->ctx,
           FUNC_0(VAR_17, VAR_9));
   VAR_16 &= ~VAR_2;
   VAR_15->ops->write32(VAR_15->ctx,
      FUNC_0(VAR_17, VAR_9), VAR_16);
  }
 }


 VAR_15->ops->write32(VAR_15->ctx, FUNC_0(VAR_17, VAR_11),
    (VAR_6 | VAR_7));
 FUNC_21(1);
}
