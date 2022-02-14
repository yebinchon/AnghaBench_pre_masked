
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_uio_private_data {int info; } ;
struct hv_device {int channel; } ;


 struct hv_uio_private_data* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct hv_device*,int *) ;
 int FUNC_2 (struct hv_device*,struct hv_uio_private_data*) ;
 int FUNC_3 (struct hv_uio_private_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct hv_device *VAR_0)
{
 struct hv_uio_private_data *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return 0;

 FUNC_4(&VAR_1->info);
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(VAR_0, ((void*)0));

 FUNC_5(VAR_0->channel);
 FUNC_3(VAR_1);
 return 0;
}
