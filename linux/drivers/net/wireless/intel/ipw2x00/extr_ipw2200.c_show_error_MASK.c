
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ipw_priv {TYPE_3__* error; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int elem_len; int log_len; TYPE_2__* log; TYPE_1__* elem; int config; int status; int jiffies; } ;
struct TYPE_5__ {int time; int event; int data; } ;
struct TYPE_4__ {int time; int desc; int blink1; int blink2; int data; int link2; int link1; } ;


 int VAR_0 ;
 struct ipw_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct ipw_priv *VAR_4 = FUNC_0(VAR_1);
 u32 VAR_5 = 0, VAR_6;
 if (!VAR_4->error)
  return 0;
 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5,
   "%08lX%08X%08X%08X",
   VAR_4->error->jiffies,
   VAR_4->error->status,
   VAR_4->error->config, VAR_4->error->elem_len);
 for (VAR_6 = 0; VAR_6 < VAR_4->error->elem_len; VAR_6++)
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5,
    "\n%08X%08X%08X%08X%08X%08X%08X",
    VAR_4->error->elem[VAR_6].time,
    VAR_4->error->elem[VAR_6].desc,
    VAR_4->error->elem[VAR_6].blink1,
    VAR_4->error->elem[VAR_6].blink2,
    VAR_4->error->elem[VAR_6].link1,
    VAR_4->error->elem[VAR_6].link2,
    VAR_4->error->elem[VAR_6].data);

 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5,
   "\n%08X", VAR_4->error->log_len);
 for (VAR_6 = 0; VAR_6 < VAR_4->error->log_len; VAR_6++)
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5,
    "\n%08X%08X%08X",
    VAR_4->error->log[VAR_6].time,
    VAR_4->error->log[VAR_6].event,
    VAR_4->error->log[VAR_6].data);
 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_0 - VAR_5, "\n");
 return VAR_5;
}
