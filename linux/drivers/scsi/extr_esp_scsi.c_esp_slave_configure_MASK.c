
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {size_t id; int sdev_target; scalar_t__ tagged_supported; int host; } ;
struct esp_target_data {int flags; } ;
struct esp {int num_tags; struct esp_target_data* target; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int ) ;
 struct esp* FUNC_1 (int ) ;
 int FUNC_2 (struct scsi_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct scsi_device *VAR_1)
{
 struct esp *VAR_2 = FUNC_1(VAR_1->host);
 struct esp_target_data *VAR_3 = &VAR_2->target[VAR_1->id];

 if (VAR_1->tagged_supported)
  FUNC_0(VAR_1, VAR_2->num_tags);

 VAR_3->flags |= VAR_0;

 if (!FUNC_3(VAR_1->sdev_target))
  FUNC_2(VAR_1);

 return 0;
}
