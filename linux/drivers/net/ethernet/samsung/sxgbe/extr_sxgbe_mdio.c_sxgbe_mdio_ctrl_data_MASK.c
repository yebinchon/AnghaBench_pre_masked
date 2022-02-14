
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sxgbe_priv_data {int clk_csr; TYPE_2__* hw; scalar_t__ ioaddr; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct TYPE_4__ {TYPE_1__ mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sxgbe_priv_data *VAR_2, u32 VAR_3,
     u16 VAR_4)
{
 u32 VAR_5 = VAR_4;

 VAR_5 |= (VAR_3 << 16) | VAR_1 |
        ((VAR_2->clk_csr & 0x7) << 19) | VAR_0;
 FUNC_0(VAR_5, VAR_2->ioaddr + VAR_2->hw->mii.data);
}
