
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct recv_frame {TYPE_1__* pkt; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct adapter {int eeprompriv; } ;
struct TYPE_2__ {scalar_t__* data; } ;



 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (struct recv_frame*,scalar_t__) ;
 unsigned int FUNC_4 (struct recv_frame*) ;

__attribute__((used)) static unsigned int FUNC_5(struct adapter *VAR_3,
         struct recv_frame *VAR_4)
{
 unsigned int VAR_5 = VAR_2;
 u8 *VAR_6 = VAR_4->pkt->data;
 u8 *VAR_7 = VAR_6 + sizeof(struct ieee80211_hdr_3addr);
 u8 VAR_8, VAR_9;


 if (FUNC_1(FUNC_2(&VAR_3->eeprompriv), FUNC_0(VAR_6), VAR_0))
  goto exit;

 VAR_8 = VAR_7[0];
 if (VAR_8 != VAR_1)
  goto exit;

 VAR_9 = VAR_7[1];
 switch (VAR_9) {
 case 128:
  VAR_5 = FUNC_4(VAR_4);
  break;
 default:
  VAR_5 = FUNC_3(VAR_4, VAR_9);
  break;
 }

exit:
 return VAR_5;
}
