
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_adapter {scalar_t__ work_queue; TYPE_1__* ccw_device; } ;
typedef int name ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct zfcp_adapter *VAR_3)
{
 char VAR_4[VAR_1];

 FUNC_2(VAR_4, sizeof(VAR_4), "zfcp_q_%s",
   FUNC_1(&VAR_3->ccw_device->dev));
 VAR_3->work_queue = FUNC_0(VAR_4, VAR_2);

 if (VAR_3->work_queue)
  return 0;
 return -VAR_0;
}
