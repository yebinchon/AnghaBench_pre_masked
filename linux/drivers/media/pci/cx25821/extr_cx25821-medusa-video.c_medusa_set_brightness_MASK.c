
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int * i2c_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,scalar_t__,int*) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int,int,int,int ,int ,int*) ;

int FUNC_4(struct cx25821_dev *VAR_5, int VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 int VAR_9 = 0;
 u32 VAR_10 = 0, VAR_11 = 0;

 if ((VAR_6 > VAR_3) ||
     (VAR_6 < VAR_4)) {
  return -1;
 }
 VAR_8 = FUNC_3(VAR_4, VAR_3, VAR_6,
   VAR_1, VAR_0, &VAR_9);
 VAR_9 = FUNC_0(VAR_9, 8);
 VAR_10 = FUNC_1(&VAR_5->i2c_bus[0],
   VAR_2 + (0x200 * VAR_7), &VAR_11);
 VAR_10 &= 0xFFFFFF00;
 VAR_8 |= FUNC_2(&VAR_5->i2c_bus[0],
   VAR_2 + (0x200 * VAR_7), VAR_10 | VAR_9);
 return VAR_8;
}
