
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pm8001_hba_info {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_2 (struct pm8001_hba_info*,int ,int ,scalar_t__) ;
 int FUNC_3 (char*,scalar_t__) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct pm8001_hba_info *VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 unsigned long VAR_6;
 FUNC_2(VAR_3, 0, VAR_1, VAR_4);

 VAR_6 = VAR_2 + VAR_0;
 do {
  VAR_5 = FUNC_1(VAR_3, 0, VAR_1);
 } while ((VAR_5 != VAR_4) && FUNC_4(VAR_2, VAR_6));
 if (VAR_5 != VAR_4) {
  FUNC_0(VAR_3,
   FUNC_3("TIMEOUT:MEMBASE_II_SHIFT_REGISTER"
   " = 0x%x\n", VAR_5));
  return -1;
 }
 return 0;
}
