
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int VAR_4 ;
 struct of_device_id* FUNC_2 (int ,struct device_node*) ;
 int FUNC_3 (struct device_node*,char*,int ,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_9)
{
 int VAR_10;
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 const struct of_device_id *VAR_12;

 VAR_12 = FUNC_2(VAR_4, VAR_11);
 if (!VAR_12) {
  FUNC_4("failed to look up compatible string\n");
  return -VAR_0;
 }
 VAR_6 = VAR_12->data;

 VAR_5 = FUNC_6(VAR_11, "syscon");
 if (FUNC_0(VAR_5)) {
  FUNC_4("failed to get syscon phandle\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_11, "syscon", VAR_1,
     &VAR_7);
 if (VAR_10) {
  FUNC_4("can't get rst_src_en offset (%d)\n", VAR_10);
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_11, "syscon", VAR_2,
     &VAR_8);
 if (VAR_10) {
  FUNC_4("can't get sw_mstr_rst offset (%d)\n", VAR_10);
  return -VAR_0;
 }

 VAR_10 = FUNC_5(&VAR_3);
 if (VAR_10)
  FUNC_1(&VAR_9->dev,
   "cannot register restart handler (err=%d)\n", VAR_10);

 return VAR_10;
}
