
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {char* bus_name; } ;
struct usb_hcd {char* product_desc; TYPE_2__* driver; TYPE_1__ self; } ;
struct TYPE_6__ {char* sysname; char* release; } ;
struct TYPE_5__ {char* description; } ;



 int FUNC_0 (char const*,int *,unsigned int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int *,char const*,unsigned int) ;
 int FUNC_3 (char*,int,char*,char*,char*,char*) ;

__attribute__((used)) static unsigned
FUNC_4(int VAR_0, struct usb_hcd const *VAR_1, u8 *VAR_2, unsigned VAR_3)
{
 char VAR_4[100];
 char const *VAR_5;
 static char const VAR_6[4] = {4, 128, 0x09, 0x04};


 switch (VAR_0) {
 case 0:


  if (VAR_3 > 4)
   VAR_3 = 4;
  FUNC_2(VAR_2, VAR_6, VAR_3);
  return VAR_3;
 case 1:

  VAR_5 = VAR_1->self.bus_name;
  break;
 case 2:

  VAR_5 = VAR_1->product_desc;
  break;
 case 3:

  FUNC_3 (VAR_4, sizeof VAR_4, "%s %s %s", FUNC_1()->sysname,
   FUNC_1()->release, VAR_1->driver->description);
  VAR_5 = VAR_4;
  break;
 default:

  return 0;
 }

 return FUNC_0(VAR_5, VAR_2, VAR_3);
}
