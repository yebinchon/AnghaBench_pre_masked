
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct recv_frame {TYPE_1__* pkt; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct TYPE_2__ {unsigned char* data; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct recv_frame*,unsigned char) ;

__attribute__((used)) static unsigned int FUNC_1(struct recv_frame *VAR_2)
{
 u8 *VAR_3 = VAR_2->pkt->data;
 u8 *VAR_4;
 u8 VAR_5 = 0;

 VAR_4 = (unsigned char *)(VAR_3 + sizeof(struct ieee80211_hdr_3addr));
 VAR_5 = VAR_4[7];

 if (FUNC_0(VAR_2, VAR_5) == VAR_0)
  return VAR_0;

 return VAR_1;
}
