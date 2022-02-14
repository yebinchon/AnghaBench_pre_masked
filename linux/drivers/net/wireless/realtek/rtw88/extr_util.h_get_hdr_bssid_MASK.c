
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int * addr3; int * addr2; int * addr1; int frame_control; } ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline u8 *FUNC_2(struct ieee80211_hdr *VAR_0)
{
 __le16 VAR_1 = VAR_0->frame_control;
 u8 *VAR_2;

 if (FUNC_1(VAR_1))
  VAR_2 = VAR_0->addr1;
 else if (FUNC_0(VAR_1))
  VAR_2 = VAR_0->addr2;
 else
  VAR_2 = VAR_0->addr3;

 return VAR_2;
}
