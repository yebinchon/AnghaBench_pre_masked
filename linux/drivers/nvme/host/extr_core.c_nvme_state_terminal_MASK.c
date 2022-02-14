
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_ctrl {int state; } ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static bool FUNC_1(struct nvme_ctrl *VAR_0)
{
 switch (VAR_0->state) {
 case 129:
 case 130:
 case 128:
 case 133:
  return 0;
 case 131:
 case 132:
  return 1;
 default:
  FUNC_0(1, "Unhandled ctrl state:%d", VAR_0->state);
  return 1;
 }
}
