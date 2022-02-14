
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct recv_frame {TYPE_1__* pkt; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct TYPE_2__ {int * data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct recv_frame*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct recv_frame *VAR_2,
          u8 VAR_3)
{
 unsigned int VAR_4 = VAR_0;
 u8 *VAR_5 = VAR_2->pkt->data;
 u8 *VAR_6 = VAR_5 + sizeof(struct ieee80211_hdr_3addr);
 u8 VAR_7;

 VAR_7 = VAR_6[2];

 if (FUNC_0(VAR_2, VAR_7) == VAR_0)
  goto exit;

 VAR_4 = VAR_1;

exit:
 return VAR_4;
}
