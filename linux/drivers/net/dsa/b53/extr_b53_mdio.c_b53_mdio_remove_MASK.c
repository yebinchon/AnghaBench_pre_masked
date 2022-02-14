
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_device {int dev; } ;
struct dsa_switch {int dummy; } ;
struct b53_device {struct dsa_switch* ds; } ;


 struct b53_device* FUNC_0 (int *) ;
 int FUNC_1 (struct dsa_switch*) ;

__attribute__((used)) static void FUNC_2(struct mdio_device *VAR_0)
{
 struct b53_device *VAR_1 = FUNC_0(&VAR_0->dev);
 struct dsa_switch *VAR_2 = VAR_1->ds;

 FUNC_1(VAR_2);
}
