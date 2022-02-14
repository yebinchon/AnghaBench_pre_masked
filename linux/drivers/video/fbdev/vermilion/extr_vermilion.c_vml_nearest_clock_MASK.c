
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{

 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_4 = 0;
 VAR_5 = VAR_2 - VAR_0[0];
 VAR_5 = (VAR_5 < 0) ? -VAR_5 : VAR_5;
 for (VAR_3 = 1; VAR_3 < VAR_1; ++VAR_3) {
  VAR_6 = VAR_2 - VAR_0[VAR_3];
  VAR_6 = (VAR_6 < 0) ? -VAR_6 : VAR_6;
  if (VAR_6 < VAR_5) {
   VAR_4 = VAR_3;
   VAR_5 = VAR_6;
  }
 }
 return VAR_0[VAR_4];
}
