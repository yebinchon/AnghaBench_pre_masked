
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xpt_type; } ;
struct snic {scalar_t__ link_status; int vdev; TYPE_1__ config; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct snic* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2,
       struct device_attribute *VAR_3,
       char *VAR_4)
{
 struct snic *VAR_5 = FUNC_1(FUNC_0(VAR_2));

 if (VAR_5->config.xpt_type == VAR_1)
  VAR_5->link_status = FUNC_3(VAR_5->vdev);

 return FUNC_2(VAR_4, VAR_0, "%s\n",
   (VAR_5->link_status) ? "Link Up" : "Link Down");
}
