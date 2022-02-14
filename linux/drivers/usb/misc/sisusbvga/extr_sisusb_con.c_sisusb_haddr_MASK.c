
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {unsigned long vc_origin; } ;
struct sisusb_usb_data {unsigned long scrbuf; unsigned int sisusb_num_columns; unsigned long vrambase; } ;



__attribute__((used)) static inline unsigned long FUNC_0(const struct sisusb_usb_data *VAR_0,
       const struct vc_data *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4 = VAR_1->vc_origin - VAR_0->scrbuf;


 VAR_4 += 2 * (VAR_3 * VAR_0->sisusb_num_columns + VAR_2);

 return VAR_0->vrambase + VAR_4;
}
