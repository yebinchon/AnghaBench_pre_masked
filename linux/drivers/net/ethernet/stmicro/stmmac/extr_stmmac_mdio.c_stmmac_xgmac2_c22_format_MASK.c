
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct stmmac_priv {scalar_t__ ioaddr; TYPE_2__* hw; } ;
struct TYPE_3__ {unsigned int data; } ;
struct TYPE_4__ {TYPE_1__ mii; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stmmac_priv *VAR_6, int VAR_7,
        int VAR_8, u32 *VAR_9)
{
 unsigned int VAR_10 = VAR_6->hw->mii.data;
 u32 VAR_11;


 if (VAR_7 > VAR_4)
  return -VAR_1;

 if (FUNC_2(VAR_6->ioaddr + VAR_10, VAR_11,
          !(VAR_11 & VAR_2), 100, 10000))
  return -VAR_0;


 VAR_11 = FUNC_1(VAR_6->ioaddr + VAR_5);
 VAR_11 &= ~VAR_3;
 VAR_11 |= FUNC_0(VAR_7);
 FUNC_3(VAR_11, VAR_6->ioaddr + VAR_5);

 *VAR_9 = (VAR_7 << 16) | (VAR_8 & 0x1f);
 return 0;
}
