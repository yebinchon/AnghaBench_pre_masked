
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct brcmf_chip_priv {int ctx; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* read32 ) (int ,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static u32 FUNC_1(struct brcmf_chip_priv *VAR_3, u32 *VAR_4,
       u8 *VAR_5)
{
 u32 VAR_6;


 VAR_6 = VAR_3->ops->read32(VAR_3->ctx, *VAR_4);
 *VAR_4 += 4;

 if (!VAR_5)
  return VAR_6;


 *VAR_5 = (VAR_6 & VAR_2);
 if ((*VAR_5 & ~VAR_1) == VAR_0)
  *VAR_5 = VAR_0;

 return VAR_6;
}
