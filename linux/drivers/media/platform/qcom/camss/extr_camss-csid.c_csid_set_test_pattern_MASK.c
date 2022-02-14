
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csid_testgen_config {int enabled; int payload_mode; } ;
struct csid_device {int * pads; struct csid_testgen_config testgen; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct csid_device *VAR_7, s32 VAR_8)
{
 struct csid_testgen_config *VAR_9 = &VAR_7->testgen;


 if (VAR_8 && FUNC_0(&VAR_7->pads[VAR_6]))
  return -VAR_5;

 VAR_9->enabled = !!VAR_8;

 switch (VAR_8) {
 case 1:
  VAR_9->payload_mode = VAR_3;
  break;
 case 2:
  VAR_9->payload_mode = VAR_2;
  break;
 case 3:
  VAR_9->payload_mode = VAR_1;
  break;
 case 4:
  VAR_9->payload_mode = VAR_0;
  break;
 case 5:
  VAR_9->payload_mode = VAR_4;
  break;
 }

 return 0;
}
