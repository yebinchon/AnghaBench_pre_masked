
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_pciedev_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_pciedev_info*) ;
 scalar_t__ FUNC_2 (struct brcmf_pciedev_info*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct brcmf_pciedev_info *VAR_6 = (struct brcmf_pciedev_info *)VAR_5;

 if (FUNC_2(VAR_6, VAR_0)) {
  FUNC_1(VAR_6);
  FUNC_0(VAR_3, "Enter\n");
  return VAR_2;
 }
 return VAR_1;
}
