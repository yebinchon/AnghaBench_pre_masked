
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; } ;
struct nvec_power {int notifier; int nvec; int poller; } ;




 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 struct nvec_power* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct nvec_power *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(&VAR_3->poller);
 FUNC_1(VAR_3->nvec, &VAR_3->notifier);
 switch (VAR_2->id) {
 case 129:
  FUNC_3(VAR_1);
  break;
 case 128:
  FUNC_3(VAR_0);
 }

 return 0;
}
