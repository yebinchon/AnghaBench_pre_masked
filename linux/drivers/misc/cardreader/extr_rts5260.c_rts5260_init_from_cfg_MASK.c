
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct rtsx_cr_option {int ltr_enabled; int ltr_active; int force_clkreq_0; int ltr_active_latency; scalar_t__ ltr_en; } ;
struct rtsx_pcr {int pci; struct rtsx_cr_option option; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (struct rtsx_pcr*) ;
 scalar_t__ FUNC_2 (struct rtsx_pcr*,int) ;
 int FUNC_3 (struct rtsx_pcr*,int ,int*) ;
 int FUNC_4 (struct rtsx_pcr*,int) ;
 int FUNC_5 (struct rtsx_pcr*,int ) ;

__attribute__((used)) static void FUNC_6(struct rtsx_pcr *VAR_11)
{
 struct rtsx_cr_option *VAR_12 = &VAR_11->option;
 u32 VAR_13;

 FUNC_3(VAR_11, VAR_6, &VAR_13);

 if (VAR_13 & VAR_1)
  FUNC_4(VAR_11, VAR_0);

 if (VAR_13 & VAR_3)
  FUNC_4(VAR_11, VAR_2);

 if (VAR_13 & VAR_8)
  FUNC_4(VAR_11, VAR_7);

 if (VAR_13 & VAR_10)
  FUNC_4(VAR_11, VAR_9);

 FUNC_1(VAR_11);

 if (VAR_12->ltr_en) {
  u16 VAR_14;

  FUNC_0(VAR_11->pci, VAR_4, &VAR_14);
  if (VAR_14 & VAR_5) {
   VAR_12->ltr_enabled = 1;
   VAR_12->ltr_active = 1;
   FUNC_5(VAR_11, VAR_12->ltr_active_latency);
  } else {
   VAR_12->ltr_enabled = 0;
  }
 }

 if (FUNC_2(VAR_11, VAR_0 | VAR_2
    | VAR_7 | VAR_9))
  VAR_12->force_clkreq_0 = 0;
 else
  VAR_12->force_clkreq_0 = 1;
}
