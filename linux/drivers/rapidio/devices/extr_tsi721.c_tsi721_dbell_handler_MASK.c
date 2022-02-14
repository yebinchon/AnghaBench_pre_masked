
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tsi721_device {int idb_work; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct tsi721_device *VAR_2)
{
 u32 VAR_3;


 VAR_3 = FUNC_1(VAR_2->regs + FUNC_0(VAR_0));
 VAR_3 &= ~VAR_1;
 FUNC_2(VAR_3,
  VAR_2->regs + FUNC_0(VAR_0));

 FUNC_3(&VAR_2->idb_work);

 return 0;
}
