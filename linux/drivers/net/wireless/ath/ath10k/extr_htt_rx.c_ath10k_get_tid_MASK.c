
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int* FUNC_0 (struct ieee80211_hdr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,int,...) ;
 char** VAR_1 ;

__attribute__((used)) static char *FUNC_3(struct ieee80211_hdr *VAR_2, char *VAR_3, size_t VAR_4)
{
 u8 *VAR_5;
 int VAR_6;

 if (!FUNC_1(VAR_2->frame_control))
  return "";

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = *VAR_5 & VAR_0;
 if (VAR_6 < 8)
  FUNC_2(VAR_3, VAR_4, "tid %d (%s)", VAR_6, VAR_1[VAR_6]);
 else
  FUNC_2(VAR_3, VAR_4, "tid %d", VAR_6);

 return VAR_3;
}
