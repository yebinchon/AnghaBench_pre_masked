
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* rx_data; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef unsigned char u8 ;
struct ieee80211_hdr_3addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (union recv_frame*,unsigned char) ;

__attribute__((used)) static unsigned int FUNC_1(union recv_frame *VAR_2)
{
 u8 *VAR_3 = VAR_2->u.hdr.rx_data;
 u8 *VAR_4;
 u8 VAR_5 = 0;

 VAR_4 = (unsigned char *)(VAR_3 + sizeof(struct ieee80211_hdr_3addr));

 VAR_5 = VAR_4[7];

 if (FUNC_0(VAR_2, VAR_5) == VAR_0)
  return VAR_0;

 return VAR_1;
}
