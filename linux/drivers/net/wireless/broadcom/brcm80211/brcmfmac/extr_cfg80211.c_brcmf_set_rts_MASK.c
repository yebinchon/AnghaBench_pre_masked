
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct brcmf_pub*,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct brcmf_if*,char*,int ) ;
 struct brcmf_if* FUNC_2 (struct net_device*) ;

__attribute__((used)) static s32 FUNC_3(struct net_device *VAR_0, u32 VAR_1)
{
 struct brcmf_if *VAR_2 = FUNC_2(VAR_0);
 struct brcmf_pub *VAR_3 = VAR_2->drvr;
 s32 VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_2, "rtsthresh", VAR_1);
 if (VAR_4)
  FUNC_0(VAR_3, "Error (%d)\n", VAR_4);

 return VAR_4;
}
