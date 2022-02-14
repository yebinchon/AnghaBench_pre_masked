
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {scalar_t__ bwmode; } ;
struct hal_com_data {scalar_t__ CurrentChannelBW; scalar_t__ nCur80MhzPrimeSC; scalar_t__ nCur40MhzPrimeSC; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 struct hal_com_data* FUNC_1 (struct adapter*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

u8 FUNC_2(struct adapter *VAR_12, struct pkt_attrib *VAR_13)
{
 u8 VAR_14 = 0;
 struct hal_com_data *VAR_15 = FUNC_1(VAR_12);



 if (VAR_15->CurrentChannelBW == VAR_2) {
  if (VAR_13->bwmode == VAR_2) {
   VAR_14 = VAR_11;
  } else if (VAR_13->bwmode == VAR_1) {
   if (VAR_15->nCur80MhzPrimeSC == VAR_3)
    VAR_14 = VAR_9;
   else if (VAR_15->nCur80MhzPrimeSC == VAR_4)
    VAR_14 = VAR_10;
   else
    FUNC_0("SCMapping: Not Correct Primary40MHz Setting\n");
  } else {
   if ((VAR_15->nCur40MhzPrimeSC == VAR_3) && (VAR_15->nCur80MhzPrimeSC == VAR_3))
    VAR_14 = VAR_6;
   else if ((VAR_15->nCur40MhzPrimeSC == VAR_4) && (VAR_15->nCur80MhzPrimeSC == VAR_3))
    VAR_14 = VAR_5;
   else if ((VAR_15->nCur40MhzPrimeSC == VAR_3) && (VAR_15->nCur80MhzPrimeSC == VAR_4))
    VAR_14 = VAR_8;
   else if ((VAR_15->nCur40MhzPrimeSC == VAR_4) && (VAR_15->nCur80MhzPrimeSC == VAR_4))
    VAR_14 = VAR_7;
   else
    FUNC_0("SCMapping: Not Correct Primary40MHz Setting\n");
  }
 } else if (VAR_15->CurrentChannelBW == VAR_1) {


  if (VAR_13->bwmode == VAR_1) {
   VAR_14 = VAR_11;
  } else if (VAR_13->bwmode == VAR_0) {
   if (VAR_15->nCur40MhzPrimeSC == VAR_4) {
    VAR_14 = VAR_8;
   } else if (VAR_15->nCur40MhzPrimeSC == VAR_3) {
    VAR_14 = VAR_5;
   } else {
    VAR_14 = VAR_11;
   }
  }
 } else {
  VAR_14 = VAR_11;
 }

 return VAR_14;
}
