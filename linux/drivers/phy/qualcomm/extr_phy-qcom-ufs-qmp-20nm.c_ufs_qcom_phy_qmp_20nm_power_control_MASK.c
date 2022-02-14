
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_qcom_phy {int quirks; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static
void FUNC_3(struct ufs_qcom_phy *VAR_3, bool VAR_4)
{
 bool VAR_5 = VAR_3->quirks &
  VAR_2;

 if (VAR_4) {
  FUNC_2(0x1, VAR_3->mmio + VAR_1);




  FUNC_0();

  if (VAR_5) {




   FUNC_1(1, 2);
   FUNC_2(0x0A, VAR_3->mmio +
           VAR_0);
   FUNC_2(0x08, VAR_3->mmio +
           VAR_0);




   FUNC_0();
  }
 } else {
  if (VAR_5) {
   FUNC_2(0x0A, VAR_3->mmio +
           VAR_0);
   FUNC_2(0x02, VAR_3->mmio +
           VAR_0);




   FUNC_0();
  }

  FUNC_2(0x0, VAR_3->mmio + VAR_1);




  FUNC_0();
 }
}
