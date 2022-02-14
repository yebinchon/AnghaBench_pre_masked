
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_mailbox {int rsp_status; int aen_lock; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_3__ {struct qlcnic_mailbox* mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_mailbox*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7 = VAR_3;
 struct qlcnic_mailbox *VAR_8 = VAR_4->ahw->mailbox;
 unsigned long VAR_9;

 FUNC_6(&VAR_8->aen_lock, VAR_9);
 VAR_5 = FUNC_1(VAR_4->ahw, VAR_0);
 if (!(VAR_5 & VAR_2))
  goto out;

 VAR_6 = FUNC_5(FUNC_0(VAR_4->ahw, 0));
 if (VAR_6 & VAR_1) {
  FUNC_2(VAR_4);
 } else {
  if (VAR_8->rsp_status != VAR_7)
   FUNC_4(VAR_8);
 }
out:
 FUNC_3(VAR_4);
 FUNC_7(&VAR_8->aen_lock, VAR_9);
}
