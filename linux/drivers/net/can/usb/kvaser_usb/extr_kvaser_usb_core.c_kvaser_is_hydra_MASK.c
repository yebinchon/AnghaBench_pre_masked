
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ idProduct; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(const struct usb_device_id *VAR_2)
{
 return VAR_2->idProduct >= VAR_0 &&
        VAR_2->idProduct <= VAR_1;
}
