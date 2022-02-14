
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bq24257_device {int * pg; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct bq24257_device *VAR_3)
{
 VAR_3->pg = FUNC_6(VAR_3->dev, VAR_0, VAR_2);

 if (FUNC_1(VAR_3->pg) == -VAR_1) {
  FUNC_5(VAR_3->dev, "probe retry requested for PG pin\n");
  return;
 } else if (FUNC_0(VAR_3->pg)) {
  FUNC_4(VAR_3->dev, "error probing PG pin\n");
  VAR_3->pg = ((void*)0);
  return;
 }

 if (VAR_3->pg)
  FUNC_3(VAR_3->dev, "probed PG pin = %d\n", FUNC_2(VAR_3->pg));
}
