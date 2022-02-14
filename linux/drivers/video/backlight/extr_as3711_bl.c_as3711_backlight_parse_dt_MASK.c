
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct device {TYPE_1__* parent; } ;
struct as3711_bl_pdata {int su1_fb; scalar_t__ su1_max_uA; int su2_fb; scalar_t__ su2_max_uA; scalar_t__ su2_feedback; int su2_auto_curr1; int su2_auto_curr2; int su2_auto_curr3; int su2_fbprot; } ;
struct TYPE_2__ {int of_node; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct device*,char*) ;
 struct as3711_bl_pdata* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_3 (int ,char*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int ) ;
 int FUNC_6 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_11)
{
 struct as3711_bl_pdata *VAR_12 = FUNC_1(VAR_11);
 struct device_node *VAR_13, *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_3(VAR_11->parent->of_node, "backlight");
 if (!VAR_13) {
  FUNC_0(VAR_11, "backlight node not found\n");
  return -VAR_10;
 }

 VAR_14 = FUNC_5(VAR_13, "su1-dev", 0);
 if (VAR_14) {
  FUNC_4(VAR_14);

  VAR_12->su1_fb = 1;

  VAR_15 = FUNC_6(VAR_13, "su1-max-uA", &VAR_12->su1_max_uA);
  if (VAR_12->su1_max_uA <= 0)
   VAR_15 = -VAR_9;
  if (VAR_15 < 0)
   goto err_put_bl;
 }

 VAR_14 = FUNC_5(VAR_13, "su2-dev", 0);
 if (VAR_14) {
  int VAR_16 = 0;

  FUNC_4(VAR_14);

  VAR_12->su2_fb = 1;

  VAR_15 = FUNC_6(VAR_13, "su2-max-uA", &VAR_12->su2_max_uA);
  if (VAR_12->su2_max_uA <= 0)
   VAR_15 = -VAR_9;
  if (VAR_15 < 0)
   goto err_put_bl;

  if (FUNC_2(VAR_13, "su2-feedback-voltage", ((void*)0))) {
   VAR_12->su2_feedback = VAR_8;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-feedback-curr1", ((void*)0))) {
   VAR_12->su2_feedback = VAR_0;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-feedback-curr2", ((void*)0))) {
   VAR_12->su2_feedback = VAR_1;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-feedback-curr3", ((void*)0))) {
   VAR_12->su2_feedback = VAR_2;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-feedback-curr-auto", ((void*)0))) {
   VAR_12->su2_feedback = VAR_3;
   VAR_16++;
  }
  if (VAR_16 != 1) {
   VAR_15 = -VAR_9;
   goto err_put_bl;
  }

  VAR_16 = 0;
  if (FUNC_2(VAR_13, "su2-fbprot-lx-sd4", ((void*)0))) {
   VAR_12->su2_fbprot = VAR_7;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-fbprot-gpio2", ((void*)0))) {
   VAR_12->su2_fbprot = VAR_4;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-fbprot-gpio3", ((void*)0))) {
   VAR_12->su2_fbprot = VAR_5;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-fbprot-gpio4", ((void*)0))) {
   VAR_12->su2_fbprot = VAR_6;
   VAR_16++;
  }
  if (VAR_16 != 1) {
   VAR_15 = -VAR_9;
   goto err_put_bl;
  }

  VAR_16 = 0;
  if (FUNC_2(VAR_13, "su2-auto-curr1", ((void*)0))) {
   VAR_12->su2_auto_curr1 = 1;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-auto-curr2", ((void*)0))) {
   VAR_12->su2_auto_curr2 = 1;
   VAR_16++;
  }
  if (FUNC_2(VAR_13, "su2-auto-curr3", ((void*)0))) {
   VAR_12->su2_auto_curr3 = 1;
   VAR_16++;
  }





  if (!VAR_16 ^ (VAR_12->su2_feedback != VAR_3)) {
   VAR_15 = -VAR_9;
   goto err_put_bl;
  }
 }

 FUNC_4(VAR_13);

 return 0;

err_put_bl:
 FUNC_4(VAR_13);

 return VAR_15;
}
