
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ftdi {int expected; int u132_lock; scalar_t__ ed_found; scalar_t__ received; struct u132_target* target; } ;
struct u132_target {int active; int condition_code; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_ftdi*,struct u132_target*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_ftdi *VAR_1)
{
 int VAR_2 = 4;
 FUNC_1(&VAR_1->u132_lock);
 while (VAR_2-- > 0) {
  struct u132_target *VAR_3 = &VAR_1->target[VAR_2];
  if (VAR_3->active == 1) {
   VAR_3->condition_code = VAR_0;
   FUNC_2(&VAR_1->u132_lock);
   FUNC_0(VAR_1, VAR_3, ((void*)0), 0);
   FUNC_1(&VAR_1->u132_lock);
  }
 }
 VAR_1->received = 0;
 VAR_1->expected = 4;
 VAR_1->ed_found = 0;
 FUNC_2(&VAR_1->u132_lock);
}
