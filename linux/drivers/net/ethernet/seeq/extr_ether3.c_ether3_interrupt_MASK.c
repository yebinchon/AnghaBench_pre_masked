
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
typedef unsigned int irqreturn_t ;
struct TYPE_3__ {int command; } ;
struct TYPE_4__ {TYPE_1__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_4 (char*,...) ;
 TYPE_2__* FUNC_5 (struct net_device*) ;

__attribute__((used)) static irqreturn_t
FUNC_6(int VAR_10, void *VAR_11)
{
 struct net_device *VAR_12 = (struct net_device *)VAR_11;
 unsigned int VAR_13, VAR_14 = VAR_4;






 VAR_13 = FUNC_0(VAR_6);

 if (VAR_13 & VAR_7) {
  FUNC_1(VAR_0 | FUNC_5(VAR_12)->regs.command, VAR_5);
  FUNC_2(VAR_12, 12);
  VAR_14 = VAR_3;
 }

 if (VAR_13 & VAR_8) {
  FUNC_1(VAR_1 | FUNC_5(VAR_12)->regs.command, VAR_5);
  FUNC_3(VAR_12);
  VAR_14 = VAR_3;
 }





 return VAR_14;
}
