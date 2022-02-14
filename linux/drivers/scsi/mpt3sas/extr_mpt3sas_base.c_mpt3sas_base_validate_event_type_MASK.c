
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int mutex; } ;
struct MPT3SAS_ADAPTER {int* event_masks; TYPE_1__ base_cmds; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct MPT3SAS_ADAPTER *VAR_1, u32 *VAR_2)
{
 int VAR_3, VAR_4;
 u32 VAR_5, VAR_6;
 u8 VAR_7;

 for (VAR_3 = 0, VAR_7 = 0; VAR_3 <
     VAR_0; VAR_3++) {
  VAR_5 = ~VAR_2[VAR_3];
  VAR_6 = 1;
  for (VAR_4 = 0; VAR_4 < 32; VAR_4++) {
   if (!(VAR_5 & VAR_6) &&
       (VAR_1->event_masks[VAR_3] & VAR_6)) {
    VAR_1->event_masks[VAR_3] &= ~VAR_6;
    VAR_7 = 1;
   }
   VAR_6 = (VAR_6 << 1);
  }
 }

 if (!VAR_7)
  return;

 FUNC_1(&VAR_1->base_cmds.mutex);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->base_cmds.mutex);
}
