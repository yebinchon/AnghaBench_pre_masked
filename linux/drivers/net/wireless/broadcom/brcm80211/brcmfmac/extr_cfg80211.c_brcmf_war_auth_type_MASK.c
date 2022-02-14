
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_if {int dummy; } ;
typedef enum nl80211_auth_type { ____Placeholder_nl80211_auth_type } nl80211_auth_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct brcmf_if*,int ) ;

__attribute__((used)) static
enum nl80211_auth_type FUNC_2(struct brcmf_if *VAR_4,
        enum nl80211_auth_type VAR_5)
{
 if (VAR_5 == VAR_2 &&
     FUNC_1(VAR_4, VAR_0)) {
  FUNC_0(VAR_1, "WAR: use OPEN instead of AUTO\n");
  VAR_5 = VAR_3;
 }
 return VAR_5;
}
