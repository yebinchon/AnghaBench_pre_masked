
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sm501fb_info {int ** fb; int * pdata; scalar_t__ edid_data; struct device* dev; } ;
struct sm501_platdata {int * fb; } ;
struct device {TYPE_1__* parent; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; struct sm501_platdata* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sm501fb_info*) ;
 scalar_t__ FUNC_4 (int const*,int,int ) ;
 struct sm501fb_info* FUNC_5 (int,int ) ;
 void* FUNC_6 (struct device_node*,char*,int*) ;
 int FUNC_7 (struct platform_device*,struct sm501fb_info*) ;
 int FUNC_8 (struct sm501fb_info*,size_t) ;
 int VAR_9 ;
 int FUNC_9 (struct sm501fb_info*,size_t) ;
 int FUNC_10 (struct sm501fb_info*,struct platform_device*) ;
 int FUNC_11 (struct sm501fb_info*,size_t,int ) ;
 int FUNC_12 (struct sm501fb_info*) ;
 int FUNC_13 (int ,char const*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_10)
{
 struct sm501fb_info *VAR_11;
 struct device *VAR_12 = &VAR_10->dev;
 int VAR_13;


 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_3);
 if (!VAR_11) {
  FUNC_0(VAR_12, "failed to allocate state\n");
  return -VAR_2;
 }

 VAR_11->dev = VAR_12 = &VAR_10->dev;
 FUNC_7(VAR_10, VAR_11);

 if (VAR_12->parent->platform_data) {
  struct sm501_platdata *VAR_14 = VAR_12->parent->platform_data;
  VAR_11->pdata = VAR_14->fb;
 }

 if (VAR_11->pdata == ((void*)0)) {
  int VAR_15 = 0;
  if (!VAR_15) {
   FUNC_1(VAR_12, "using default configuration data\n");
   VAR_11->pdata = &VAR_9;
  }
 }



 VAR_13 = FUNC_9(VAR_11, VAR_4);
 if (VAR_13 < 0) {
  FUNC_0(VAR_12, "failed to probe CRT\n");
  goto err_alloc;
 }

 VAR_13 = FUNC_9(VAR_11, VAR_5);
 if (VAR_13 < 0) {
  FUNC_0(VAR_12, "failed to probe PANEL\n");
  goto err_probed_crt;
 }

 if (VAR_11->fb[VAR_5] == ((void*)0) &&
     VAR_11->fb[VAR_4] == ((void*)0)) {
  FUNC_0(VAR_12, "no framebuffers found\n");
  VAR_13 = -VAR_1;
  goto err_alloc;
 }



 VAR_13 = FUNC_10(VAR_11, VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_12, "cannot initialise SM501\n");
  goto err_probed_panel;
 }

 VAR_13 = FUNC_11(VAR_11, VAR_4, VAR_6);
 if (VAR_13) {
  FUNC_0(VAR_12, "failed to start CRT\n");
  goto err_started;
 }

 VAR_13 = FUNC_11(VAR_11, VAR_5, VAR_7);
 if (VAR_13) {
  FUNC_0(VAR_12, "failed to start Panel\n");
  goto err_started_crt;
 }


 return 0;

err_started_crt:
 FUNC_14(VAR_11->fb[VAR_4]);
 FUNC_8(VAR_11, VAR_4);

err_started:
 FUNC_12(VAR_11);

err_probed_panel:
 FUNC_2(VAR_11->fb[VAR_5]);

err_probed_crt:
 FUNC_2(VAR_11->fb[VAR_4]);

err_alloc:
 FUNC_3(VAR_11);

 return VAR_13;
}
