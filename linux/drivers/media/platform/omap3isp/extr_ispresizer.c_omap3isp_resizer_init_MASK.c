
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_res_device {int lock; int stopping; int wait; } ;
struct isp_device {struct isp_res_device isp_res; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct isp_res_device*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct isp_device *VAR_0)
{
 struct isp_res_device *VAR_1 = &VAR_0->isp_res;

 FUNC_1(&VAR_1->wait);
 FUNC_0(&VAR_1->stopping, 0);
 FUNC_3(&VAR_1->lock);

 return FUNC_2(VAR_1);
}
