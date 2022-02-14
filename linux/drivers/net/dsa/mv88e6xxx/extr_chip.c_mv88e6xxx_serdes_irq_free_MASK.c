
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_port {unsigned int serdes_irq; } ;
struct mv88e6xxx_chip {struct mv88e6xxx_port* ports; } ;


 int FUNC_0 (unsigned int,struct mv88e6xxx_port*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mv88e6xxx_chip *VAR_0, int VAR_1,
         u8 VAR_2)
{
 struct mv88e6xxx_port *VAR_3 = &VAR_0->ports[VAR_1];
 unsigned int VAR_4 = VAR_3->serdes_irq;
 int VAR_5;


 if (!VAR_4)
  return 0;

 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2);


 FUNC_2(VAR_0);
 FUNC_0(VAR_4, VAR_3);
 FUNC_1(VAR_0);

 VAR_3->serdes_irq = 0;

 return VAR_5;
}
