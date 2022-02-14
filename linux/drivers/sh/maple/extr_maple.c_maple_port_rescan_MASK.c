
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct maple_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct maple_device** VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct maple_device*,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_5;
 struct maple_device *VAR_6;

 VAR_4 = 1;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_3[VAR_5] == 0) {
   VAR_4 = 0;
   VAR_6 = VAR_2[VAR_5];
   FUNC_0(VAR_6, 0, VAR_0,
    0, ((void*)0));
  }
 }
}
