
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct gswip_priv*,int,int) ;
 int FUNC_2 (struct gswip_priv*,struct net_device*,int,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct dsa_switch *VAR_0, int VAR_1,
        struct net_device *VAR_2)
{
 struct gswip_priv *VAR_3 = VAR_0->priv;

 FUNC_1(VAR_3, VAR_1, 1);




 if (!FUNC_0(VAR_2))
  FUNC_2(VAR_3, VAR_2, VAR_1, 0, 1, 0);
}
