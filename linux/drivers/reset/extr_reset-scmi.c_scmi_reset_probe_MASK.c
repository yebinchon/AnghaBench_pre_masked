
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_resets; struct device_node* of_node; int owner; int * ops; } ;
struct scmi_reset_data {TYPE_2__ rcdev; struct scmi_handle const* handle; } ;
struct scmi_handle {TYPE_1__* reset_ops; } ;
struct device {struct device_node* of_node; } ;
struct scmi_device {struct scmi_handle* handle; struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int (* num_domains_get ) (struct scmi_handle const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct scmi_reset_data* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct device*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_2 (struct scmi_handle const*) ;

__attribute__((used)) static int FUNC_3(struct scmi_device *VAR_5)
{
 struct scmi_reset_data *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 const struct scmi_handle *VAR_9 = VAR_5->handle;

 if (!VAR_9 || !VAR_9->reset_ops)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->rcdev.ops = &VAR_4;
 VAR_6->rcdev.owner = VAR_3;
 VAR_6->rcdev.of_node = VAR_8;
 VAR_6->rcdev.nr_resets = VAR_9->reset_ops->num_domains_get(VAR_9);
 VAR_6->handle = VAR_9;

 return FUNC_1(VAR_7, &VAR_6->rcdev);
}
