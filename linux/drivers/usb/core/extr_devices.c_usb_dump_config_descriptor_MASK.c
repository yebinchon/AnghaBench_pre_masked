
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_config_descriptor {int bMaxPower; int bmAttributes; int bConfigurationValue; int bNumInterfaces; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,char*,char,int ,int ,int ,int) ;

__attribute__((used)) static char *FUNC_1(char *VAR_2, char *VAR_3,
    const struct usb_config_descriptor *VAR_4,
    int VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_2 > VAR_3)
  return VAR_2;
 if (VAR_6 >= VAR_0)
  VAR_7 = 8;
 else
  VAR_7 = 2;
 VAR_2 += FUNC_0(VAR_2, VAR_1,

    VAR_5 ? '*' : ' ',
    VAR_4->bNumInterfaces,
    VAR_4->bConfigurationValue,
    VAR_4->bmAttributes,
    VAR_4->bMaxPower * VAR_7);
 return VAR_2;
}
