
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct platform_device {int dummy; } ;
struct nbu2ss_udc {int vbus_active; scalar_t__ linux_suspended; int devstate; } ;


 int VAR_0 ;
 int FUNC_0 (struct nbu2ss_udc*) ;
 int FUNC_1 (struct nbu2ss_udc*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct nbu2ss_udc* FUNC_3 (struct platform_device*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 u32 VAR_3;
 struct nbu2ss_udc *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4)
  return 0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  VAR_4->vbus_active = 1;
  VAR_4->devstate = VAR_0;
  FUNC_0(VAR_4);
  FUNC_1(VAR_4, 1);
 }

 VAR_4->linux_suspended = 0;

 return 0;
}
