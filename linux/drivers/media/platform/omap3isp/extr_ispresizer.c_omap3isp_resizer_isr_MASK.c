
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int dummy; } ;
struct isp_res_device {int lock; scalar_t__ applycrop; int stopping; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct isp_res_device*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct isp_res_device*) ;
 int FUNC_3 (struct isp_res_device*,struct v4l2_mbus_framefmt*,struct v4l2_mbus_framefmt*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct isp_res_device *VAR_3)
{
 struct v4l2_mbus_framefmt *VAR_4, *VAR_5;
 unsigned long VAR_6;

 if (FUNC_1(&VAR_3->wait, &VAR_3->stopping))
  return;

 FUNC_4(&VAR_3->lock, VAR_6);

 if (VAR_3->applycrop) {
  VAR_5 = FUNC_0(VAR_3, ((void*)0), VAR_1,
           VAR_2);
  VAR_4 = FUNC_0(VAR_3, ((void*)0), VAR_0,
           VAR_2);
  FUNC_3(VAR_3, VAR_4, VAR_5);
  VAR_3->applycrop = 0;
 }

 FUNC_5(&VAR_3->lock, VAR_6);

 FUNC_2(VAR_3);
}
