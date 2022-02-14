
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int dummy; } ;
struct backlight_properties {scalar_t__ type; } ;
struct backlight_ops {int dummy; } ;
struct TYPE_7__ {int release; struct device* parent; int class; } ;
struct TYPE_8__ {void* type; } ;
struct backlight_device {int entry; struct backlight_ops const* ops; TYPE_1__ dev; TYPE_2__ props; int ops_lock; int update_lock; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct backlight_device* FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,char const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct backlight_device*) ;
 int VAR_9 ;
 int FUNC_3 (int *,int ,struct backlight_device*) ;
 int FUNC_4 (TYPE_1__*,void*) ;
 int FUNC_5 (TYPE_1__*,char*,char const*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 struct backlight_device* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_2__*,struct backlight_properties const*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct backlight_device* VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (char*,char const*) ;
 int FUNC_15 (TYPE_1__*) ;

struct backlight_device *FUNC_16(const char *VAR_12,
 struct device *VAR_13, void *VAR_14, const struct backlight_ops *VAR_15,
 const struct backlight_properties *VAR_16)
{
 struct backlight_device *VAR_17;
 int VAR_18;

 FUNC_14("backlight_device_register: name=%s\n", VAR_12);

 VAR_17 = FUNC_8(sizeof(struct backlight_device), VAR_4);
 if (!VAR_17)
  return FUNC_0(-VAR_3);

 FUNC_11(&VAR_17->update_lock);
 FUNC_11(&VAR_17->ops_lock);

 VAR_17->dev.class = VAR_5;
 VAR_17->dev.parent = VAR_13;
 VAR_17->dev.release = VAR_9;
 FUNC_5(&VAR_17->dev, "%s", VAR_12);
 FUNC_4(&VAR_17->dev, VAR_14);


 if (VAR_16) {
  FUNC_10(&VAR_17->props, VAR_16,
         sizeof(struct backlight_properties));
  if (VAR_16->type <= 0 || VAR_16->type >= VAR_2) {
   FUNC_1(1, "%s: invalid backlight type", VAR_12);
   VAR_17->props.type = VAR_0;
  }
 } else {
  VAR_17->props.type = VAR_0;
 }

 VAR_18 = FUNC_6(&VAR_17->dev);
 if (VAR_18) {
  FUNC_15(&VAR_17->dev);
  return FUNC_0(VAR_18);
 }

 VAR_18 = FUNC_2(VAR_17);
 if (VAR_18) {
  FUNC_7(&VAR_17->dev);
  return FUNC_0(VAR_18);
 }

 VAR_17->ops = VAR_15;
 FUNC_12(&VAR_7);
 FUNC_9(&VAR_17->entry, &VAR_6);
 FUNC_13(&VAR_7);

 FUNC_3(&VAR_8,
         VAR_1, VAR_17);

 return VAR_17;
}
