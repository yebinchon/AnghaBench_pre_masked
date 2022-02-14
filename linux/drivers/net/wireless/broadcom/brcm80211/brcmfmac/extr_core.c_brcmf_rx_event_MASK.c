
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
 int FUNC_0 (int ,char*,int ,struct sk_buff*) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct brcmf_pub*,struct sk_buff*,struct brcmf_if**) ;
 int FUNC_3 (struct sk_buff*) ;
 struct brcmf_bus* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;

void FUNC_6(struct device *VAR_1, struct sk_buff *VAR_2)
{
 struct brcmf_if *VAR_3;
 struct brcmf_bus *VAR_4 = FUNC_4(VAR_1);
 struct brcmf_pub *VAR_5 = VAR_4->drvr;

 FUNC_0(VAR_0, "Enter: %s: rxp=%p\n", FUNC_5(VAR_1), VAR_2);

 if (FUNC_2(VAR_5, VAR_2, &VAR_3))
  return;

 FUNC_1(VAR_3->drvr, VAR_2, 0);
 FUNC_3(VAR_2);
}
