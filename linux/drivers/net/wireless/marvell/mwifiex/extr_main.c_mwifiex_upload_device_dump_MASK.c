
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {scalar_t__ devdump_len; int * devdump_data; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,scalar_t__,int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;

void FUNC_2(struct mwifiex_adapter *VAR_2)
{



 FUNC_1(VAR_2, VAR_1,
      "== mwifiex dump information to /sys/class/devcoredump start\n");
 FUNC_0(VAR_2->dev, VAR_2->devdump_data, VAR_2->devdump_len,
        VAR_0);
 FUNC_1(VAR_2, VAR_1,
      "== mwifiex dump information to /sys/class/devcoredump end\n");





 VAR_2->devdump_data = ((void*)0);
 VAR_2->devdump_len = 0;
}
