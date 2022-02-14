
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct hisi_femac_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hisi_femac_priv*) ;
 int FUNC_1 (struct hisi_femac_priv*,int) ;
 int FUNC_2 (struct hisi_femac_priv*) ;
 struct hisi_femac_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct hisi_femac_priv *VAR_2 = FUNC_3(VAR_1);

 if (VAR_1->flags & VAR_0) {
  FUNC_1(VAR_2, 1);
 } else {
  FUNC_1(VAR_2, 0);
  FUNC_0(VAR_2);
  FUNC_2(VAR_2);
 }
}
