
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isp_device*,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

int FUNC_2(struct isp_prev_device *VAR_3)
{
 struct isp_device *VAR_4 = FUNC_1(VAR_3);

 return FUNC_0(VAR_4, VAR_2, VAR_0)
  & VAR_1;
}
