
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_usb {TYPE_1__* pipes; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int urb_cnt_thresh; int urb_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ath10k_usb* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;

__attribute__((used)) static int FUNC_2(struct ath10k *VAR_2)
{
 int VAR_3;
 struct ath10k_usb *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_2);


 for (VAR_3 = VAR_0;
      VAR_3 <= VAR_1; VAR_3++) {
  VAR_4->pipes[VAR_3].urb_cnt_thresh =
      VAR_4->pipes[VAR_3].urb_alloc / 2;
 }

 return 0;
}
