
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pub {int dummy; } ;
struct brcmf_join_pref_params {int len; scalar_t__ band; scalar_t__ rssi_gain; int type; } ;
struct brcmf_if {struct brcmf_pub* drvr; } ;
typedef int join_pref_params ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct brcmf_pub*,char*,int) ;
 int FUNC_1 (struct brcmf_if*,char*,struct brcmf_join_pref_params*,int) ;

void FUNC_2(struct brcmf_if *VAR_4)
{
 struct brcmf_pub *VAR_5 = VAR_4->drvr;
 struct brcmf_join_pref_params VAR_6[2];
 int VAR_7;


 VAR_6[0].type = VAR_2;
 VAR_6[0].len = 2;
 VAR_6[0].rssi_gain = VAR_1;
 VAR_6[0].band = VAR_3;

 VAR_6[1].type = VAR_0;
 VAR_6[1].len = 2;
 VAR_6[1].rssi_gain = 0;
 VAR_6[1].band = 0;
 VAR_7 = FUNC_1(VAR_4, "join_pref", VAR_6,
           sizeof(VAR_6));
 if (VAR_7)
  FUNC_0(VAR_5, "Set join_pref error (%d)\n", VAR_7);
}
