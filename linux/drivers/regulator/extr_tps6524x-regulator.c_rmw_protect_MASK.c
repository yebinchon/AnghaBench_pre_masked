
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps6524x {int lock; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct tps6524x*,int,int,int) ;
 int FUNC_1 (struct tps6524x*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct tps6524x *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_1->lock);

 VAR_5 = FUNC_1(VAR_1, VAR_0, 1);
 if (VAR_5) {
  FUNC_2(VAR_1->dev, "failed to set write enable\n");
  goto error;
 }

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  FUNC_2(VAR_1->dev, "failed to rmw register %d\n", VAR_2);

 VAR_5 = FUNC_1(VAR_1, VAR_0, 0);
 if (VAR_5) {
  FUNC_2(VAR_1->dev, "failed to clear write enable\n");
  goto error;
 }

error:
 FUNC_4(&VAR_1->lock);

 return VAR_5;
}
