
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mscc_miim_dev {scalar_t__ regs; } ;
struct mii_bus {struct mscc_miim_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_8, int VAR_9, int VAR_10)
{
 struct mscc_miim_dev *VAR_11 = VAR_8->priv;
 u32 VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13)
  goto out;

 FUNC_2(VAR_4 | (VAR_9 << VAR_2) |
        (VAR_10 << VAR_3) | VAR_1,
        VAR_11->regs + VAR_6);

 VAR_13 = FUNC_0(VAR_8);
 if (VAR_13)
  goto out;

 VAR_12 = FUNC_1(VAR_11->regs + VAR_7);
 if (VAR_12 & VAR_5) {
  VAR_13 = -VAR_0;
  goto out;
 }

 VAR_13 = VAR_12 & 0xFFFF;
out:
 return VAR_13;
}
