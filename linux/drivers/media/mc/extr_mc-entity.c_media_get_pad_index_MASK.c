
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct media_entity {int num_pads; TYPE_1__* pads; } ;
typedef enum media_pad_signal_type { ____Placeholder_media_pad_signal_type } media_pad_signal_type ;
struct TYPE_2__ {scalar_t__ flags; int sig_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct media_entity *VAR_3, bool VAR_4,
   enum media_pad_signal_type VAR_5)
{
 int VAR_6;
 bool VAR_7;

 if (!VAR_3)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3->num_pads; VAR_6++) {
  if (VAR_3->pads[VAR_6].flags == VAR_1)
   VAR_7 = 1;
  else if (VAR_3->pads[VAR_6].flags == VAR_2)
   VAR_7 = 0;
  else
   continue;

  if (VAR_7 != VAR_4)
   continue;
  if (VAR_3->pads[VAR_6].sig_type == VAR_5)
   return VAR_6;
 }
 return -VAR_0;
}
