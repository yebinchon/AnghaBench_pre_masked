
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wm831x_pdata {int wm831x_num; } ;
struct TYPE_7__ {int get_property; int num_properties; int properties; int type; int name; } ;
struct wm831x_backup {int backup; TYPE_3__ backup_desc; int name; struct wm831x* wm831x; } ;
struct wm831x {TYPE_1__* dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_5__ {struct wm831x_pdata* platform_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct wm831x* FUNC_2 (int ) ;
 struct wm831x_backup* FUNC_3 (TYPE_2__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct wm831x_backup*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_6 (int ,int,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct wm831x*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct wm831x *VAR_6 = FUNC_2(VAR_5->dev.parent);
 struct wm831x_pdata *VAR_7 = VAR_6->dev->platform_data;
 struct wm831x_backup *VAR_8;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(struct wm831x_backup),
    VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->wm831x = VAR_6;
 FUNC_4(VAR_5, VAR_8);





 FUNC_7(VAR_6);

 if (VAR_7 && VAR_7->wm831x_num)
  FUNC_6(VAR_8->name, sizeof(VAR_8->name),
    "wm831x-backup.%d", VAR_7->wm831x_num);
 else
  FUNC_6(VAR_8->name, sizeof(VAR_8->name),
    "wm831x-backup");

 VAR_8->backup_desc.name = VAR_8->name;
 VAR_8->backup_desc.type = VAR_2;
 VAR_8->backup_desc.properties = VAR_4;
 VAR_8->backup_desc.num_properties = FUNC_0(VAR_4);
 VAR_8->backup_desc.get_property = VAR_3;
 VAR_8->backup = FUNC_5(&VAR_5->dev,
      &VAR_8->backup_desc, ((void*)0));

 return FUNC_1(VAR_8->backup);
}
