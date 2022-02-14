
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_eckd_private {int * conf_data; scalar_t__ conf_len; int * gneq; int * vdsneq; int * sneq; int * ned; } ;
struct dasd_device {TYPE_1__* path; struct dasd_eckd_private* private; } ;
typedef int __u8 ;
struct TYPE_2__ {scalar_t__ chpid; scalar_t__ ssid; scalar_t__ cssid; int * conf_data; } ;


 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->private;
 int VAR_2;

 if (!VAR_1)
  return;

 FUNC_0(VAR_0);
 VAR_1->ned = ((void*)0);
 VAR_1->sneq = ((void*)0);
 VAR_1->vdsneq = ((void*)0);
 VAR_1->gneq = ((void*)0);
 VAR_1->conf_len = 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  FUNC_1(VAR_0->path[VAR_2].conf_data);
  if ((__u8 *)VAR_0->path[VAR_2].conf_data ==
      VAR_1->conf_data) {
   VAR_1->conf_data = ((void*)0);
   VAR_1->conf_len = 0;
  }
  VAR_0->path[VAR_2].conf_data = ((void*)0);
  VAR_0->path[VAR_2].cssid = 0;
  VAR_0->path[VAR_2].ssid = 0;
  VAR_0->path[VAR_2].chpid = 0;
 }
 FUNC_1(VAR_1->conf_data);
 VAR_1->conf_data = ((void*)0);
}
