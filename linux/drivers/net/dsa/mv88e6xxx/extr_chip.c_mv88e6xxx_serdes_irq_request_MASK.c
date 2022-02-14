
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mv88e6xxx_port {unsigned int serdes_irq; } ;
struct mv88e6xxx_chip {struct mv88e6xxx_port* ports; } ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int ) ;
 unsigned int FUNC_3 (struct mv88e6xxx_chip*,int) ;
 int VAR_1 ;
 int FUNC_4 (unsigned int,int *,int ,int ,char*,struct mv88e6xxx_port*) ;

__attribute__((used)) static int FUNC_5(struct mv88e6xxx_chip *VAR_2, int VAR_3,
     u8 VAR_4)
{
 struct mv88e6xxx_port *VAR_5 = &VAR_2->ports[VAR_3];
 unsigned int VAR_6;
 int VAR_7;


 VAR_6 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_6)
  return 0;


 FUNC_1(VAR_2);
 VAR_7 = FUNC_4(VAR_6, ((void*)0), VAR_1,
       VAR_0, "mv88e6xxx-serdes", VAR_5);
 FUNC_0(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_5->serdes_irq = VAR_6;

 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
