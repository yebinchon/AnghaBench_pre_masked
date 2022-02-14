
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prev_params {int contrast; } ;
struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isp_device*,int ,int ,int,int) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_2(struct isp_prev_device *VAR_3,
   const struct prev_params *VAR_4)
{
 struct isp_device *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_5, VAR_2, VAR_0,
   0xff << VAR_1,
   VAR_4->contrast << VAR_1);
}
