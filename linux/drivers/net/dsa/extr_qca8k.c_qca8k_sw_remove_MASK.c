
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qca8k_priv {int ds; } ;
struct mdio_device {int dev; } ;


 int VAR_0 ;
 struct qca8k_priv* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qca8k_priv*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct mdio_device *VAR_1)
{
 struct qca8k_priv *VAR_2 = FUNC_0(&VAR_1->dev);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_2(VAR_2, VAR_3, 0);

 FUNC_1(VAR_2->ds);
}
