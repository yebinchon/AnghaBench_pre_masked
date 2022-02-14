
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef size_t u8 ;
struct platform_zone {int dummy; } ;
struct TYPE_18__ {int kobj; } ;
struct platform_device {TYPE_8__ dev; } ;
struct device_attribute {int dummy; } ;
struct attribute {int dummy; } ;
struct TYPE_19__ {int max_brightness; } ;
struct TYPE_17__ {int num_zones; } ;
struct TYPE_16__ {TYPE_3__** attrs; } ;
struct TYPE_15__ {char* name; int mode; } ;
struct TYPE_14__ {size_t location; TYPE_1__* attr; } ;
struct TYPE_13__ {TYPE_3__ attr; int store; int show; } ;
struct TYPE_12__ {TYPE_3__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_11__ VAR_6 ;
 int VAR_7 ;
 TYPE_9__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (int,int,int ) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_8__*,TYPE_9__*) ;
 int VAR_10 ;
 TYPE_7__* VAR_11 ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 TYPE_4__ VAR_12 ;
 TYPE_3__** VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_18)
{
 u8 VAR_19;
 char VAR_20[10];
 char *VAR_21;

 if (VAR_9 == VAR_4) {
  VAR_10 = VAR_5;
 } else if (VAR_9 == VAR_2) {
  VAR_10 = VAR_3;
 }
 VAR_8.max_brightness = 0x0F;
 VAR_7 = VAR_8.max_brightness;
 VAR_15 =
     FUNC_0(VAR_11->num_zones + 1, sizeof(struct device_attribute),
      VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_13 =
     FUNC_0(VAR_11->num_zones + 2, sizeof(struct attribute *),
      VAR_1);
 if (!VAR_13)
  return -VAR_0;

 VAR_14 =
     FUNC_0(VAR_11->num_zones, sizeof(struct platform_zone),
      VAR_1);
 if (!VAR_14)
  return -VAR_0;

 for (VAR_19 = 0; VAR_19 < VAR_11->num_zones; VAR_19++) {
  FUNC_3(VAR_20, "zone%02hhX", VAR_19);
  VAR_21 = FUNC_1(VAR_20, VAR_1);
  if (VAR_21 == ((void*)0))
   return 1;
  FUNC_4(&VAR_15[VAR_19].attr);
  VAR_15[VAR_19].attr.name = VAR_21;
  VAR_15[VAR_19].attr.mode = 0644;
  VAR_15[VAR_19].show = VAR_17;
  VAR_15[VAR_19].store = VAR_16;
  VAR_14[VAR_19].location = VAR_19;
  VAR_13[VAR_19] = &VAR_15[VAR_19].attr;
  VAR_14[VAR_19].attr = &VAR_15[VAR_19];
 }
 VAR_13[VAR_11->num_zones] = &VAR_6.attr;
 VAR_12.attrs = VAR_13;

 FUNC_2(&VAR_18->dev, &VAR_8);

 return FUNC_5(&VAR_18->dev.kobj, &VAR_12);
}
