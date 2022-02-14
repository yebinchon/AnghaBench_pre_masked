
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; scalar_t__ cb; } ;
struct efx_ptp_match {int* words; int state; scalar_t__ expiry; } ;
struct efx_ptp_data {scalar_t__ mode; int work; int workwq; int rxq; } ;
struct efx_nic {struct efx_ptp_data* ptp_data; } ;
struct efx_channel {struct efx_nic* efx; } ;
typedef int __be16 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;

__attribute__((used)) static bool FUNC_7(struct efx_channel *VAR_22, struct sk_buff *VAR_23)
{
 struct efx_nic *VAR_24 = VAR_22->efx;
 struct efx_ptp_data *VAR_25 = VAR_24->ptp_data;
 struct efx_ptp_match *VAR_26 = (struct efx_ptp_match *)VAR_23->cb;
 u8 *VAR_27, *VAR_28;
 unsigned int VAR_29;
 u8 *VAR_30;

 VAR_26->expiry = VAR_21 + FUNC_2(VAR_3);


 if (VAR_25->mode == VAR_0) {
  if (!FUNC_4(VAR_23, VAR_8)) {
   return 0;
  }
  VAR_30 = VAR_23->data;
  VAR_29 = FUNC_3(*(__be16 *)&VAR_30[VAR_12]);
  if (VAR_29 != VAR_18) {
   return 0;
  }




  VAR_27 = VAR_30 + VAR_11;
  VAR_28 = VAR_30 + VAR_11 + 3;
 } else {
  if (!FUNC_4(VAR_23, VAR_13)) {
   return 0;
  }
  VAR_30 = VAR_23->data;
  VAR_29 = VAR_30[VAR_17];
  if ((VAR_29 & VAR_20) != VAR_19) {
   return 0;
  }
  VAR_28 = VAR_30 + VAR_16 + 5;
  if (VAR_25->mode == VAR_1) {
   VAR_27 = VAR_30 + VAR_16 + 2;
  } else {
   VAR_27 = VAR_30 + VAR_16 + 0;
   FUNC_0(VAR_25->mode != VAR_2);
  }
 }


 if (FUNC_3(*(__be16 *)&VAR_30[VAR_4]) == VAR_5) {
  VAR_26->state = VAR_7;




  FUNC_1(VAR_10 != VAR_15);
  FUNC_1(VAR_9 != VAR_14);


  VAR_26->words[0] = (VAR_27[0] |
       (VAR_27[1] << 8) |
       (VAR_27[2] << 16) |
       (VAR_28[0] << 24));
  VAR_26->words[1] = (VAR_28[1] |
       (VAR_28[2] << 8) |
       (VAR_30[VAR_10 +
      VAR_9 - 1] <<
        16));
 } else {
  VAR_26->state = VAR_6;
 }

 FUNC_6(&VAR_25->rxq, VAR_23);
 FUNC_5(VAR_25->workwq, &VAR_25->work);

 return 1;
}
