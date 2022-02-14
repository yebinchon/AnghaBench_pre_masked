
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pkt_attrib {scalar_t__ bwmode; } ;
struct hal_com_data {scalar_t__ CurrentChannelBW; } ;
struct adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct hal_com_data* FUNC_0 (struct adapter*) ;

u8 FUNC_1(struct adapter *VAR_2, struct pkt_attrib *VAR_3)
{
 u8 VAR_4 = 0;
 struct hal_com_data *VAR_5 = FUNC_0(VAR_2);



 if (VAR_5->CurrentChannelBW == VAR_1) {
  if (VAR_3->bwmode == VAR_1)
   VAR_4 = 2;
  else if (VAR_3->bwmode == VAR_0)
   VAR_4 = 1;
  else
   VAR_4 = 0;
 } else if (VAR_5->CurrentChannelBW == VAR_0) {
  if ((VAR_3->bwmode == VAR_0) || (VAR_3->bwmode == VAR_1))
   VAR_4 = 1;
  else
   VAR_4 = 0;
 } else
  VAR_4 = 0;




 return VAR_4;
}
