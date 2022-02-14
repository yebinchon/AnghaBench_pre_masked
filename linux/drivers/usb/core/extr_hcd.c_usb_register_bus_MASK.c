
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int busnum; int controller; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,struct usb_bus*,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct usb_bus*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct usb_bus *VAR_6)
{
 int VAR_7 = -VAR_0;
 int VAR_8;

 FUNC_2(&VAR_4);
 VAR_8 = FUNC_1(&VAR_3, VAR_6, 1, VAR_2, VAR_1);
 if (VAR_8 < 0) {
  FUNC_4("%s: failed to get bus number\n", VAR_5);
  goto error_find_busnum;
 }
 VAR_6->busnum = VAR_8;
 FUNC_3(&VAR_4);

 FUNC_5(VAR_6);

 FUNC_0 (VAR_6->controller, "new USB bus registered, assigned bus "
    "number %d\n", VAR_6->busnum);
 return 0;

error_find_busnum:
 FUNC_3(&VAR_4);
 return VAR_7;
}
