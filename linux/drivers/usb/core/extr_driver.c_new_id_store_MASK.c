
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_driver {int id_table; int dynids; } ;
struct device_driver {int dummy; } ;
typedef int ssize_t ;


 struct usb_driver* FUNC_0 (struct device_driver*) ;
 int FUNC_1 (int *,int ,struct device_driver*,char const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct device_driver *VAR_0,
       const char *VAR_1, size_t VAR_2)
{
 struct usb_driver *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(&VAR_3->dynids, VAR_3->id_table, VAR_0, VAR_1, VAR_2);
}
