
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
struct TYPE_4__ {int (* read32 ) (int ,int) ;} ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static bool FUNC_2(struct brcmf_core_priv *VAR_5)
{
 struct brcmf_chip_priv *VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 VAR_6 = VAR_5->chip;
 VAR_8 = FUNC_0(VAR_5->pub.base, VAR_4);
 VAR_7 = VAR_6->ops->read32(VAR_6->ctx, VAR_8);
 VAR_7 &= (VAR_3 | VAR_2 |
      VAR_0 | VAR_1);
 return VAR_1 == VAR_7;
}
