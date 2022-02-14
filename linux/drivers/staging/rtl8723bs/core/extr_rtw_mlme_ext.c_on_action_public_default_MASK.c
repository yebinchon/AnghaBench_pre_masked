
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* rx_data; struct adapter* adapter; int len; } ;
struct TYPE_4__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int uint ;
typedef int u8 ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct adapter {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 char* FUNC_0 (int) ;
 unsigned int FUNC_1 (union recv_frame*,int) ;
 int FUNC_2 (struct adapter*,int*,int ,char*) ;
 scalar_t__ FUNC_3 (char*,char*,char*,int) ;

__attribute__((used)) static unsigned int FUNC_4(union recv_frame *VAR_2, u8 VAR_3)
{
 unsigned int VAR_4 = VAR_0;
 u8 *VAR_5 = VAR_2->u.hdr.rx_data;
 uint VAR_6 = VAR_2->u.hdr.len;
 u8 *VAR_7 = VAR_5 + sizeof(struct ieee80211_hdr_3addr);
 u8 VAR_8;
 struct adapter *VAR_9 = VAR_2->u.hdr.adapter;
 int VAR_10 = 0;
 char VAR_11[64];

 VAR_8 = VAR_7[2];

 if (FUNC_1(VAR_2, VAR_8) == VAR_0)
  goto exit;

 VAR_10 += FUNC_3((VAR_11+VAR_10), "%s(token:%u)", FUNC_0(VAR_3), VAR_8);
 FUNC_2(VAR_9, VAR_5, VAR_6, VAR_11);

 VAR_4 = VAR_1;

exit:
 return VAR_4;
}
