
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qlcnic_mailbox {int rsp_status; int aen_lock; } ;
struct qlcnic_hardware_context {struct qlcnic_mailbox* mailbox; } ;
struct qlcnic_adapter {struct qlcnic_hardware_context* ahw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct qlcnic_hardware_context*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_mailbox*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct qlcnic_adapter *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7 = VAR_3;
 struct qlcnic_hardware_context *VAR_8 = VAR_4->ahw;
 struct qlcnic_mailbox *VAR_9 = VAR_8->mailbox;
 unsigned long VAR_10;

 FUNC_5(&VAR_9->aen_lock, VAR_10);
 VAR_5 = FUNC_1(VAR_8, VAR_0);
 if (VAR_5 & VAR_2) {
  VAR_6 = FUNC_4(FUNC_0(VAR_8, 0));
  if (VAR_6 & VAR_1) {
   FUNC_2(VAR_4);
  } else {
   if (VAR_9->rsp_status != VAR_7)
    FUNC_3(VAR_9);
  }
 }
 FUNC_6(&VAR_9->aen_lock, VAR_10);
}
