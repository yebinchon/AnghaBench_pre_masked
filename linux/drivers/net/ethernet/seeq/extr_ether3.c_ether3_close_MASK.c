
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int irq; } ;
struct TYPE_3__ {scalar_t__ command; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 TYPE_2__* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int
FUNC_8(struct net_device *VAR_7)
{
 FUNC_6(VAR_7);

 FUNC_1(VAR_7->irq);

 FUNC_4(VAR_0|VAR_1, VAR_2);
 FUNC_7(VAR_7)->regs.command = 0;
 while (FUNC_2(VAR_4) & (VAR_5|VAR_6))
  FUNC_0();
 FUNC_3(0x80, VAR_3 + 4);
 FUNC_4(0, VAR_2);

 FUNC_5(VAR_7->irq, VAR_7);

 return 0;
}
