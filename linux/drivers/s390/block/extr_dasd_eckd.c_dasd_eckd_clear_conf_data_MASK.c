
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dasd_eckd_private {scalar_t__ conf_len; int * conf_data; } ;
struct dasd_device {TYPE_1__* path; struct dasd_eckd_private* private; } ;
struct TYPE_2__ {scalar_t__ chpid; scalar_t__ ssid; scalar_t__ cssid; int * conf_data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dasd_device *VAR_0)
{
 struct dasd_eckd_private *VAR_1 = VAR_0->private;
 int VAR_2;

 VAR_1->conf_data = ((void*)0);
 VAR_1->conf_len = 0;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  FUNC_0(VAR_0->path[VAR_2].conf_data);
  VAR_0->path[VAR_2].conf_data = ((void*)0);
  VAR_0->path[VAR_2].cssid = 0;
  VAR_0->path[VAR_2].ssid = 0;
  VAR_0->path[VAR_2].chpid = 0;
 }
}
