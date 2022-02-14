
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi2500_dev {scalar_t__* urbs; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct msi2500_dev *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1->dev, "\n");


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->urbs[VAR_2]) {
   FUNC_0(VAR_1->dev, "Unlinking URB %p\n", VAR_1->urbs[VAR_2]);
   FUNC_1(VAR_1->urbs[VAR_2]);
  }
 }
}
