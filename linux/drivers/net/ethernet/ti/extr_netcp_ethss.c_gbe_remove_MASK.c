
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netcp_device {int dummy; } ;
struct gbe_priv {int dev; int gbe_intf_head; int tx_pipe; int ale; int cpts; int timer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct gbe_priv*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct netcp_device *VAR_0, void *VAR_1)
{
 struct gbe_priv *VAR_2 = VAR_1;

 FUNC_2(&VAR_2->timer);
 FUNC_1(VAR_2->cpts);
 FUNC_0(VAR_2->ale);
 FUNC_6(&VAR_2->tx_pipe);
 FUNC_4(VAR_2);

 if (!FUNC_5(&VAR_2->gbe_intf_head))
  FUNC_3(VAR_2->dev,
     "unreleased ethss interfaces present\n");

 return 0;
}
