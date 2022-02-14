
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {scalar_t__ revision; scalar_t__ autoidle; } ;
struct isp_ccp2_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccp2_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_ccp2_device *VAR_5)
{
 struct isp_device *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_6, VAR_2 |
   ((VAR_6->revision == VAR_3 && VAR_6->autoidle) ?
     VAR_1 : 0),
         VAR_4, VAR_0);
}
