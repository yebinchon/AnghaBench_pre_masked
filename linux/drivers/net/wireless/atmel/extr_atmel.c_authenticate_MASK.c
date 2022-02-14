
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct auth_body {scalar_t__ el_id; int chall_text_len; int * chall_text; int alg; int trans_seq; int status; } ;
struct atmel_private {scalar_t__ ExpectedAuthentTransactionSeqNum; int CurrentAuthentTransactionSeqNum; int exclude_unencrypted; scalar_t__ station_is_associated; scalar_t__ AuthenticationRequestRetryCnt; scalar_t__ current_BSS; TYPE_1__* BSSinfo; scalar_t__ connect_to_any_BSS; scalar_t__ wep_is_on; scalar_t__ station_was_associated; scalar_t__ rx_buf; } ;
struct TYPE_2__ {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct atmel_private*,int ) ;
 int FUNC_1 (struct atmel_private*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct atmel_private*) ;
 int FUNC_4 (struct atmel_private*,int) ;
 int FUNC_5 (struct atmel_private*,scalar_t__,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct atmel_private *VAR_8, u16 VAR_9)
{
 struct auth_body *VAR_10 = (struct auth_body *)VAR_8->rx_buf;
 u16 VAR_11 = FUNC_2(VAR_10->status);
 u16 VAR_12 = FUNC_2(VAR_10->trans_seq);
 u16 VAR_13 = FUNC_2(VAR_10->alg);

 if (VAR_11 == VAR_7 && !VAR_8->wep_is_on) {

  if (VAR_8->station_was_associated) {
   FUNC_0(VAR_8, VAR_2);
   FUNC_4(VAR_8, 1);
   return;
  } else {
   FUNC_0(VAR_8, VAR_0);
   FUNC_4(VAR_8, 0);
   return;
  }
 }

 if (VAR_11 == VAR_7 && VAR_8->wep_is_on) {
  int VAR_14 = 0;

  if (VAR_12 != VAR_8->ExpectedAuthentTransactionSeqNum)
   return;

  if (VAR_13 == VAR_3) {
   if (VAR_12 == 0x0002) {
    VAR_14 = 1;
   }
  } else if (VAR_13 == VAR_4) {
   if (VAR_12 == 0x0002 &&
       VAR_10->el_id == VAR_5) {
    FUNC_5(VAR_8, VAR_13, VAR_10->chall_text, VAR_10->chall_text_len);
    return;
   } else if (VAR_12 == 0x0004) {
    VAR_14 = 1;
   }
  }

  if (VAR_14) {
   if (VAR_8->station_was_associated) {
    FUNC_0(VAR_8, VAR_2);
    FUNC_4(VAR_8, 1);
    return;
   } else {
    FUNC_0(VAR_8, VAR_0);
    FUNC_4(VAR_8, 0);
    return;
   }
  }
 }

 if (VAR_11 == VAR_6) {



  if (VAR_13 == VAR_3) {
   VAR_8->CurrentAuthentTransactionSeqNum = 0x001;
   VAR_8->exclude_unencrypted = 1;
   FUNC_5(VAR_8, VAR_4, ((void*)0), 0);
   return;
  } else if (VAR_13 == VAR_4
      && VAR_8->wep_is_on) {
   VAR_8->CurrentAuthentTransactionSeqNum = 0x001;
   VAR_8->exclude_unencrypted = 0;
   FUNC_5(VAR_8, VAR_3, ((void*)0), 0);
   return;
  } else if (VAR_8->connect_to_any_BSS) {
   int VAR_15;

   VAR_8->BSSinfo[(int)(VAR_8->current_BSS)].channel |= 0x80;

   if ((VAR_15 = FUNC_3(VAR_8)) != -1) {
    FUNC_1(VAR_8, VAR_15);
    return;
   }
  }
 }

 VAR_8->AuthenticationRequestRetryCnt = 0;
 FUNC_0(VAR_8, VAR_1);
 VAR_8->station_is_associated = 0;
}
