
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u16 ;
struct vc_data {scalar_t__ vc_origin; } ;
struct sisusb_usb_data {unsigned int sisusb_num_columns; } ;



__attribute__((used)) static inline void *FUNC_0(const struct sisusb_usb_data *VAR_0,
  const struct vc_data *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 return (u16 *)VAR_1->vc_origin + VAR_3 * VAR_0->sisusb_num_columns + VAR_2;
}
