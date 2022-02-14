
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_dev {int dev; } ;
struct delta_ctx {struct delta_dev* dev; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct delta_ctx *VAR_0)
{
 struct delta_dev *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_1->dev);
}
