
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* intf; } ;
struct TYPE_2__ {int cur_altsetting; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_1)
{
 if (FUNC_0(VAR_1->intf->cur_altsetting))
  return 0;
 return VAR_0;
}
