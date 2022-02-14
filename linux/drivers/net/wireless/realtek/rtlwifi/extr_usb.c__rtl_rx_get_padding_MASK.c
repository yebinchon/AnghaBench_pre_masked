
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int* FUNC_0 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct ieee80211_hdr *VAR_2,
     unsigned int VAR_3)
{





 if (VAR_1 == 0 || VAR_3 < sizeof(*VAR_2))
  return 0;
}
