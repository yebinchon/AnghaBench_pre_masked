
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_5__ {char* name; scalar_t__ brightness; int flags; int brightness_set; int max_brightness; } ;
struct nvec_led {TYPE_2__ cdev; struct nvec_chip* nvec; } ;
struct nvec_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvec_chip* FUNC_0 (int ) ;
 struct nvec_led* FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_3 (struct platform_device*,struct nvec_led*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_5)
{
 struct nvec_chip *VAR_6 = FUNC_0(VAR_5->dev.parent);
 struct nvec_led *VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->cdev.max_brightness = VAR_3;

 VAR_7->cdev.brightness_set = VAR_4;
 VAR_7->cdev.name = "paz00-led";
 VAR_7->cdev.flags |= VAR_2;
 VAR_7->nvec = VAR_6;

 FUNC_3(VAR_5, VAR_7);

 VAR_8 = FUNC_2(&VAR_5->dev, &VAR_7->cdev);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_7->cdev.brightness = 0;

 return 0;
}
