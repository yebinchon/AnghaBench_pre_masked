
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {size_t id; int dev; } ;
struct esp_target_data {int * starget; } ;
struct esp {struct esp_target_data* target; } ;


 int FUNC_0 (int *) ;
 struct esp* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct scsi_target *VAR_0)
{
 struct esp *VAR_1 = FUNC_1(FUNC_0(&VAR_0->dev));
 struct esp_target_data *VAR_2 = &VAR_1->target[VAR_0->id];

 VAR_2->starget = ((void*)0);
}
