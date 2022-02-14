
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct NvRamType {size_t scsi_id; size_t channel_cfg; size_t max_tag; TYPE_1__* target; int delay_time; } ;
struct TYPE_4__ {scalar_t__ value; } ;
struct TYPE_3__ {size_t cfg0; size_t period; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct NvRamType *VAR_9)
{
 u8 VAR_10;


 if (VAR_8[VAR_0].value != VAR_4)
  VAR_9->scsi_id = (u8)VAR_8[VAR_0].value;

 if (VAR_8[VAR_1].value != VAR_4)
  VAR_9->channel_cfg = (u8)VAR_8[VAR_1].value;

 if (VAR_8[VAR_5].value != VAR_4)
  VAR_9->delay_time = FUNC_0(
     VAR_8[VAR_5].value);

 if (VAR_8[VAR_6].value != VAR_4)
  VAR_9->max_tag = (u8)VAR_8[VAR_6].value;


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_8[VAR_2].value != VAR_4)
   VAR_9->target[VAR_10].cfg0 =
    (u8)VAR_8[VAR_2].value;

  if (VAR_8[VAR_3].value != VAR_4)
   VAR_9->target[VAR_10].period =
    (u8)VAR_8[VAR_3].value;

 }
}
