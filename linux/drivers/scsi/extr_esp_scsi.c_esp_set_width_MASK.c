
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {size_t id; TYPE_1__ dev; } ;
struct esp_target_data {int nego_goal_width; int flags; } ;
struct esp {struct esp_target_data* target; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (int ) ;
 struct esp* FUNC_1 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_2(struct scsi_target *VAR_1, int VAR_2)
{
 struct Scsi_Host *VAR_3 = FUNC_0(VAR_1->dev.parent);
 struct esp *VAR_4 = FUNC_1(VAR_3);
 struct esp_target_data *VAR_5 = &VAR_4->target[VAR_1->id];

 VAR_5->nego_goal_width = (VAR_2 ? 1 : 0);
 VAR_5->flags |= VAR_0;
}
