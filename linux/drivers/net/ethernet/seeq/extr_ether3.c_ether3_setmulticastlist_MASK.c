
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; } ;
struct TYPE_3__ {int config1; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct net_device*) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7)
{
 FUNC_2(VAR_7)->regs.config1 &= ~VAR_1;

 if (VAR_7->flags & VAR_5) {

  FUNC_2(VAR_7)->regs.config1 |= VAR_1;
 } else if (VAR_7->flags & VAR_4 || !FUNC_1(VAR_7)) {
  FUNC_2(VAR_7)->regs.config1 |= VAR_2;
 } else
  FUNC_2(VAR_7)->regs.config1 |= VAR_3;

 FUNC_0(FUNC_2(VAR_7)->regs.config1 | VAR_0, VAR_6);
}
