
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;int napi; int (* write_reg ) (struct xcan_priv*,int ,int) ;} ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int FUNC_0 (int *) ;
 struct xcan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xcan_priv*,int ) ;
 int FUNC_3 (struct xcan_priv*,int ,int) ;
 int FUNC_4 (struct xcan_priv*,int ,int) ;
 int FUNC_5 (struct xcan_priv*,int ) ;
 int FUNC_6 (struct xcan_priv*,int ,int) ;
 int FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct xcan_priv*) ;
 int FUNC_9 (struct net_device*,int) ;
 int FUNC_10 (struct net_device*,int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_13, void *VAR_14)
{
 struct net_device *VAR_15 = (struct net_device *)VAR_14;
 struct xcan_priv *VAR_16 = FUNC_1(VAR_15);
 u32 VAR_17, VAR_18;
 u32 VAR_19;
 u32 VAR_20 = FUNC_8(VAR_16);


 VAR_17 = VAR_16->read_reg(VAR_16, VAR_4);
 if (!VAR_17)
  return VAR_1;


 if (VAR_17 & (VAR_10 | VAR_12)) {
  VAR_16->write_reg(VAR_16, VAR_2, (VAR_10 |
    VAR_12));
  FUNC_9(VAR_15, VAR_17);
 }


 if (VAR_17 & VAR_11)
  FUNC_10(VAR_15, VAR_17);


 VAR_19 = VAR_17 & (VAR_7 | VAR_9 |
       VAR_6 | VAR_5 |
       VAR_8);
 if (VAR_19) {
  VAR_16->write_reg(VAR_16, VAR_2, VAR_19);
  FUNC_7(VAR_15, VAR_17);
 }


 if (VAR_17 & VAR_20) {
  VAR_18 = VAR_16->read_reg(VAR_16, VAR_3);
  VAR_18 &= ~VAR_20;
  VAR_16->write_reg(VAR_16, VAR_3, VAR_18);
  FUNC_0(&VAR_16->napi);
 }
 return VAR_0;
}
