
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {size_t id; TYPE_1__ dev; } ;
struct esp_target_data {int nego_goal_offset; int flags; } ;
struct esp {int flags; struct esp_target_data* target; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (int ) ;
 struct esp* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_2(struct scsi_target *VAR_2, int VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_2->dev.parent);
 struct esp *VAR_5 = FUNC_1(VAR_4);
 struct esp_target_data *VAR_6 = &VAR_5->target[VAR_2->id];

 if (VAR_5->flags & VAR_0)
  VAR_6->nego_goal_offset = 0;
 else
  VAR_6->nego_goal_offset = VAR_3;
 VAR_6->flags |= VAR_1;
}
