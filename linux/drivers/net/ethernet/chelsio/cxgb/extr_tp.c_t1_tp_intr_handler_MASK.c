
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
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__) ;

int FUNC_3(struct petp *VAR_1)
{
 u32 VAR_2;







 VAR_2 = FUNC_0(VAR_1->adapter->regs + VAR_0);
 FUNC_2(VAR_2, VAR_1->adapter->regs + VAR_0);
 return 0;
}
