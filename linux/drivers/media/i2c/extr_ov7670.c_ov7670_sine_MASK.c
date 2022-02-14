
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 int VAR_3 = 1;
 int VAR_4;

 if (VAR_2 < 0) {
  VAR_2 = -VAR_2;
  VAR_3 = -1;
 }
 if (VAR_2 <= 90)
  VAR_4 = VAR_1[VAR_2/VAR_0];
 else {
  VAR_2 -= 90;
  VAR_4 = 1000 - VAR_1[VAR_2/VAR_0];
 }
 return VAR_4*VAR_3;
}
