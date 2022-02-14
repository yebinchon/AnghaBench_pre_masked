
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenfb_info {int fb_info; } ;
struct xenbus_device {int dev; } ;


 struct xenfb_info* FUNC_0 (int *) ;
 int FUNC_1 (struct xenbus_device*,struct xenfb_info*) ;
 int FUNC_2 (struct xenfb_info*) ;
 int FUNC_3 (struct xenfb_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct xenbus_device *VAR_0)
{
 struct xenfb_info *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1);
 FUNC_3(VAR_1, VAR_1->fb_info);
 return FUNC_1(VAR_0, VAR_1);
}
