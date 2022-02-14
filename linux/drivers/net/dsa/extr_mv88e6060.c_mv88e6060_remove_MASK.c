
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device {int dev; } ;
struct dsa_switch {int dummy; } ;


 struct dsa_switch* FUNC_0 (int *) ;
 int FUNC_1 (struct dsa_switch*) ;

__attribute__((used)) static void FUNC_2(struct mdio_device *VAR_0)
{
 struct dsa_switch *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1);
}
