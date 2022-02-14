
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_prev_device {int dummy; } ;
struct isp_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_prev_device*) ;

__attribute__((used)) static void
FUNC_3(struct isp_prev_device *VAR_3, bool VAR_4)
{
 struct isp_device *VAR_5 = FUNC_2(VAR_3);

 if (VAR_4)
  FUNC_0(VAR_5, VAR_2, VAR_0,
       VAR_1);
 else
  FUNC_1(VAR_5, VAR_2, VAR_0,
       VAR_1);
}
