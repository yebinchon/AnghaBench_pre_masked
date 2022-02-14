
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fcoe_fcf {scalar_t__ flogi_sent; } ;
struct fcoe_ctlr {int ctlr_mutex; int ctlr_lock; int * flogi_req; } ;


 int VAR_0 ;
 int FUNC_0 (struct fcoe_ctlr*,char*) ;
 int FUNC_1 (struct fcoe_ctlr*) ;
 struct fcoe_fcf* FUNC_2 (struct fcoe_ctlr*) ;
 int FUNC_3 (struct fcoe_ctlr*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct fcoe_ctlr *VAR_1)
{
 struct fcoe_fcf *VAR_2;
 int VAR_3;

 FUNC_5(&VAR_1->ctlr_mutex);
 FUNC_7(&VAR_1->ctlr_lock);
 FUNC_0(VAR_1, "re-sending FLOGI - reselect\n");
 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2 || VAR_2->flogi_sent) {
  FUNC_4(VAR_1->flogi_req);
  VAR_1->flogi_req = ((void*)0);
  VAR_3 = -VAR_0;
 } else {
  FUNC_3(VAR_1, ((void*)0));
  VAR_3 = FUNC_1(VAR_1);
 }
 FUNC_8(&VAR_1->ctlr_lock);
 FUNC_6(&VAR_1->ctlr_mutex);
 return VAR_3;
}
