
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpdma_data {int dummy; } ;
typedef enum vpdma_frame_start_event { ____Placeholder_vpdma_frame_start_event } vpdma_frame_start_event ;
typedef enum vpdma_channel { ____Placeholder_vpdma_channel } vpdma_channel ;
struct TYPE_2__ {int cstat_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct vpdma_data*,int,int,int ,int ) ;

void FUNC_1(struct vpdma_data *VAR_3,
  enum vpdma_frame_start_event VAR_4,
  enum vpdma_channel VAR_5)
{
 int VAR_6 = VAR_2[VAR_5].cstat_offset;

 FUNC_0(VAR_3, VAR_6, VAR_4,
  VAR_0, VAR_1);
}
