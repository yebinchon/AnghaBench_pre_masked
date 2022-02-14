
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpwd {TYPE_1__* devs; scalar_t__ broken; } ;
struct TYPE_2__ {scalar_t__ regs; int timeout; int runstatus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cpwd*,int,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cpwd *VAR_4, int VAR_5)
{
 if (VAR_4->broken)
  VAR_4->devs[VAR_5].runstatus &= ~VAR_2;

 VAR_4->devs[VAR_5].runstatus &= ~VAR_3;

 FUNC_1(VAR_4->devs[VAR_5].timeout, VAR_4->devs[VAR_5].regs + VAR_1);
 FUNC_0(VAR_4, VAR_5, VAR_0);
}
