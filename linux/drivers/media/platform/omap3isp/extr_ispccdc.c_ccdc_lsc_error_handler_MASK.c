
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_device {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct isp_ccdc_device {TYPE_1__ lsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct isp_device*,int ,int ,int ) ;
 struct isp_device* FUNC_1 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_2(struct isp_ccdc_device *VAR_4)
{
 struct isp_device *VAR_5 = FUNC_1(VAR_4);
 FUNC_0(VAR_5, VAR_3, VAR_0,
      VAR_1);
 VAR_4->lsc.state = VAR_2;
}
