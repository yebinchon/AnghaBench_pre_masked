
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct delta_dev {int dev; } ;
struct delta_ctx {int aborting; int name; struct delta_dev* dev; } ;


 int FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct delta_ctx *VAR_1 = VAR_0;
 struct delta_dev *VAR_2 = VAR_1->dev;

 FUNC_0(VAR_2->dev, "%s aborting job\n", VAR_1->name);

 VAR_1->aborting = 1;
}
