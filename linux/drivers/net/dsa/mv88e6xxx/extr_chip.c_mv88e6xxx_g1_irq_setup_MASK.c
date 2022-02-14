
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dev; int irq; } ;
struct lock_class_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct lock_class_key*,struct lock_class_key*) ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;
 int VAR_2 ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;
 int FUNC_6 (int ,int *,int ,int,int ,struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_7(struct mv88e6xxx_chip *VAR_3)
{
 static struct lock_class_key VAR_4;
 static struct lock_class_key VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6)
  return VAR_6;





 FUNC_1(VAR_3->irq, &VAR_4, &VAR_5);

 FUNC_5(VAR_3);
 VAR_6 = FUNC_6(VAR_3->irq, ((void*)0),
       VAR_2,
       VAR_0 | VAR_1,
       FUNC_0(VAR_3->dev), VAR_3);
 FUNC_4(VAR_3);
 if (VAR_6)
  FUNC_2(VAR_3);

 return VAR_6;
}
