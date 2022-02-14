
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;


 int FUNC_0 (struct pm8001_hba_info*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pm8001_hba_info*,int,int ) ;
 int FUNC_3 (struct pm8001_hba_info*,int,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct pm8001_hba_info *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 FUNC_0(VAR_2,
  FUNC_4("chip reset start\n"));


 VAR_4 = FUNC_2(VAR_2, 1, VAR_0);
 VAR_4 &= ~(VAR_1);
 FUNC_3(VAR_2, 1, VAR_0, VAR_4);


 FUNC_5(10);


 VAR_4 = FUNC_2(VAR_2, 1, VAR_0);
 VAR_4 |= VAR_1;
 FUNC_3(VAR_2, 1, VAR_0, VAR_4);


 FUNC_5(10);


 VAR_3 = 20;
 do {
  FUNC_1(1);
 } while ((--VAR_3) != 0);

 FUNC_0(VAR_2,
  FUNC_4("chip reset finished\n"));
}
