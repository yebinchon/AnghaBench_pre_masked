
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qedi_ctx {int cdev; } ;
struct qed_link_output {int speed; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* common; } ;
struct TYPE_3__ {int (* get_link ) (int ,struct qed_link_output*) ;} ;


 struct qedi_ctx* FUNC_0 (struct device*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,struct qed_link_output*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct qedi_ctx *VAR_4 = FUNC_0(VAR_1);
 struct qed_link_output VAR_5;

 VAR_0->common->get_link(VAR_4->cdev, &VAR_5);

 return FUNC_1(VAR_3, "%d Gbit\n", VAR_5.speed / 1000);
}
