
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct device* parent; int * bus; int * type; } ;
struct TYPE_6__ {int setable; TYPE_3__ dev; } ;
struct TYPE_5__ {int object_id; } ;
struct wmi_block {int read_takes_no_args; TYPE_2__ dev; TYPE_1__ gblock; int char_mutex; } ;
struct guid_block {int flags; int guid; } ;
struct device {int dummy; } ;
struct acpi_device_info {scalar_t__ type; scalar_t__ param_count; } ;
struct acpi_device {int handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 int FUNC_1 (struct device*,char*,char*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*,struct acpi_device_info**) ;
 int FUNC_4 (struct acpi_device_info*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_8(struct device *VAR_7,
        const struct guid_block *VAR_8,
        struct wmi_block *VAR_9,
        struct acpi_device *VAR_10)
{
 struct acpi_device_info *VAR_11;
 char VAR_12[5];
 int VAR_13;

 if (VAR_8->flags & VAR_1) {
  VAR_9->dev.dev.type = &VAR_5;
  goto out_init;
 }

 if (VAR_8->flags & VAR_2) {
  VAR_9->dev.dev.type = &VAR_6;
  FUNC_5(&VAR_9->char_mutex);
  goto out_init;
 }






 FUNC_6(VAR_12, "WQ");
 FUNC_7(VAR_12, VAR_9->gblock.object_id, 2);
 VAR_13 = FUNC_3(VAR_10->handle, VAR_12, &VAR_11);

 if (VAR_13) {
  FUNC_1(VAR_7,
    "%s data block query control method not found\n",
    VAR_12);
  return VAR_13;
 }

 VAR_9->dev.dev.type = &VAR_4;
 if (VAR_11->type != VAR_0 || VAR_11->param_count == 0)
  VAR_9->read_takes_no_args = 1;

 FUNC_4(VAR_11);

 FUNC_6(VAR_12, "WS");
 FUNC_7(VAR_12, VAR_9->gblock.object_id, 2);
 VAR_13 = FUNC_3(VAR_10->handle, VAR_12, ((void*)0));

 if (VAR_13 == 0)
  VAR_9->dev.setable = 1;

 out_init:
 VAR_9->dev.dev.bus = &VAR_3;
 VAR_9->dev.dev.parent = VAR_7;

 FUNC_0(&VAR_9->dev.dev, "%pUL", VAR_8->guid);

 FUNC_2(&VAR_9->dev.dev);

 return 0;
}
