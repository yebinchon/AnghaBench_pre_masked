
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct isp_device {int dummy; } ;
struct isp_ccp2_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isp_ccp2_device*,int ) ;
 int FUNC_1 (struct isp_device*,int ,int ,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_ccp2_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_ccp2_device *VAR_5, u8 VAR_6)
{
 struct isp_device *VAR_7 = FUNC_2(VAR_5);

 if (VAR_6)
  FUNC_0(VAR_5, 0);


 FUNC_1(VAR_7, VAR_4, VAR_0,
   VAR_1, VAR_6 ? VAR_1 : 0);

 FUNC_1(VAR_7, VAR_4, VAR_2,
   VAR_3,
   VAR_6 ? VAR_3 : 0);
}
