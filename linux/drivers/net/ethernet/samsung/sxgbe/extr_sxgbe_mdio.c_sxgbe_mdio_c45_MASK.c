
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sxgbe_priv_data {TYPE_2__* hw; scalar_t__ ioaddr; } ;
struct TYPE_3__ {scalar_t__ addr; } ;
struct TYPE_4__ {TYPE_1__ mii; } ;


 int FUNC_0 (struct sxgbe_priv_data*,int,int ) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sxgbe_priv_data *VAR_0, u32 VAR_1, int VAR_2,
      int VAR_3, u16 VAR_4)
{
 u32 VAR_5;


 VAR_5 = ((VAR_3 >> 16) & 0x1f) << 21;
 VAR_5 |= (VAR_2 << 16) | (VAR_3 & 0xffff);
 FUNC_1(VAR_5, VAR_0->ioaddr + VAR_0->hw->mii.addr);

 FUNC_0(VAR_0, VAR_1, VAR_4);
}
