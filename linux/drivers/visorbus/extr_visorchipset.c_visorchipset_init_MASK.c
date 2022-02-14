
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct visorchannel {int dummy; } ;
struct visor_controlvm_channel {int dummy; } ;
struct TYPE_7__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; TYPE_2__* driver_data; } ;
struct TYPE_8__ {struct visorchannel* controlvm_channel; struct acpi_device* acpi_device; int periodic_controlvm_work; void* poll_jiffies; int most_recent_message_jiffies; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 scalar_t__ FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,void*) ;
 int VAR_8 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,TYPE_1__*,int *,char*,int,int ,int ) ;
 int VAR_9 ;
 int FUNC_11 () ;
 int FUNC_12 (struct visorchannel*) ;
 int FUNC_13 (struct visorchannel*) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct acpi_device *VAR_11)
{
 int VAR_12 = -VAR_0;
 struct visorchannel *VAR_13;

 VAR_5 = FUNC_6(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  goto error;
 VAR_12 = FUNC_2(VAR_5);
 if (VAR_12)
  goto error_free_chipset_dev;
 VAR_11->driver_data = VAR_5;
 VAR_5->acpi_device = VAR_11;
 VAR_5->poll_jiffies = VAR_2;
 VAR_12 = FUNC_8(&VAR_5->acpi_device->dev.kobj,
      VAR_10);
 if (VAR_12 < 0)
  goto error_destroy_channel;
 VAR_13 = VAR_5->controlvm_channel;
 if (!FUNC_10(FUNC_13(VAR_13),
     &VAR_5->acpi_device->dev,
     &VAR_9,
     "controlvm",
     sizeof(struct visor_controlvm_channel),
     VAR_4,
     VAR_3))
  goto error_delete_groups;

 if (FUNC_4())
  FUNC_0(&VAR_5->periodic_controlvm_work,
      VAR_8);
 else
  FUNC_0(&VAR_5->periodic_controlvm_work,
      VAR_6);
 VAR_5->most_recent_message_jiffies = VAR_7;
 VAR_5->poll_jiffies = VAR_2;
 FUNC_7(&VAR_5->periodic_controlvm_work,
         VAR_5->poll_jiffies);
 VAR_12 = FUNC_11();
 if (VAR_12 < 0)
  goto error_cancel_work;
 return 0;

error_cancel_work:
 FUNC_1(&VAR_5->periodic_controlvm_work);

error_delete_groups:
 FUNC_9(&VAR_5->acpi_device->dev.kobj,
       VAR_10);

error_destroy_channel:
 FUNC_12(VAR_5->controlvm_channel);

error_free_chipset_dev:
 FUNC_5(VAR_5);

error:
 FUNC_3(&VAR_11->dev, "failed with error %d\n", VAR_12);
 return VAR_12;
}
