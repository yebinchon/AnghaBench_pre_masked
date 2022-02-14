
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct watchdog_device {unsigned int timeout; TYPE_1__* info; scalar_t__ parent; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_2__ {scalar_t__ identity; } ;


 int VAR_0 ;
 char const* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,unsigned int*) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 int FUNC_3 (char*,char const*,unsigned int) ;
 int FUNC_4 (struct watchdog_device*) ;
 int FUNC_5 (struct watchdog_device*,unsigned int) ;

int FUNC_6(struct watchdog_device *VAR_1,
    unsigned int VAR_2, struct device *VAR_3)
{
 const char *VAR_4 = VAR_1->parent ? FUNC_0(VAR_1->parent) :
         (const char *)VAR_1->info->identity;
 unsigned int VAR_5 = 0;
 int VAR_6 = 0;

 FUNC_4(VAR_1);


 if (VAR_2) {
  if (!FUNC_5(VAR_1, VAR_2)) {
   VAR_1->timeout = VAR_2;
   return 0;
  }
  FUNC_2("%s: driver supplied timeout (%u) out of range\n",
   VAR_4, VAR_2);
  VAR_6 = -VAR_0;
 }


 if (VAR_3 && VAR_3->of_node &&
     FUNC_1(VAR_3->of_node, "timeout-sec", &VAR_5) == 0) {
  if (VAR_5 && !FUNC_5(VAR_1, VAR_5)) {
   VAR_1->timeout = VAR_5;
   return 0;
  }
  FUNC_2("%s: DT supplied timeout (%u) out of range\n", VAR_4, VAR_5);
  VAR_6 = -VAR_0;
 }

 if (VAR_6 < 0 && VAR_1->timeout)
  FUNC_3("%s: falling back to default timeout (%u)\n", VAR_4,
   VAR_1->timeout);

 return VAR_6;
}
