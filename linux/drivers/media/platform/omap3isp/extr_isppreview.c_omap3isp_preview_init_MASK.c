
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_prev_device {int wait; } ;
struct isp_device {struct isp_prev_device isp_prev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct isp_prev_device*) ;
 int FUNC_2 (struct isp_prev_device*) ;

int FUNC_3(struct isp_device *VAR_0)
{
 struct isp_prev_device *VAR_1 = &VAR_0->isp_prev;

 FUNC_0(&VAR_1->wait);

 FUNC_2(VAR_1);

 return FUNC_1(VAR_1);
}
