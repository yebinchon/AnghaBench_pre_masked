
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct lp3972 {int io_lock; int dev; int i2c; } ;


 int FUNC_0 (int ,char*,int,unsigned int) ;
 int FUNC_1 (int ,int,int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u8 FUNC_4(struct lp3972 *VAR_0, u8 VAR_1)
{
 u16 VAR_2 = 0;

 FUNC_2(&VAR_0->io_lock);

 FUNC_1(VAR_0->i2c, VAR_1, 1, &VAR_2);

 FUNC_0(VAR_0->dev, "reg read 0x%02x -> 0x%02x\n", (int)VAR_1,
  (unsigned)VAR_2 & 0xff);

 FUNC_3(&VAR_0->io_lock);

 return VAR_2 & 0xff;
}
