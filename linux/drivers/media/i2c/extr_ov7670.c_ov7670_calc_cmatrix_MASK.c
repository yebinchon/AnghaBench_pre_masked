
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ov7670_info {TYPE_1__* fmt; } ;
struct TYPE_2__ {int* cmatrix; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ov7670_info *VAR_1,
  int VAR_2[VAR_0], int VAR_3, int VAR_4)
{
 int VAR_5;



 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  VAR_2[VAR_5] = (VAR_1->fmt->cmatrix[VAR_5] * VAR_3) >> 7;



 if (VAR_4 != 0) {
  int VAR_6, VAR_7, VAR_8[VAR_0];

  FUNC_0(VAR_8, VAR_2, VAR_0*sizeof(int));
  VAR_6 = FUNC_2(VAR_4);
  VAR_7 = FUNC_1(VAR_4);

  VAR_2[0] = (VAR_2[3]*VAR_6 + VAR_2[0]*VAR_7)/1000;
  VAR_2[1] = (VAR_2[4]*VAR_6 + VAR_2[1]*VAR_7)/1000;
  VAR_2[2] = (VAR_2[5]*VAR_6 + VAR_2[2]*VAR_7)/1000;
  VAR_2[3] = (VAR_2[3]*VAR_7 - VAR_2[0]*VAR_6)/1000;
  VAR_2[4] = (VAR_2[4]*VAR_7 - VAR_2[1]*VAR_6)/1000;
  VAR_2[5] = (VAR_2[5]*VAR_7 - VAR_2[2]*VAR_6)/1000;
 }
}
