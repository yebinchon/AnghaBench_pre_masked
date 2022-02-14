
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sxgbe_priv_data {int ioaddr; TYPE_1__* hw; } ;
struct mii_regs {int data; } ;
struct TYPE_2__ {struct mii_regs mii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sxgbe_priv_data*,int ,int,int,int ) ;
 int FUNC_2 (struct sxgbe_priv_data*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_3(struct sxgbe_priv_data *VAR_2, u32 VAR_3, int VAR_4,
        int VAR_5, u16 VAR_6)
{
 const struct mii_regs *VAR_7 = &VAR_2->hw->mii;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_2->ioaddr, VAR_7->data);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_5 & VAR_1) {
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 } else {

  if (VAR_4 >= 4)
   return -VAR_0;

  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 }

 return FUNC_0(VAR_2->ioaddr, VAR_7->data);
}
