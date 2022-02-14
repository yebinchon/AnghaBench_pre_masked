
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {scalar_t__ type; unsigned int* jpeg_qp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct solo_dev *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 if (VAR_1->type == VAR_0)
  return 2;

 if (FUNC_0(VAR_2 > 31))
  return 2;

 if (VAR_2 < 16) {
  VAR_3 = 0;
 } else {
  VAR_2 -= 16;
  VAR_3 = 1;
 }
 VAR_2 *= 2;

 return (VAR_1->jpeg_qp[VAR_3] >> VAR_2) & 3;
}
