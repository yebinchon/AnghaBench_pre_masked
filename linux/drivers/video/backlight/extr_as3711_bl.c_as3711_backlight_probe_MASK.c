
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct as3711_bl_data {int type; } ;
struct as3711_bl_supply {struct as3711_bl_data su2; struct as3711_bl_data su1; struct as3711_bl_pdata* pdata; struct as3711* as3711; } ;
struct as3711_bl_pdata {int su2_fbprot; int su2_feedback; int su1_max_uA; int su2_max_uA; scalar_t__ su2_fb; scalar_t__ su1_fb; } ;
struct as3711 {int dummy; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct as3711_bl_supply*) ;
 int FUNC_2 (struct platform_device*,unsigned int,struct as3711_bl_data*) ;
 int FUNC_3 (TYPE_1__*,char*,...) ;
 struct as3711* FUNC_4 (TYPE_4__*) ;
 struct as3711_bl_pdata* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 struct as3711_bl_supply* FUNC_7 (TYPE_1__*,int,int ) ;
 unsigned int FUNC_8 (int,int) ;
 int FUNC_9 (struct platform_device*,struct as3711_bl_supply*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct as3711_bl_pdata *VAR_7 = FUNC_5(&VAR_6->dev);
 struct as3711 *VAR_8 = FUNC_4(VAR_6->dev.parent);
 struct as3711_bl_supply *VAR_9;
 struct as3711_bl_data *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 if (!VAR_7) {
  FUNC_3(&VAR_6->dev, "No platform data, exiting...\n");
  return -VAR_3;
 }

 if (VAR_6->dev.parent->of_node) {
  VAR_12 = FUNC_0(&VAR_6->dev);
  if (VAR_12 < 0) {
   FUNC_3(&VAR_6->dev, "DT parsing failed: %d\n", VAR_12);
   return VAR_12;
  }
 }

 if (!VAR_7->su1_fb && !VAR_7->su2_fb) {
  FUNC_3(&VAR_6->dev, "No framebuffer specified\n");
  return -VAR_2;
 }






 if (VAR_7->su1_fb ||
     VAR_7->su2_fbprot != 130 ||
     VAR_7->su2_feedback != 133) {
  FUNC_6(&VAR_6->dev,
    "Attention! An untested mode has been chosen!\n"
    "Please, review the code, enable, test, and report success:-)\n");
  return -VAR_2;
 }

 VAR_9 = FUNC_7(&VAR_6->dev, sizeof(*VAR_9), VAR_5);
 if (!VAR_9)
  return -VAR_4;

 VAR_9->as3711 = VAR_8;
 VAR_9->pdata = VAR_7;

 if (VAR_7->su1_fb) {
  VAR_10 = &VAR_9->su1;
  VAR_10->type = VAR_0;

  VAR_11 = FUNC_8(VAR_7->su1_max_uA, 31);
  VAR_12 = FUNC_2(VAR_6, VAR_11, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;
 }

 if (VAR_7->su2_fb) {
  VAR_10 = &VAR_9->su2;
  VAR_10->type = VAR_1;

  switch (VAR_7->su2_fbprot) {
  case 132:
  case 131:
  case 130:
  case 129:
   break;
  default:
   return -VAR_2;
  }

  switch (VAR_7->su2_feedback) {
  case 128:
   VAR_11 = FUNC_8(VAR_7->su2_max_uA, 31);
   break;
  case 136:
  case 135:
  case 134:
  case 133:
   VAR_11 = FUNC_8(VAR_7->su2_max_uA / 150, 255);
   break;
  default:
   return -VAR_2;
  }

  VAR_12 = FUNC_1(VAR_9);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_2(VAR_6, VAR_11, VAR_10);
  if (VAR_12 < 0)
   return VAR_12;
 }

 FUNC_9(VAR_6, VAR_9);

 return 0;
}
