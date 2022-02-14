
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mv88e6xxx_port {int port; struct mv88e6xxx_chip* chip; } ;
struct mv88e6xxx_chip {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 scalar_t__ FUNC_2 (struct mv88e6xxx_chip*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct mv88e6xxx_port *VAR_3 = VAR_2;
 struct mv88e6xxx_chip *VAR_4 = VAR_3->chip;
 irqreturn_t VAR_5 = VAR_0;
 int VAR_6 = VAR_3->port;
 u8 VAR_7;

 FUNC_0(VAR_4);
 VAR_7 = FUNC_2(VAR_4, VAR_6);
 if (VAR_7)
  VAR_5 = FUNC_3(VAR_4, VAR_6, VAR_7);
 FUNC_1(VAR_4);

 return VAR_5;
}
