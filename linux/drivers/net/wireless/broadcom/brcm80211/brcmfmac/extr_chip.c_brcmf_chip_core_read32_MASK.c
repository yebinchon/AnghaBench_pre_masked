
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ base; } ;
struct brcmf_core_priv {TYPE_3__ pub; TYPE_2__* chip; } ;
struct TYPE_5__ {int ctx; TYPE_1__* ops; } ;
struct TYPE_4__ {int (* read32 ) (int ,scalar_t__) ;} ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct brcmf_core_priv *VAR_0, u16 VAR_1)
{
 return VAR_0->chip->ops->read32(VAR_0->chip->ctx, VAR_0->pub.base + VAR_1);
}
