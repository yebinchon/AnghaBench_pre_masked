
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf_device {int dummy; } ;
struct fcoe_fcf {int * fcf_dev; int list; struct fcoe_ctlr* fip; } ;
struct fcoe_ctlr_device {int lock; } ;
struct fcoe_ctlr {int fcf_count; } ;


 int FUNC_0 (int) ;
 struct fcoe_ctlr_device* FUNC_1 (struct fcoe_ctlr*) ;
 int FUNC_2 (struct fcoe_fcf_device*) ;
 struct fcoe_fcf_device* FUNC_3 (struct fcoe_fcf*) ;
 int FUNC_4 (struct fcoe_fcf*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct fcoe_fcf *VAR_0)
{
 struct fcoe_ctlr *VAR_1 = VAR_0->fip;
 struct fcoe_ctlr_device *VAR_2;
 struct fcoe_fcf_device *VAR_3;

 FUNC_5(&VAR_0->list);
 VAR_1->fcf_count--;
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_6(&VAR_2->lock);
  VAR_3 = FUNC_3(VAR_0);
  FUNC_0(!VAR_3);
  VAR_0->fcf_dev = ((void*)0);
  FUNC_2(VAR_3);
  FUNC_4(VAR_0);
  FUNC_7(&VAR_2->lock);
 }
}
