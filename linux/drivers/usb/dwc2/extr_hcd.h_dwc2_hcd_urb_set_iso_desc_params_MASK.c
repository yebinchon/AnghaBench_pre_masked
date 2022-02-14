
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct dwc2_hcd_urb {TYPE_1__* iso_descs; } ;
struct TYPE_2__ {void* length; void* offset; } ;



__attribute__((used)) static inline void FUNC_0(
  struct dwc2_hcd_urb *VAR_0, int VAR_1, u32 VAR_2,
  u32 VAR_3)
{
 VAR_0->iso_descs[VAR_1].offset = VAR_2;
 VAR_0->iso_descs[VAR_1].length = VAR_3;
}
