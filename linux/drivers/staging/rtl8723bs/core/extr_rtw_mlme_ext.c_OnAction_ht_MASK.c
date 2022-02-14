
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* rx_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef scalar_t__ u8 ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct adapter {int eeprompriv; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;

 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;

unsigned int FUNC_3(struct adapter *VAR_3, union recv_frame *VAR_4)
{
 u8 *VAR_5 = VAR_4->u.hdr.rx_data;
 u8 *VAR_6 = VAR_5 + sizeof(struct ieee80211_hdr_3addr);
 u8 VAR_7, VAR_8;


 if (FUNC_1(FUNC_2(&(VAR_3->eeprompriv)), FUNC_0(VAR_5), VAR_0))
  goto exit;

 VAR_7 = VAR_6[0];
 if (VAR_7 != VAR_1)
  goto exit;

 VAR_8 = VAR_6[1];
 switch (VAR_8) {
 case 128:
  break;
 default:
  break;
 }

exit:

 return VAR_2;
}
