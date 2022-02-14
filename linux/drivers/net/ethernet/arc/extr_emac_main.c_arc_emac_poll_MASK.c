
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct arc_emac_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,unsigned int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct arc_emac_priv*,int ,int) ;
 int FUNC_5 (struct napi_struct*,unsigned int) ;
 struct arc_emac_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct napi_struct *VAR_3, int VAR_4)
{
 struct net_device *VAR_5 = VAR_3->dev;
 struct arc_emac_priv *VAR_6 = FUNC_6(VAR_5);
 unsigned int VAR_7;

 FUNC_3(VAR_5);
 FUNC_1(VAR_5);

 VAR_7 = FUNC_0(VAR_5, VAR_4);
 if (VAR_7 < VAR_4) {
  FUNC_5(VAR_3, VAR_7);
  FUNC_4(VAR_6, VAR_1, VAR_0 | VAR_2);
 }

 FUNC_2(VAR_5, VAR_4, VAR_7);

 return VAR_7;
}
