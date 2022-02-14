
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct brcmf_if {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct brcmf_if*,int ) ;
 struct brcmf_if* FUNC_2 (struct net_device*) ;

__attribute__((used)) static s32
FUNC_3(struct wiphy *VAR_4,
           struct net_device *VAR_5, u8 VAR_6)
{
 struct brcmf_if *VAR_7 = FUNC_2(VAR_5);

 FUNC_0(VAR_3, "Enter key_idx %d\n", VAR_6);

 if (FUNC_1(VAR_7, VAR_0))
  return 0;

 FUNC_0(VAR_2, "Not supported\n");

 return -VAR_1;
}
