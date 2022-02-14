
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps65217 {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct tps65217*,unsigned int,unsigned int*) ;
 int FUNC_2 (struct tps65217*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct tps65217 *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_6);
 if (VAR_5) {
  FUNC_0(VAR_0->dev, "Read from reg 0x%x failed\n", VAR_1);
  return VAR_5;
 }

 VAR_6 &= ~VAR_2;
 VAR_6 |= VAR_3 & VAR_2;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_6, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_0->dev, "Write for reg 0x%x failed\n", VAR_1);

 return VAR_5;
}
