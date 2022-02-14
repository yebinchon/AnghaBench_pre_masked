
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct petp {TYPE_1__* adapter; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,scalar_t__) ;

void FUNC_3(struct petp *VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_5->adapter->regs + VAR_0);
 {
  FUNC_2(0, VAR_5->adapter->regs + VAR_1);
  FUNC_2(VAR_6 & ~VAR_4,
         VAR_5->adapter->regs + VAR_0);
 }
}
