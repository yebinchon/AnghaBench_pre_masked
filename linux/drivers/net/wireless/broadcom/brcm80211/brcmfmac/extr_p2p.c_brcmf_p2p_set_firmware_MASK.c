
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,int ,int) ;
 int FUNC_2 (struct brcmf_if*,char*,int *,int ) ;
 int FUNC_3 (struct brcmf_if*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct brcmf_if *VAR_3, u8 *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_3->drvr;
 s32 VAR_6 = 0;

 FUNC_1(VAR_3, VAR_0, 1);
 FUNC_3(VAR_3, "apsta", 1);
 FUNC_1(VAR_3, VAR_1, 1);






 FUNC_3(VAR_3, "p2p_disc", 0);

 VAR_6 = FUNC_2(VAR_3, "p2p_da_override", VAR_4,
           VAR_2);
 if (VAR_6)
  FUNC_0(VAR_5, "failed to update device address ret %d\n", VAR_6);

 return VAR_6;
}
