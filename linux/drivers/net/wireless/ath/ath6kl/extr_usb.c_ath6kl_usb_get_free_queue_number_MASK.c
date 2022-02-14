
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ath6kl_usb {TYPE_1__* pipes; } ;
struct ath6kl {int dummy; } ;
struct TYPE_2__ {int urb_cnt; } ;


 struct ath6kl_usb* FUNC_0 (struct ath6kl*) ;

__attribute__((used)) static u16 FUNC_1(struct ath6kl *VAR_0, u8 VAR_1)
{
 struct ath6kl_usb *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->pipes[VAR_1].urb_cnt;
}
