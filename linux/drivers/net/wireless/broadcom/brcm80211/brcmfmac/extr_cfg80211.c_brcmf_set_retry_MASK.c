
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_pub*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct brcmf_if*,int ,int ) ;
 struct brcmf_if* FUNC_2 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_3(struct net_device *VAR_2, u32 VAR_3, bool VAR_4)
{
 struct brcmf_if *VAR_5 = FUNC_2(VAR_2);
 struct brcmf_pub *VAR_6 = VAR_5->drvr;
 s32 VAR_7 = 0;
 u32 VAR_8 = (VAR_4 ? VAR_0 : VAR_1);

 VAR_7 = FUNC_1(VAR_5, VAR_8, VAR_3);
 if (VAR_7) {
  FUNC_0(VAR_6, "cmd (%d) , error (%d)\n", VAR_8, VAR_7);
  return VAR_7;
 }
 return VAR_7;
}
