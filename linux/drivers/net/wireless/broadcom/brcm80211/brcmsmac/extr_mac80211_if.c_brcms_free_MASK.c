
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_timer {struct brcms_timer* name; struct brcms_timer* next; } ;
struct TYPE_2__ {scalar_t__ fw_cnt; } ;
struct brcms_info {struct brcms_timer* timers; int callbacks; int * pub; int * wlc; int tasklet; scalar_t__ irq; int ucode; TYPE_1__ fw; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,struct brcms_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,struct brcms_info*) ;
 int FUNC_6 (struct brcms_timer*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct brcms_info *VAR_0)
{
 struct brcms_timer *VAR_1, *VAR_2;


 if (VAR_0->fw.fw_cnt)
  FUNC_4(&VAR_0->ucode);
 if (VAR_0->irq)
  FUNC_5(VAR_0->irq, VAR_0);


 FUNC_8(&VAR_0->tasklet);

 if (VAR_0->pub) {
  FUNC_3(VAR_0->pub);
  FUNC_2(VAR_0->pub, "linux", VAR_0);
 }


 if (VAR_0->wlc) {
  FUNC_1(VAR_0->wlc);
  VAR_0->wlc = ((void*)0);
  VAR_0->pub = ((void*)0);
 }




 while (FUNC_0(&VAR_0->callbacks) > 0)
  FUNC_7();


 for (VAR_1 = VAR_0->timers; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;



  FUNC_6(VAR_1);
 }
}
