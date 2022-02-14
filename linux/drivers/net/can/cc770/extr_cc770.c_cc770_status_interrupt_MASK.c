
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct cc770_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct cc770_priv*,int) ;
 int FUNC_2 (struct cc770_priv*,int,int) ;
 struct cc770_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
 struct cc770_priv *VAR_4 = FUNC_3(VAR_3);
 u8 VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_5);

 FUNC_2(VAR_4, VAR_5, VAR_1);

 if (VAR_5 & (VAR_2 | VAR_0) ||
     (VAR_5 & VAR_1) != VAR_1) {
  FUNC_0(VAR_3, VAR_5);
  return VAR_5 & VAR_0;
 }

 return 0;
}
