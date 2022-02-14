
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_1__* intf; } ;
struct TYPE_2__ {int cur_altsetting; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct usbnet *VAR_2)
{
 if (FUNC_0(VAR_2->intf->cur_altsetting))
  return VAR_0;
 return VAR_1;
}
