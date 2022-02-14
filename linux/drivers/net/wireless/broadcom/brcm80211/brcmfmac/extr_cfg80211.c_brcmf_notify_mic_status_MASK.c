
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct brcmf_if {int ndev; } ;
struct brcmf_event_msg {int flags; int addr; } ;
typedef int s32 ;
typedef enum nl80211_key_type { ____Placeholder_nl80211_key_type } nl80211_key_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int,int,int *,int ) ;

__attribute__((used)) static s32
FUNC_1(struct brcmf_if *VAR_4,
   const struct brcmf_event_msg *VAR_5, void *VAR_6)
{
 u16 VAR_7 = VAR_5->flags;
 enum nl80211_key_type VAR_8;

 if (VAR_7 & VAR_0)
  VAR_8 = VAR_2;
 else
  VAR_8 = VAR_3;

 FUNC_0(VAR_4->ndev, (u8 *)&VAR_5->addr, VAR_8, -1,
         ((void*)0), VAR_1);

 return 0;
}
