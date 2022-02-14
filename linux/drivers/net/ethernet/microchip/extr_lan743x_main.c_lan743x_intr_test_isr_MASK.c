
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_intr {scalar_t__ software_isr_flag; } ;
struct lan743x_adapter {struct lan743x_intr intr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lan743x_adapter*,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct lan743x_adapter *VAR_5)
{
 struct lan743x_intr *VAR_6 = &VAR_5->intr;
 int VAR_7 = -VAR_0;
 int VAR_8 = 10;

 VAR_6->software_isr_flag = 0;


 FUNC_0(VAR_5, VAR_3, VAR_1);


 FUNC_0(VAR_5, VAR_4, VAR_1);
 while ((VAR_8 > 0) && (!(VAR_6->software_isr_flag))) {
  FUNC_1(1000, 20000);
  VAR_8--;
 }

 if (VAR_6->software_isr_flag)
  VAR_7 = 0;


 FUNC_0(VAR_5, VAR_2, VAR_1);
 return VAR_7;
}
