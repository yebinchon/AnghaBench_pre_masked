
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_intr {int software_isr_flag; } ;
struct lan743x_adapter {struct lan743x_intr intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct lan743x_adapter *VAR_3 = VAR_2;
 struct lan743x_intr *VAR_4 = &VAR_3->intr;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_1);
 if (VAR_5 & VAR_0) {
  FUNC_1(VAR_3, VAR_1, VAR_0);
  VAR_4->software_isr_flag = 1;
 }
}
