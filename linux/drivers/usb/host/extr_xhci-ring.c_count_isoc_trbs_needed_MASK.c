
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct urb {TYPE_1__* iso_frame_desc; scalar_t__ transfer_dma; } ;
struct TYPE_2__ {scalar_t__ length; scalar_t__ offset; } ;


 unsigned int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct urb *VAR_0, int VAR_1)
{
 u64 VAR_2, VAR_3;

 VAR_2 = (u64) (VAR_0->transfer_dma + VAR_0->iso_frame_desc[VAR_1].offset);
 VAR_3 = VAR_0->iso_frame_desc[VAR_1].length;

 return FUNC_0(VAR_2, VAR_3);
}
