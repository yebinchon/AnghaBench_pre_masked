
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hub {TYPE_1__* descriptor; } ;
struct TYPE_2__ {int bPwrOn2PwrGood; } ;


 int FUNC_0 (unsigned int,unsigned int) ;

__attribute__((used)) static inline unsigned FUNC_1(struct usb_hub *VAR_0)
{
 unsigned VAR_1 = VAR_0->descriptor->bPwrOn2PwrGood * 2;


 return FUNC_0(VAR_1, 100U);
}
