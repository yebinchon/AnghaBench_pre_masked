
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtsx_cr_option {int ltr_enabled; int ltr_active; int ltr_active_latency; scalar_t__ ltr_en; } ;
struct rtsx_pcr {int pci; struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rtsx_pcr*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (struct rtsx_pcr*,int ,int*) ;
 int FUNC_3 (struct rtsx_pcr*,int ) ;
 int FUNC_4 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static void FUNC_5(struct rtsx_pcr *VAR_13)
{
 struct rtsx_cr_option *VAR_14 = &(VAR_13->option);
 u32 VAR_15;

 if (FUNC_0(VAR_13, VAR_8))
  FUNC_2(VAR_13,
   VAR_6, &VAR_15);
 else
  FUNC_2(VAR_13,
   VAR_7, &VAR_15);

 if (VAR_15 & VAR_1)
  FUNC_3(VAR_13, VAR_0);

 if (VAR_15 & VAR_3)
  FUNC_3(VAR_13, VAR_2);

 if (VAR_15 & VAR_10)
  FUNC_3(VAR_13, VAR_9);

 if (VAR_15 & VAR_12)
  FUNC_3(VAR_13, VAR_11);

 if (VAR_14->ltr_en) {
  u16 VAR_16;

  FUNC_1(VAR_13->pci, VAR_4, &VAR_16);
  if (VAR_16 & VAR_5) {
   VAR_14->ltr_enabled = 1;
   VAR_14->ltr_active = 1;
   FUNC_4(VAR_13, VAR_14->ltr_active_latency);
  } else {
   VAR_14->ltr_enabled = 0;
  }
 }
}
