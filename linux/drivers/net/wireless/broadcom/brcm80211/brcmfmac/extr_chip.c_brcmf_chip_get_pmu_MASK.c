
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_core {int rev; } ;
struct brcmf_chip {int cc_caps_ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct brcmf_core* FUNC_0 (struct brcmf_chip*) ;
 struct brcmf_core* FUNC_1 (struct brcmf_chip*,int ) ;

struct brcmf_core *FUNC_2(struct brcmf_chip *VAR_2)
{
 struct brcmf_core *VAR_3 = FUNC_0(VAR_2);
 struct brcmf_core *VAR_4;


 if (VAR_3->rev >= 35 &&
     VAR_2->cc_caps_ext & VAR_0) {
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (VAR_4)
   return VAR_4;
 }


 return VAR_3;
}
