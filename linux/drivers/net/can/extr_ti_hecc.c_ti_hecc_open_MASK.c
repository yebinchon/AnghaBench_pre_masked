
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_hecc_priv {int offload; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 struct ti_hecc_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;
 int VAR_2 ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct ti_hecc_priv*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3)
{
 struct ti_hecc_priv *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_7(VAR_3->irq, VAR_2, VAR_1,
     VAR_3->name, VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_3, "error requesting interrupt\n");
  return VAR_5;
 }

 FUNC_9(VAR_4, 1);


 VAR_5 = FUNC_6(VAR_3);
 if (VAR_5) {
  FUNC_3(VAR_3, "open_candev() failed %d\n", VAR_5);
  FUNC_9(VAR_4, 0);
  FUNC_2(VAR_3->irq, VAR_3);
  return VAR_5;
 }

 FUNC_0(VAR_3, VAR_0);

 FUNC_8(VAR_3);
 FUNC_1(&VAR_4->offload);
 FUNC_5(VAR_3);

 return 0;
}
