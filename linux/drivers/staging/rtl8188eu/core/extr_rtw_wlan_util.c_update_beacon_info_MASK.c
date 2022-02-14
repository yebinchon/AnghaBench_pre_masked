
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct sta_info {int dummy; } ;
struct ndis_802_11_var_ie {int ElementID; scalar_t__ Length; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct ndis_802_11_var_ie*) ;
 int FUNC_1 (struct adapter*,struct sta_info*) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_2 (struct adapter*,struct ndis_802_11_var_ie*) ;

void FUNC_3(struct adapter *VAR_2, u8 *VAR_3, uint VAR_4, struct sta_info *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 struct ndis_802_11_var_ie *VAR_8;

 VAR_7 = VAR_4 - (VAR_1 + VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_7;) {
  VAR_8 = (struct ndis_802_11_var_ie *)(VAR_3 + (VAR_1 + VAR_0) + VAR_6);

  switch (VAR_8->ElementID) {
  case 128:
   FUNC_2(VAR_2, VAR_8);
   break;
  case 129:
   FUNC_0(VAR_2, VAR_8);
   FUNC_1(VAR_2, VAR_5);
   break;
  default:
   break;
  }

  VAR_6 += (VAR_8->Length + 2);
 }
}
