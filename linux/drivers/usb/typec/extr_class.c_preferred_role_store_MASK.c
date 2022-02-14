
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct typec_port {int prefer_role; TYPE_1__* cap; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ type; int (* try_role ) (TYPE_1__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 struct typec_port* FUNC_4 (struct device*) ;
 int VAR_4 ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_5, struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 struct typec_port *VAR_9 = FUNC_4(VAR_5);
 int VAR_10;
 int VAR_11;

 if (VAR_9->cap->type != VAR_3) {
  FUNC_0(VAR_5, "Preferred role only supported with DRP ports\n");
  return -VAR_1;
 }

 if (!VAR_9->cap->try_role) {
  FUNC_0(VAR_5, "Setting preferred role not supported\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_7);
 if (VAR_10 < 0) {
  if (FUNC_3(VAR_7, "none"))
   VAR_10 = VAR_2;
  else
   return -VAR_0;
 }

 VAR_11 = VAR_9->cap->try_role(VAR_9->cap, VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_9->prefer_role = VAR_10;
 return VAR_8;
}
