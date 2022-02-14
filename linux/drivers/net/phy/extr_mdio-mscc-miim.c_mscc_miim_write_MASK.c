
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mscc_miim_dev {scalar_t__ regs; } ;
struct mii_bus {struct mscc_miim_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct mii_bus *VAR_6, int VAR_7,
      int VAR_8, u16 VAR_9)
{
 struct mscc_miim_dev *VAR_10 = VAR_6->priv;
 int VAR_11;

 VAR_11 = FUNC_0(VAR_6);
 if (VAR_11 < 0)
  goto out;

 FUNC_1(VAR_3 | (VAR_7 << VAR_1) |
        (VAR_8 << VAR_2) |
        (VAR_9 << VAR_4) |
        VAR_0,
        VAR_10->regs + VAR_5);

out:
 return VAR_11;
}
