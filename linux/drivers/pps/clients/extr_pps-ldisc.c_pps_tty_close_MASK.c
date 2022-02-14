
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct pps_device {int dev; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (int ,char*) ;
 struct pps_device* FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct pps_device*) ;

__attribute__((used)) static void FUNC_5(struct tty_struct *VAR_0)
{
 struct pps_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_0);

 if (FUNC_0(!VAR_1))
  return;

 FUNC_2(VAR_1->dev, "removed\n");
 FUNC_4(VAR_1);
}
