
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct brcmf_pub {int dummy; } ;
struct brcmf_if {int drvr; } ;
struct brcmf_bus {struct brcmf_pub* drvr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct brcmf_if*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct brcmf_if*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct brcmf_pub*,struct sk_buff*,struct brcmf_if**) ;
 struct brcmf_bus* FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;

void FUNC_8(struct device *VAR_2, struct sk_buff *VAR_3, bool VAR_4)
{
 struct brcmf_if *VAR_5;
 struct brcmf_bus *VAR_6 = FUNC_6(VAR_2);
 struct brcmf_pub *VAR_7 = VAR_6->drvr;

 FUNC_0(VAR_1, "Enter: %s: rxp=%p\n", FUNC_7(VAR_2), VAR_3);

 if (FUNC_5(VAR_7, VAR_3, &VAR_5))
  return;

 if (FUNC_3(VAR_3)) {
  FUNC_4(VAR_5, VAR_3);
 } else {

  if (VAR_4)
   FUNC_1(VAR_5->drvr, VAR_3,
            VAR_0);

  FUNC_2(VAR_5, VAR_3);
 }
}
