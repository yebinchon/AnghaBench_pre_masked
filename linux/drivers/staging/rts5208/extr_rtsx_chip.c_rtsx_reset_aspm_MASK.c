
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int aspm_enabled; int aspm_l0s_l1_en; int * aspm_level; scalar_t__ dynamic_aspm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct rtsx_chip*,int,int,int,int ) ;
 int FUNC_3 (struct rtsx_chip*,int ,int ) ;
 int FUNC_4 (struct rtsx_chip*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct rtsx_chip *VAR_4)
{
 int VAR_5;

 if (VAR_4->dynamic_aspm) {
  if (!FUNC_1(VAR_4) || !FUNC_0(VAR_4, 0x5288))
   return VAR_3;

  VAR_5 = FUNC_2(VAR_4, 2, 0xC0, 0xFF,
     VAR_4->aspm_l0s_l1_en);
  if (VAR_5 != VAR_3)
   return VAR_2;

  return VAR_3;
 }

 if (FUNC_0(VAR_4, 0x5208)) {
  VAR_5 = FUNC_4(VAR_4, VAR_0, 0xFF, 0x3F);
  if (VAR_5)
   return VAR_5;
 }
 VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_4->aspm_l0s_l1_en);
 if (VAR_5 != VAR_3)
  return VAR_2;

 VAR_4->aspm_level[0] = VAR_4->aspm_l0s_l1_en;
 if (FUNC_1(VAR_4)) {
  VAR_4->aspm_level[1] = VAR_4->aspm_l0s_l1_en;
  VAR_5 = FUNC_2(VAR_4, FUNC_0(VAR_4, 0x5288) ? 2 : 1,
     0xC0, 0xFF, VAR_4->aspm_l0s_l1_en);
  if (VAR_5 != VAR_3)
   return VAR_2;
 }

 VAR_4->aspm_enabled = 1;

 return VAR_3;
}
