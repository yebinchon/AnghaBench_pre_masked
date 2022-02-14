
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {struct iproc_mdio_priv* priv; } ;
struct iproc_mdio_priv {scalar_t__ base; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_9, int VAR_10, int VAR_11)
{
 struct iproc_mdio_priv *VAR_12 = VAR_9->priv;
 u32 VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_12->base);
 if (VAR_14)
  return VAR_14;


 VAR_13 = (VAR_8 << VAR_7) |
  (VAR_11 << VAR_5) |
  (VAR_10 << VAR_4) |
  FUNC_0(VAR_6) |
  (VAR_2 << VAR_3);

 FUNC_3(VAR_13, VAR_12->base + VAR_1);

 VAR_14 = FUNC_1(VAR_12->base);
 if (VAR_14)
  return VAR_14;

 VAR_13 = FUNC_2(VAR_12->base + VAR_1) & VAR_0;

 return VAR_13;
}
