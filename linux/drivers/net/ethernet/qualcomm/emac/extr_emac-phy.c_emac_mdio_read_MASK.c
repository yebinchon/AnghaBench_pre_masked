
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {struct emac_adapter* priv; } ;
struct emac_adapter {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int,int ,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_18, int VAR_19, int VAR_20)
{
 struct emac_adapter *VAR_21 = VAR_18->priv;
 u32 VAR_22;

 FUNC_0(VAR_21->base + VAR_2, VAR_15,
     (VAR_19 << VAR_16));

 VAR_22 = VAR_17 |
       ((VAR_4 << VAR_6) & VAR_5) |
       ((VAR_20 << VAR_11) & VAR_10) |
       VAR_12 | VAR_9;

 FUNC_2(VAR_22, VAR_21->base + VAR_1);

 if (FUNC_1(VAR_21->base + VAR_1, VAR_22,
          !(VAR_22 & (VAR_12 | VAR_3)),
          VAR_13, VAR_14 * 100))
  return -VAR_0;

 return (VAR_22 >> VAR_8) & VAR_7;
}
