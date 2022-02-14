
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_if {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_if*,int,int*) ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static bool FUNC_3(struct brcmf_if *VAR_3)
{
 int VAR_4 = 0;
 bool VAR_5 = 0;
 int VAR_6 = 0;
 u32 VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  VAR_4 = FUNC_0(VAR_3, 27, &VAR_7);

  if (VAR_4 < 0) {
   FUNC_2("ioc read btc params error\n");
   break;
  }

  FUNC_1(VAR_1, "sample[%d], btc_params 27:%x\n", VAR_8, VAR_7);

  if ((VAR_7 & 0x6) == 2) {
   VAR_6++;
  }

  if (VAR_6 > 2) {
   FUNC_1(VAR_1,
      "sco/esco detected, pkt id_cnt:%d samples:%d\n",
      VAR_6, VAR_8);
   VAR_5 = 1;
   break;
  }
 }
 FUNC_1(VAR_2, "exit: result=%d\n", VAR_5);
 return VAR_5;
}
