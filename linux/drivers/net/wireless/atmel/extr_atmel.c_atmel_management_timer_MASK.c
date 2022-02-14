
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct atmel_private {int station_state; int CurrentAuthentTransactionSeqNum; int irqlock; int management_timer; int ReAssociationRequestRetryCnt; int station_is_associated; int AssociationRequestRetryCnt; int exclude_unencrypted; int wep_is_on; int AuthenticationRequestRetryCnt; scalar_t__ card; int (* present_callback ) (scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 struct atmel_private* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct atmel_private* VAR_8 ;
 int FUNC_3 (struct atmel_private*) ;
 int FUNC_4 (struct atmel_private*,int) ;
 int FUNC_5 (struct atmel_private*,int,int *,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_9)
{
 struct atmel_private *VAR_10 = FUNC_1(VAR_10, VAR_9, VAR_7);
 unsigned long VAR_11;


 if (VAR_10->card && VAR_10->present_callback &&
  !(*VAR_10->present_callback)(VAR_10->card))
  return;

 FUNC_6(&VAR_10->irqlock, VAR_11);

 switch (VAR_10->station_state) {

 case 129:
  if (VAR_10->AuthenticationRequestRetryCnt >= VAR_1) {
   FUNC_0(VAR_10, VAR_3);
   VAR_10->station_is_associated = 0;
   VAR_10->AuthenticationRequestRetryCnt = 0;
   FUNC_3(VAR_10);
  } else {
   int VAR_12 = VAR_4;
   VAR_10->AuthenticationRequestRetryCnt++;
   VAR_10->CurrentAuthentTransactionSeqNum = 0x0001;
   FUNC_2(&VAR_10->management_timer, VAR_6 + VAR_2);
   if (VAR_10->wep_is_on && VAR_10->exclude_unencrypted)
    VAR_12 = VAR_5;
   FUNC_5(VAR_10, VAR_12, ((void*)0), 0);
   }
   break;

 case 130:
  if (VAR_10->AssociationRequestRetryCnt == VAR_0) {
   FUNC_0(VAR_10, VAR_3);
   VAR_10->station_is_associated = 0;
   VAR_10->AssociationRequestRetryCnt = 0;
   FUNC_3(VAR_10);
  } else {
   VAR_10->AssociationRequestRetryCnt++;
   FUNC_2(&VAR_10->management_timer, VAR_6 + VAR_2);
   FUNC_4(VAR_10, 0);
  }
   break;

 case 128:
  if (VAR_10->ReAssociationRequestRetryCnt == VAR_0) {
   FUNC_0(VAR_10, VAR_3);
   VAR_10->station_is_associated = 0;
   VAR_10->ReAssociationRequestRetryCnt = 0;
   FUNC_3(VAR_10);
  } else {
   VAR_10->ReAssociationRequestRetryCnt++;
   FUNC_2(&VAR_10->management_timer, VAR_6 + VAR_2);
   FUNC_4(VAR_10, 1);
  }
  break;

 default:
  break;
 }

 FUNC_7(&VAR_10->irqlock, VAR_11);
}
