
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct ci_hdrc {int lock; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int FUNC_0 (struct ci_hdrc*) ;
 struct ci_hdrc* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static enum usb_role FUNC_4(struct device *VAR_0)
{
 struct ci_hdrc *VAR_1 = FUNC_1(VAR_0);
 enum usb_role VAR_2;
 unsigned long VAR_3;

 FUNC_2(&VAR_1->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_3);

 return VAR_2;
}
