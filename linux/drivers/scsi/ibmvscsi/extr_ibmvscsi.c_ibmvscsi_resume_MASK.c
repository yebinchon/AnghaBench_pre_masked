
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibmvscsi_host_data {int srp_task; int dev; } ;
struct device {int dummy; } ;


 struct ibmvscsi_host_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct ibmvscsi_host_data *VAR_1 = FUNC_0(VAR_0);
 FUNC_3(FUNC_2(VAR_1->dev));
 FUNC_1(&VAR_1->srp_task);

 return 0;
}
