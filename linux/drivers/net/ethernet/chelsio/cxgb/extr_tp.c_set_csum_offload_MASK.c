
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct petp {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct petp *VAR_1, u32 VAR_2, int VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_1->adapter->regs + VAR_0);

 if (VAR_3)
  VAR_4 |= VAR_2;
 else
  VAR_4 &= ~VAR_2;
 FUNC_1(VAR_4, VAR_1->adapter->regs + VAR_0);
}
