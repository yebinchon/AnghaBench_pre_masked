
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct cc770_priv {int dummy; } ;
struct TYPE_2__ {int ctrl1; int ctrl0; } ;


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
 int FUNC_0 (struct cc770_priv*,int ) ;
 int FUNC_1 (struct net_device*,unsigned int,int) ;
 int FUNC_2 (struct cc770_priv*,int ,int) ;
 TYPE_1__* VAR_10 ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_11, unsigned int VAR_12)
{
 struct cc770_priv *VAR_13 = FUNC_3(VAR_11);
 unsigned int VAR_14 = FUNC_4(VAR_12);
 u8 VAR_15, VAR_16;
 int VAR_17 = VAR_0;

 while (VAR_17--) {
  VAR_15 = FUNC_0(VAR_13, VAR_10[VAR_14].ctrl0);
  if (!(VAR_15 & VAR_3))
   break;

  VAR_16 = FUNC_0(VAR_13, VAR_10[VAR_14].ctrl1);
  FUNC_1(VAR_11, VAR_14, VAR_16);

  FUNC_2(VAR_13, VAR_10[VAR_14].ctrl0,
    VAR_4 | VAR_8 |
    VAR_7 | VAR_2);
  FUNC_2(VAR_13, VAR_10[VAR_14].ctrl1,
    VAR_5 | VAR_1 |
    VAR_9 | VAR_6);
 }
}
