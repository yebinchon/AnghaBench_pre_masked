
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx25821_dev {int * i2c_bus; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int*) ;
 int FUNC_1 (int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct cx25821_dev *VAR_6, int VAR_7)
{
 int VAR_8 = -1;
 u32 VAR_9 = 0, VAR_10 = 0;


 VAR_8 = FUNC_1(&VAR_6->i2c_bus[0],
   VAR_2 + (0x200 * VAR_7), 0x20002861);
 VAR_8 = FUNC_1(&VAR_6->i2c_bus[0],
   VAR_1 + (0x200 * VAR_7), 0x20002861);
 VAR_8 = FUNC_1(&VAR_6->i2c_bus[0],
   VAR_3 + (0x200 * VAR_7), 0x200A1023);


 VAR_9 = FUNC_0(&VAR_6->i2c_bus[0],
   VAR_4 + (0x200 * VAR_7), &VAR_10);
 VAR_9 &= 0x06230000;
 VAR_8 = FUNC_1(&VAR_6->i2c_bus[0],
   VAR_4 + (0x200 * VAR_7), VAR_9);


 VAR_8 = FUNC_1(&VAR_6->i2c_bus[0],
   VAR_0 + (0x200 * VAR_7), 0x210F0F0F);


 VAR_8 = FUNC_1(&VAR_6->i2c_bus[0],
   VAR_5 + (0x200 * VAR_7), 0x41120A7F);

 return VAR_8;
}
