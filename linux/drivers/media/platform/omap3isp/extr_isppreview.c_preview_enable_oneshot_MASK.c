
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_prev_device {scalar_t__ input; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct isp_device*,int ,int ,int) ;
 struct isp_device* FUNC_1 (struct isp_prev_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_prev_device *VAR_6)
{
 struct isp_device *VAR_7 = FUNC_1(VAR_6);





 if (VAR_6->input == VAR_5)
  FUNC_0(VAR_7, VAR_4, VAR_0,
       VAR_3);

 FUNC_0(VAR_7, VAR_4, VAR_0,
      VAR_1 | VAR_2);
}
