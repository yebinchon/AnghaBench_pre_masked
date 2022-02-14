
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__* descriptor; } ;
typedef int __le16 ;
struct TYPE_2__ {int wHubCharacteristics; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct usb_hub *VAR_2)
{
 __le16 VAR_3;

 if (!VAR_2)
  return 0;
 VAR_3 = VAR_2->descriptor->wHubCharacteristics;
 return (FUNC_0(VAR_3) & VAR_0) < VAR_1;
}
