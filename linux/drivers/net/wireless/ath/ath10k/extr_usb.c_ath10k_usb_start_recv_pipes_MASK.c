
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_usb {TYPE_1__* pipes; } ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int urb_cnt_thresh; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ath10k*,TYPE_1__*) ;
 struct ath10k_usb* FUNC_1 (struct ath10k*) ;

__attribute__((used)) static void FUNC_2(struct ath10k *VAR_1)
{
 struct ath10k_usb *VAR_2 = FUNC_1(VAR_1);

 VAR_2->pipes[VAR_0].urb_cnt_thresh = 1;

 FUNC_0(VAR_1,
           &VAR_2->pipes[VAR_0]);
}
