
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qcom_smsm {unsigned int num_entries; int state; TYPE_1__* entries; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ domain; } ;


 int FUNC_0 (scalar_t__) ;
 struct qcom_smsm* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct qcom_smsm *VAR_1 = FUNC_1(VAR_0);
 unsigned VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_entries; VAR_2++)
  if (VAR_1->entries[VAR_2].domain)
   FUNC_0(VAR_1->entries[VAR_2].domain);

 FUNC_2(VAR_1->state);

 return 0;
}
