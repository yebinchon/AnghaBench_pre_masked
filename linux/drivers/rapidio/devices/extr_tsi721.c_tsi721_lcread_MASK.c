
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tsi721_device {scalar_t__ regs; } ;
struct rio_mport {struct tsi721_device* priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rio_mport *VAR_1, int VAR_2, u32 VAR_3,
    int VAR_4, u32 *VAR_5)
{
 struct tsi721_device *VAR_6 = VAR_1->priv;

 if (VAR_4 != sizeof(u32))
  return -VAR_0;

 *VAR_5 = FUNC_0(VAR_6->regs + VAR_3);

 return 0;
}
