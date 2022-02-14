
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ idProduct; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(const struct usb_device_id *VAR_4)
{
 return (VAR_4->idProduct >= VAR_1 &&
  VAR_4->idProduct <= VAR_0) ||
  (VAR_4->idProduct >= VAR_2 &&
   VAR_4->idProduct <= VAR_3);
}
