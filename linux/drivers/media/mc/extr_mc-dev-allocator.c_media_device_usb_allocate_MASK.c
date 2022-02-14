
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int product; int dev; } ;
struct module {int dummy; } ;
struct media_device {int dev; } ;


 int VAR_0 ;
 struct media_device* FUNC_0 (int ) ;
 struct media_device* FUNC_1 (int *,char const*,struct module*) ;
 int FUNC_2 (struct media_device*,struct usb_device*,int ,char const*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct media_device *FUNC_5(struct usb_device *VAR_2,
            const char *VAR_3,
            struct module *VAR_4)
{
 struct media_device *VAR_5;

 FUNC_3(&VAR_1);
 VAR_5 = FUNC_1(&VAR_2->dev, VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_4(&VAR_1);
  return FUNC_0(-VAR_0);
 }


 if (!VAR_5->dev)
  FUNC_2(VAR_5, VAR_2, VAR_2->product,
     VAR_3);
 FUNC_4(&VAR_1);
 return VAR_5;
}
