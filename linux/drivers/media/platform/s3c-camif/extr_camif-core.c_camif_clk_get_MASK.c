
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camif_dev {int dev; int ** clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct camif_dev*) ;
 int * VAR_2 ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_8(struct camif_dev *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
  VAR_3->clock[VAR_5] = FUNC_0(-VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3->clock[VAR_5] = FUNC_4(VAR_3->dev, VAR_2[VAR_5]);
  if (FUNC_1(VAR_3->clock[VAR_5])) {
   VAR_4 = FUNC_2(VAR_3->clock[VAR_5]);
   goto err;
  }
  VAR_4 = FUNC_5(VAR_3->clock[VAR_5]);
  if (VAR_4 < 0) {
   FUNC_6(VAR_3->clock[VAR_5]);
   VAR_3->clock[VAR_5] = ((void*)0);
   goto err;
  }
 }
 return 0;
err:
 FUNC_3(VAR_3);
 FUNC_7(VAR_3->dev, "failed to get clock: %s\n",
  VAR_2[VAR_5]);
 return VAR_4;
}
