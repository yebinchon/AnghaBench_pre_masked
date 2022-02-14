
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_configuration {int dummy; } ;
struct usb_composite_dev {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct usb_composite_dev*,struct usb_configuration*) ;
 int FUNC_3 (struct usb_configuration*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_configuration*,int ) ;

__attribute__((used)) static int FUNC_9(struct usb_composite_dev *VAR_3,
  struct usb_configuration *VAR_4, const char *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7)
  goto out;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {

  VAR_1[VAR_6] = FUNC_5(VAR_5);
  if (FUNC_0(VAR_1[VAR_6])) {
   VAR_7 = FUNC_1(VAR_1[VAR_6]);
   goto fail;
  }

  VAR_0[VAR_6] = FUNC_4(VAR_1[VAR_6]);
  if (FUNC_0(VAR_0[VAR_6])) {
   VAR_7 = FUNC_1(VAR_0[VAR_6]);
   goto err_get_func;
  }

  VAR_7 = FUNC_3(VAR_4, VAR_0[VAR_6]);
  if (VAR_7)
   goto err_add_func;
 }

 return 0;

err_add_func:
 FUNC_6(VAR_0[VAR_6]);
err_get_func:
 FUNC_7(VAR_1[VAR_6]);

fail:
 VAR_6--;
 while (VAR_6 >= 0) {
  FUNC_8(VAR_4, VAR_0[VAR_6]);
  FUNC_6(VAR_0[VAR_6]);
  FUNC_7(VAR_1[VAR_6]);
  VAR_6--;
 }
out:
 return VAR_7;
}
