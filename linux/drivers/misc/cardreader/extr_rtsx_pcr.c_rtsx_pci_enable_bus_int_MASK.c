
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_hw_param {int interrupt_en; } ;
struct rtsx_pcr {int bier; int num_slots; struct rtsx_hw_param hw_param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtsx_pcr*,char*,int) ;
 int FUNC_1 (struct rtsx_pcr*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct rtsx_pcr *VAR_5)
{
 struct rtsx_hw_param *VAR_6 = &VAR_5->hw_param;

 VAR_5->bier = VAR_4 | VAR_3 | VAR_2
  | VAR_6->interrupt_en;

 if (VAR_5->num_slots > 1)
  VAR_5->bier |= VAR_0;


 FUNC_1(VAR_5, VAR_1, VAR_5->bier);

 FUNC_0(VAR_5, "RTSX_BIER: 0x%08x\n", VAR_5->bier);
}
