
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_usb {TYPE_1__* pipes; } ;
struct TYPE_2__ {int urb_cnt_thresh; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_1(struct ath6kl_usb *VAR_2)
{
 VAR_2->pipes[VAR_0].urb_cnt_thresh = 1;

 FUNC_0(&VAR_2->pipes[VAR_0],
           VAR_1);
}
