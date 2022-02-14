
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camif_dev {int * clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct camif_dev *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_1(VAR_2->clock[VAR_3]))
   continue;
  FUNC_3(VAR_2->clock[VAR_3]);
  FUNC_2(VAR_2->clock[VAR_3]);
  VAR_2->clock[VAR_3] = FUNC_0(-VAR_1);
 }
}
