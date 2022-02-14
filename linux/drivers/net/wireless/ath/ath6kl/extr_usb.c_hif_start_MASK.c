
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_usb {TYPE_1__* pipes; } ;
struct ath6kl {int dummy; } ;
struct TYPE_2__ {int urb_cnt_thresh; int urb_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath6kl_usb* FUNC_0 (struct ath6kl*) ;
 int FUNC_1 (struct ath6kl_usb*) ;

__attribute__((used)) static void FUNC_2(struct ath6kl *VAR_2)
{
 struct ath6kl_usb *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_1(VAR_3);


 for (VAR_4 = VAR_0;
      VAR_4 <= VAR_1; VAR_4++) {
  VAR_3->pipes[VAR_4].urb_cnt_thresh =
      VAR_3->pipes[VAR_4].urb_alloc / 2;
 }
}
