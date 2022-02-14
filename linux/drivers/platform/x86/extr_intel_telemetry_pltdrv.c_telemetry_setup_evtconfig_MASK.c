
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct telemetry_evtconfig {scalar_t__ num_evts; int evtmap; } ;
typedef enum telemetry_action { ____Placeholder_telemetry_action } telemetry_action ;
struct TYPE_2__ {int telem_in_use; int telem_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,scalar_t__,int) ;
 int FUNC_3 (struct telemetry_evtconfig,int) ;
 int FUNC_4 (struct telemetry_evtconfig,int) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_5(struct telemetry_evtconfig VAR_6,
         struct telemetry_evtconfig VAR_7,
         enum telemetry_action VAR_8)
{
 int VAR_9;

 FUNC_0(&(VAR_5->telem_lock));

 if ((VAR_8 == VAR_4) && (VAR_5->telem_in_use)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = FUNC_2(VAR_3, VAR_6.evtmap,
        VAR_6.num_evts, VAR_8);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_2(VAR_2, VAR_7.evtmap,
        VAR_7.num_evts, VAR_8);
 if (VAR_9)
  goto out;

 if (VAR_7.num_evts) {
  VAR_9 = FUNC_3(VAR_7, VAR_8);
  if (VAR_9)
   goto out;
 }

 if (VAR_6.num_evts) {
  VAR_9 = FUNC_4(VAR_6, VAR_8);
  if (VAR_9)
   goto out;
 }

 if ((VAR_8 == VAR_4) || (VAR_8 == VAR_1))
  VAR_5->telem_in_use = 1;
 else
  VAR_5->telem_in_use = 0;

out:
 FUNC_1(&(VAR_5->telem_lock));
 return VAR_9;
}
