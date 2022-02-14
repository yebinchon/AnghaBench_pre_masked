
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sge {int* timer_val; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(const struct sge *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = VAR_0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1->timer_val); VAR_3++) {
  int VAR_6 = VAR_2 - VAR_1->timer_val[VAR_3];
  if (VAR_6 < 0)
   VAR_6 = -VAR_6;
  if (VAR_6 < VAR_5) {
   VAR_5 = VAR_6;
   VAR_4 = VAR_3;
  }
 }
 return VAR_4;
}
