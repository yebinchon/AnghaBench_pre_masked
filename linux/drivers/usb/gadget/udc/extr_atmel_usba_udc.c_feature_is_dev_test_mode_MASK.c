
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {scalar_t__ wValue; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct usb_ctrlrequest *VAR_1)
{
 if (VAR_1->wValue == FUNC_0(VAR_0))
  return 1;
 return 0;
}
