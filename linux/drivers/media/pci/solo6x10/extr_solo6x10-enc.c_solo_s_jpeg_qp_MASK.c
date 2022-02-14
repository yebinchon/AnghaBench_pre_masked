
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct solo_dev {scalar_t__ type; int* jpeg_qp; int jpeg_qp_lock; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct solo_dev*,unsigned int,unsigned int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct solo_dev *VAR_3, unsigned int VAR_4,
      unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7, VAR_8;

 if ((VAR_4 > 31) || (VAR_5 > 3))
  return;

 if (VAR_3->type == VAR_0)
  return;

 if (VAR_4 < 16) {
  VAR_7 = 0;
  VAR_8 = VAR_2;
 } else {
  VAR_4 -= 16;
  VAR_7 = 1;
  VAR_8 = VAR_1;
 }
 VAR_4 *= 2;

 FUNC_1(&VAR_3->jpeg_qp_lock, VAR_6);

 VAR_3->jpeg_qp[VAR_7] &= ~(3 << VAR_4);
 VAR_3->jpeg_qp[VAR_7] |= (VAR_5 & 3) << VAR_4;

 FUNC_0(VAR_3, VAR_8, VAR_3->jpeg_qp[VAR_7]);

 FUNC_2(&VAR_3->jpeg_qp_lock, VAR_6);
}
