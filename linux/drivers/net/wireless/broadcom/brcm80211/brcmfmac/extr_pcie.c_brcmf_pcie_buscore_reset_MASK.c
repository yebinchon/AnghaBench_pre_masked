
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcmf_pciedev_info {struct brcmf_chip* ci; } ;
struct brcmf_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_1 (struct brcmf_pciedev_info*) ;
 int FUNC_2 (struct brcmf_pciedev_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct brcmf_chip *VAR_2)
{
 struct brcmf_pciedev_info *VAR_3 = (struct brcmf_pciedev_info *)VAR_1;
 u32 VAR_4;

 VAR_3->ci = VAR_2;
 FUNC_1(VAR_3);

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 != 0xffffffff)
  FUNC_2(VAR_3, VAR_0,
           VAR_4);

 return 0;
}
