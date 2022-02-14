
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int name; } ;
struct TYPE_2__ {int release; int sysname; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 char* FUNC_1 (int ,char*,int ,int ,int ) ;

__attribute__((used)) static char *FUNC_2(struct usb_gadget *VAR_1)
{
 return FUNC_1(VAR_0, "%s %s with %s", FUNC_0()->sysname,
    FUNC_0()->release, VAR_1->name);
}
