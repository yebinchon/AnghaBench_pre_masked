
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dwc2_hcd_urb {TYPE_1__* iso_descs; } ;
struct TYPE_2__ {int status; } ;



__attribute__((used)) static inline u32 FUNC_0(
  struct dwc2_hcd_urb *VAR_0, int VAR_1)
{
 return VAR_0->iso_descs[VAR_1].status;
}
