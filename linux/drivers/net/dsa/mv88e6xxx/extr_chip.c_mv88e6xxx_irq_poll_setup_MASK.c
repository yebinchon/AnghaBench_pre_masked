
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int irq_poll_work; int kworker; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct mv88e6xxx_chip*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_8(struct mv88e6xxx_chip *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_4(&VAR_1->irq_poll_work,
      VAR_0);

 VAR_1->kworker = FUNC_3(0, "%s", FUNC_2(VAR_1->dev));
 if (FUNC_0(VAR_1->kworker))
  return FUNC_1(VAR_1->kworker);

 FUNC_5(VAR_1->kworker, &VAR_1->irq_poll_work,
       FUNC_6(100));

 return 0;
}
