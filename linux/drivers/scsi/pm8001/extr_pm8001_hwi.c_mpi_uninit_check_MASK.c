
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pm8001_hba_info {int general_stat_tbl_addr; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct pm8001_hba_info*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (struct pm8001_hba_info*,int) ;
 int FUNC_4 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_5 (struct pm8001_hba_info*,int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct pm8001_hba_info *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u16 VAR_11;
 FUNC_2(VAR_7->pdev, VAR_5, &VAR_11);
 if (VAR_11 == 0x8081 || VAR_11 == 0x0042) {
  if (-1 == FUNC_3(VAR_7, VAR_0)) {
   FUNC_0(VAR_7,
    FUNC_7("Shift Bar4 to 0x%x failed\n",
     VAR_0));
   return -1;
  }
 }
 FUNC_1(VAR_7);


 FUNC_5(VAR_7, 0, VAR_4, VAR_6);


 VAR_8 = 1 * 1000 * 1000;
 do {
  FUNC_8(1);
  VAR_9 = FUNC_4(VAR_7, 0, VAR_4);
  VAR_9 &= VAR_6;
 } while ((VAR_9 != 0) && (--VAR_8));

 if (!VAR_8) {
  FUNC_0(VAR_7,
   FUNC_7("TIMEOUT:IBDB value/=0x%x\n", VAR_9));
  return -1;
 }



 VAR_8 = 1 * 1000 * 1000;
 do {
  FUNC_8(1);
  VAR_10 =
   FUNC_6(VAR_7->general_stat_tbl_addr,
   VAR_1);
  if (VAR_3 ==
   (VAR_10 & VAR_2))
   break;
 } while (--VAR_8);
 if (!VAR_8) {
  FUNC_0(VAR_7,
   FUNC_7(" TIME OUT MPI State = 0x%x\n",
    VAR_10 & VAR_2));
  return -1;
 }
 return 0;
}
