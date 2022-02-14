
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct riowd {int lock; scalar_t__ regs; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct riowd *VAR_0, u8 VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 FUNC_2(VAR_2, VAR_0->regs + 0);
 FUNC_2(VAR_1, VAR_0->regs + 1);
 FUNC_1(&VAR_0->lock, VAR_3);
}
