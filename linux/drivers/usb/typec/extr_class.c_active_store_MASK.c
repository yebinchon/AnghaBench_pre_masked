
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct typec_altmode {int active; TYPE_3__* ops; TYPE_1__ dev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct altmode {TYPE_2__* partner; } ;
typedef int ssize_t ;
struct TYPE_8__ {scalar_t__ active; } ;
struct TYPE_7__ {int (* activate ) (struct typec_altmode*,int) ;} ;
struct TYPE_6__ {TYPE_4__ adev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct typec_altmode*,int) ;
 struct altmode* FUNC_4 (struct typec_altmode*) ;
 struct typec_altmode* FUNC_5 (struct device*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (struct typec_altmode*,int) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct typec_altmode *VAR_5 = FUNC_5(VAR_1);
 struct altmode *VAR_6 = FUNC_4(VAR_5);
 bool VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_3, &VAR_7);
 if (VAR_8)
  return VAR_8;

 if (VAR_5->active == VAR_7)
  return VAR_4;

 if (FUNC_1(VAR_5->dev.parent)) {
  FUNC_7(VAR_5, VAR_7);


  if (VAR_6->partner && !VAR_7 && VAR_6->partner->adev.active)
   FUNC_6(&VAR_6->partner->adev);
 } else if (VAR_6->partner) {
  if (VAR_7 && !VAR_6->partner->adev.active) {
   FUNC_0(VAR_1, "port has the mode disabled\n");
   return -VAR_0;
  }
 }


 if (VAR_5->ops && VAR_5->ops->activate) {
  VAR_8 = VAR_5->ops->activate(VAR_5, VAR_7);
  if (VAR_8)
   return VAR_8;
 }

 return VAR_4;
}
