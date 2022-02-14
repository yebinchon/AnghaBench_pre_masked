
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtllib_device {scalar_t__ iw_mode; scalar_t__ bTxUseDriverAssingedRate; scalar_t__ bTxDisableRateFallBack; } ;
struct cb_desc {int bTxDisableRateFallBack; int bTxUseDriverAssingedRate; scalar_t__ RATRIndex; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rtllib_device *VAR_2,
         struct cb_desc *VAR_3)
{
 if (VAR_2->bTxDisableRateFallBack)
  VAR_3->bTxDisableRateFallBack = 1;

 if (VAR_2->bTxUseDriverAssingedRate)
  VAR_3->bTxUseDriverAssingedRate = 1;
 if (!VAR_3->bTxDisableRateFallBack ||
     !VAR_3->bTxUseDriverAssingedRate) {
  if (VAR_2->iw_mode == VAR_1 ||
      VAR_2->iw_mode == VAR_0)
   VAR_3->RATRIndex = 0;
 }
}
