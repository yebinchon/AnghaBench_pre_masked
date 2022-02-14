
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssb_device {TYPE_1__* bus; } ;
struct TYPE_2__ {int bustype; int host_pci; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ssb_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssb_device*) ;
 int FUNC_3 (struct ssb_device*,int ) ;

u32 FUNC_4(struct ssb_device *VAR_4)
{
 switch (VAR_4->bus->bustype) {
 case 128:
  return 0;
 case 129:
  if (FUNC_1(VAR_4->bus->host_pci) &&
      FUNC_3(VAR_4, VAR_2) & VAR_3) {
   return VAR_0;
  } else {
   if (FUNC_2(VAR_4))
    return VAR_0;
   else
    return VAR_1;
  }
 default:
  FUNC_0(VAR_4);
 }
 return 0;
}
