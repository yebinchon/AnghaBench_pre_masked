
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;int (* write_reg ) (struct xcan_priv*,int ,int) ;TYPE_1__ devtype; } ;
struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct napi_struct*,int) ;
 struct xcan_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xcan_priv*,int ,int) ;
 int FUNC_4 (struct xcan_priv*,int ,int) ;
 int FUNC_5 (struct xcan_priv*,int ) ;
 int FUNC_6 (struct xcan_priv*,int ,int) ;
 scalar_t__ FUNC_7 (struct net_device*,int) ;
 int FUNC_8 (struct xcan_priv*) ;
 int FUNC_9 (struct xcan_priv*) ;
 int FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*,int) ;

__attribute__((used)) static int FUNC_12(struct napi_struct *VAR_8, int VAR_9)
{
 struct net_device *VAR_10 = VAR_8->dev;
 struct xcan_priv *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12;
 int VAR_13 = 0;
 int VAR_14;

 while ((VAR_14 = FUNC_8(VAR_11)) >= 0 &&
        (VAR_13 < VAR_9)) {
  if (FUNC_9(VAR_11) & VAR_7)
   VAR_13 += FUNC_11(VAR_10, VAR_14);
  else
   VAR_13 += FUNC_7(VAR_10, VAR_14);

  if (VAR_11->devtype.flags & VAR_1)

   VAR_11->write_reg(VAR_11, VAR_3,
     VAR_2);
  else



   VAR_11->write_reg(VAR_11, VAR_4,
     VAR_6);
 }

 if (VAR_13) {
  FUNC_0(VAR_10, VAR_0);
  FUNC_10(VAR_10);
 }

 if (VAR_13 < VAR_9) {
  FUNC_1(VAR_8, VAR_13);
  VAR_12 = VAR_11->read_reg(VAR_11, VAR_5);
  VAR_12 |= FUNC_9(VAR_11);
  VAR_11->write_reg(VAR_11, VAR_5, VAR_12);
 }
 return VAR_13;
}
