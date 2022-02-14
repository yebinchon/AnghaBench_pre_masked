
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_1 (struct brcmf_pub*,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct brcmf_if*,char*,int*) ;

__attribute__((used)) static void FUNC_4(struct brcmf_if *VAR_7, u32 VAR_8[])
{
 struct brcmf_pub *VAR_9 = VAR_7->drvr;
 u32 VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = VAR_3;
 VAR_12 = FUNC_3(VAR_7, "bw_cap", &VAR_10);
 if (!VAR_12) {
  VAR_8[VAR_1] = VAR_10;
  VAR_10 = VAR_4;
  VAR_12 = FUNC_3(VAR_7, "bw_cap", &VAR_10);
  if (!VAR_12) {
   VAR_8[VAR_2] = VAR_10;
   return;
  }
  FUNC_0(1);
  return;
 }
 FUNC_2(VAR_0, "fallback to mimo_bw_cap info\n");
 VAR_11 = 0;
 VAR_12 = FUNC_3(VAR_7, "mimo_bw_cap", &VAR_11);
 if (VAR_12)

  VAR_11 = 130;

 switch (VAR_11) {
 case 128:
  VAR_8[VAR_1] |= VAR_6;

 case 129:
  VAR_8[VAR_2] |= VAR_6;

 case 130:
  VAR_8[VAR_1] |= VAR_5;
  VAR_8[VAR_2] |= VAR_5;
  break;
 default:
  FUNC_1(VAR_9, "invalid mimo_bw_cap value\n");
 }
}
