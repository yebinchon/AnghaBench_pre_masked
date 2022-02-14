
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_ctlr_device {int enabled; } ;
struct fcoe_ctlr {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct fcoe_ctlr*) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 struct fcoe_ctlr* FUNC_2 (struct fcoe_ctlr_device*) ;

__attribute__((used)) static int FUNC_3(struct fcoe_ctlr_device *VAR_1)
{
 struct fcoe_ctlr *VAR_2 = FUNC_2(VAR_1);

 switch (VAR_1->enabled) {
 case 129:
  return FUNC_1(VAR_2);
 case 130:
  return FUNC_0(VAR_2);
 case 128:
 default:
  return -VAR_0;
 };
}
