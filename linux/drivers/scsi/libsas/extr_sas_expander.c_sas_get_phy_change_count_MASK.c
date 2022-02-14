
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int change_count; } ;
struct smp_resp {TYPE_1__ disc; } ;
struct domain_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smp_resp* FUNC_0 (int ) ;
 int FUNC_1 (struct smp_resp*) ;
 int FUNC_2 (struct domain_device*,int,struct smp_resp*) ;

__attribute__((used)) static int FUNC_3(struct domain_device *VAR_2,
        int VAR_3, int *VAR_4)
{
 int VAR_5;
 struct smp_resp *VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 if (!VAR_6)
  return -VAR_1;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_6);
 if (!VAR_5)
  *VAR_4 = VAR_6->disc.change_count;

 FUNC_1(VAR_6);
 return VAR_5;
}
