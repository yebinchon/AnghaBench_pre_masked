
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* notify ) (int ,int ) ;} ;
struct wil6210_priv {int isr_misc; int n_msi; int suspend_resp_comp; int wq; scalar_t__ suspend_resp_rcvd; int platform_handle; TYPE_1__ platform_ops; int recovery_state; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wil6210_priv*,int) ;
 int FUNC_4 (struct wil6210_priv*,char*,...) ;
 int FUNC_5 (struct wil6210_priv*,char*) ;
 int FUNC_6 (struct wil6210_priv*) ;
 int FUNC_7 (struct wil6210_priv*) ;
 int FUNC_8 (struct wil6210_priv*) ;
 int FUNC_9 (struct wil6210_priv*) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_5, void *VAR_6)
{
 struct wil6210_priv *VAR_7 = VAR_6;
 u32 VAR_8 = VAR_7->isr_misc;

 FUNC_1(VAR_8);
 FUNC_4(VAR_7, "Thread ISR MISC 0x%08x\n", VAR_8);

 if (VAR_8 & VAR_1) {
  VAR_7->recovery_state = VAR_4;
  FUNC_6(VAR_7);
  FUNC_8(VAR_7);
  VAR_8 &= ~VAR_1;
  if (VAR_7->platform_ops.notify) {
   FUNC_5(VAR_7, "notify platform driver about FW crash");
   VAR_7->platform_ops.notify(VAR_7->platform_handle,
       VAR_3);
  } else {
   FUNC_7(VAR_7);
  }
 }
 if (VAR_8 & VAR_2) {
  FUNC_4(VAR_7, "MBOX event\n");
  FUNC_9(VAR_7);
  VAR_8 &= ~VAR_2;
 }

 if (VAR_8)
  FUNC_4(VAR_7, "un-handled MISC ISR bits 0x%08x\n", VAR_8);

 VAR_7->isr_misc = 0;

 FUNC_3(VAR_7, 0);




 if (VAR_7->n_msi == 3 && VAR_7->suspend_resp_rcvd) {
  FUNC_4(VAR_7, "set suspend_resp_comp to true\n");
  VAR_7->suspend_resp_comp = 1;
  FUNC_2(&VAR_7->wq);
 }

 return VAR_0;
}
