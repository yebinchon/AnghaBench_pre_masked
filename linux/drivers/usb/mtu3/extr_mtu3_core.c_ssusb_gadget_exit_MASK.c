
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssusb_mtk {int dev; struct mtu3* u3d; } ;
struct mtu3 {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mtu3*) ;
 int FUNC_2 (struct mtu3*) ;

void FUNC_3(struct ssusb_mtk *VAR_0)
{
 struct mtu3 *VAR_1 = VAR_0->u3d;

 FUNC_1(VAR_1);
 FUNC_0(VAR_0->dev, 0);
 FUNC_2(VAR_1);
}
