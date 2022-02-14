
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_if {int dummy; } ;
struct brcmf_bcdc {int fws; } ;
struct TYPE_2__ {struct brcmf_bcdc* pd; } ;


 int FUNC_0 (struct brcmf_if*,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 struct brcmf_if* FUNC_2 (struct brcmf_pub*,int) ;
 int FUNC_3 (struct brcmf_pub*,int,int ,struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct brcmf_pub *VAR_0, int VAR_1,
       struct sk_buff *VAR_2)
{
 struct brcmf_if *VAR_3 = FUNC_2(VAR_0, VAR_1);
 struct brcmf_bcdc *VAR_4 = VAR_0->proto->pd;

 if (!FUNC_1(VAR_4->fws))
  return FUNC_3(VAR_0, VAR_1, 0, VAR_2);

 return FUNC_0(VAR_3, VAR_2);
}
